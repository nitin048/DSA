@echo off
REM ============================================
REM 🚀 Universal Setup Script for Windows
REM ============================================
REM This script installs everything needed for the DSA repository

setlocal enabledelayedexpansion

echo.
echo ╔════════════════════════════════════════════════════════════════╗
echo ║  🚀 DSA Repository Setup - Windows 🪟                        ║
echo ╚════════════════════════════════════════════════════════════════╝
echo.

REM Check if Git Bash is available
where bash >nul 2>nul
if %errorlevel% equ 0 (
    echo ✅ Git Bash detected! Using bash scripts...
    echo.
    
    REM Run all setup scripts using Git Bash
    echo 📦 Step 1: Installing development tools...
    bash scripts/setup.sh
    
    echo.
    echo 🎣 Step 2: Installing git hooks...
    bash scripts/install_hooks.sh
    
    echo.
    echo 🎨 Step 3: Formatting code...
    bash scripts/format.sh
    
    goto :success
)

REM If Git Bash not available, provide instructions
echo ⚠️  Git Bash not found!
echo.
echo 💡 To use this repository on Windows, you need Git Bash:
echo.
echo    1. Download Git for Windows from: https://git-scm.com/download/win
echo    2. Install with default options
echo    3. Run this script again
echo.
echo 🔧 Alternative: Use WSL (Windows Subsystem for Linux)
echo    1. Open PowerShell as Administrator
echo    2. Run: wsl --install
echo    3. Restart your computer
echo    4. Open Ubuntu and run: ./setup.sh
echo.
pause
exit /b 1

:success
echo.
echo ╔════════════════════════════════════════════════════════════════╗
echo ║  ✅ Setup Complete! 🎉                                       ║
echo ╚════════════════════════════════════════════════════════════════╝
echo.
echo 🎯 What's Installed:
echo    ✓ Development tools (clangd, clang-format)
echo    ✓ Git hooks (pre-commit, post-commit)
echo    ✓ Code formatting configured
echo.
echo 🚀 Next Steps:
echo    1. Open this folder in your IDE (VS Code, CLion, etc.)
echo    2. Start coding! Try: scripts\cpp C++\01_Basics\FirstCode.cpp
echo    3. Make a commit to see beautiful git messages!
echo.
echo 💡 Quick Commands:
echo    - Compile and run: bash scripts/cpp file.cpp
echo    - Format code: bash scripts/format.sh
echo    - Check executables: bash scripts/check_executables.sh
echo.
echo ╔════════════════════════════════════════════════════════════════╗
echo ║  🎊 Happy Coding! 💪                                         ║
echo ╚════════════════════════════════════════════════════════════════╝
echo.
pause
