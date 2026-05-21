#!/usr/bin/env python3
"""
🚀 Universal Setup Script for DSA Repository
============================================
This Python script works on ALL operating systems:
- Windows 🪟
- macOS 🍎
- Linux 🐧

It automatically detects your OS and runs the appropriate setup.
"""

import os
import sys
import platform
import subprocess
from pathlib import Path

# 🎨 ANSI color codes (work on most terminals)
class Colors:
    GREEN = '\033[0;32m'
    BLUE = '\033[0;34m'
    YELLOW = '\033[1;33m'
    CYAN = '\033[0;36m'
    RED = '\033[0;31m'
    BOLD = '\033[1m'
    NC = '\033[0m'  # No Color

def print_header(message):
    """Print a beautiful header"""
    print()
    print(f"{Colors.CYAN}╔════════════════════════════════════════════════════════════════╗{Colors.NC}")
    print(f"{Colors.CYAN}║{Colors.NC}  {Colors.BOLD}{message}{Colors.NC}")
    print(f"{Colors.CYAN}╚════════════════════════════════════════════════════════════════╝{Colors.NC}")
    print()

def print_success(message):
    """Print success message"""
    print(f"{Colors.GREEN}✅ {message}{Colors.NC}")

def print_error(message):
    """Print error message"""
    print(f"{Colors.RED}❌ {message}{Colors.NC}")

def print_info(message):
    """Print info message"""
    print(f"{Colors.CYAN}ℹ️  {message}{Colors.NC}")

def print_warning(message):
    """Print warning message"""
    print(f"{Colors.YELLOW}⚠️  {message}{Colors.NC}")

def run_command(command, description):
    """Run a shell command and handle errors"""
    print(f"{Colors.CYAN}📦 {description}...{Colors.NC}")
    try:
        if platform.system() == "Windows":
            # On Windows, use Git Bash if available
            result = subprocess.run(
                ["bash", "-c", command],
                check=True,
                capture_output=True,
                text=True
            )
        else:
            # On Unix-like systems, use sh
            result = subprocess.run(
                command,
                shell=True,
                check=True,
                capture_output=True,
                text=True
            )
        print_success(f"{description} completed!")
        return True
    except subprocess.CalledProcessError as e:
        print_error(f"{description} failed!")
        print(f"Error: {e.stderr}")
        return False
    except FileNotFoundError:
        print_error("Bash not found! Please install Git Bash on Windows.")
        return False

def check_prerequisites():
    """Check if required tools are installed"""
    print_info("Checking prerequisites...")
    
    os_name = platform.system()
    print(f"   🖥️  Operating System: {os_name}")
    print(f"   🐍 Python Version: {sys.version.split()[0]}")
    
    # Check for bash (needed on Windows)
    if os_name == "Windows":
        try:
            subprocess.run(["bash", "--version"], capture_output=True, check=True)
            print_success("Git Bash found!")
        except (subprocess.CalledProcessError, FileNotFoundError):
            print_warning("Git Bash not found!")
            print()
            print("💡 Please install Git for Windows:")
            print("   https://git-scm.com/download/win")
            print()
            return False
    
    return True

def make_scripts_executable():
    """Make all shell scripts executable (Unix-like systems)"""
    if platform.system() != "Windows":
        print_info("Making scripts executable...")
        scripts = [
            "scripts/setup.sh",
            "scripts/install_hooks.sh",
            "scripts/format.sh",
            "scripts/cpp",
            "scripts/run.sh",
            "scripts/check_executables.sh",
            "scripts/update_gitignore.sh",
            "hooks/pre-commit",
            "hooks/post-commit"
        ]
        
        for script in scripts:
            if os.path.exists(script):
                os.chmod(script, 0o755)
        
        print_success("Scripts are now executable!")

def main():
    """Main setup function"""
    print_header("🚀 DSA Repository Setup")
    
    # Check prerequisites
    if not check_prerequisites():
        sys.exit(1)
    
    print()
    
    # Make scripts executable (Unix-like systems)
    make_scripts_executable()
    
    print()
    print(f"{Colors.BOLD}📋 Setup Steps:{Colors.NC}")
    print()
    
    # Step 1: Setup development tools
    success = run_command(
        "bash scripts/setup.sh",
        "Step 1: Installing development tools"
    )
    if not success:
        print_warning("Development tools installation failed, but continuing...")
    
    print()
    
    # Step 2: Install git hooks
    success = run_command(
        "bash scripts/install_hooks.sh",
        "Step 2: Installing git hooks"
    )
    if not success:
        print_warning("Git hooks installation failed, but continuing...")
    
    print()
    
    # Step 3: Format code (optional)
    print(f"{Colors.CYAN}📦 Step 3: Formatting code (optional)...{Colors.NC}")
    response = input(f"{Colors.YELLOW}Format all C++ files now? (y/n): {Colors.NC}").lower()
    if response == 'y':
        run_command(
            "bash scripts/format.sh",
            "Formatting code"
        )
    else:
        print_info("Skipping code formatting")
    
    print()
    
    # Success message
    print_header("✅ Setup Complete! 🎉")
    
    print(f"{Colors.CYAN}🎯 What's Installed:{Colors.NC}")
    print(f"   {Colors.GREEN}✓{Colors.NC} Development tools (clangd, clang-format)")
    print(f"   {Colors.GREEN}✓{Colors.NC} Git hooks (pre-commit, post-commit)")
    print(f"   {Colors.GREEN}✓{Colors.NC} Code formatting configured")
    print()
    
    print(f"{Colors.CYAN}🚀 Next Steps:{Colors.NC}")
    print("   1. Open this folder in your IDE (VS Code, CLion, etc.)")
    print("   2. Start coding! Try: ./scripts/cpp C++/01_Basics/FirstCode.cpp")
    print("   3. Make a commit to see beautiful git messages!")
    print()
    
    print(f"{Colors.CYAN}💡 Quick Commands:{Colors.NC}")
    if platform.system() == "Windows":
        print("   - Compile and run: bash scripts/cpp file.cpp")
        print("   - Format code: bash scripts/format.sh")
        print("   - Check executables: bash scripts/check_executables.sh")
    else:
        print("   - Compile and run: ./scripts/cpp file.cpp")
        print("   - Format code: ./scripts/format.sh")
        print("   - Check executables: ./scripts/check_executables.sh")
    print()
    
    print_header("🎊 Happy Coding! 💪")

if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print()
        print_warning("Setup interrupted by user")
        sys.exit(1)
    except Exception as e:
        print()
        print_error(f"An error occurred: {e}")
        sys.exit(1)
