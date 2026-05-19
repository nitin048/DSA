#!/bin/bash

# DSA Repository Setup Script
# Automatically installs and configures everything needed for C++ development

set -e  # Exit on error

echo "🚀 DSA Repository Setup"
echo "======================="
echo ""

# Colors for output
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Detect OS
OS="$(uname -s)"
case "${OS}" in
    Linux*)     MACHINE=Linux;;
    Darwin*)    MACHINE=Mac;;
    CYGWIN*)    MACHINE=Windows;;
    MINGW*)     MACHINE=Windows;;
    *)          MACHINE="UNKNOWN:${OS}"
esac

echo "📍 Detected OS: ${MACHINE}"
echo ""

# Function to check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Function to print success
print_success() {
    echo -e "${GREEN}✅ $1${NC}"
}

# Function to print warning
print_warning() {
    echo -e "${YELLOW}⚠️  $1${NC}"
}

# Function to print error
print_error() {
    echo -e "${RED}❌ $1${NC}"
}

# Check prerequisites
echo "🔍 Checking prerequisites..."
echo ""

# Check for compiler
if command_exists clang++; then
    print_success "clang++ found: $(clang++ --version | head -1)"
elif command_exists g++; then
    print_success "g++ found: $(g++ --version | head -1)"
else
    print_error "No C++ compiler found!"
    echo "Please install:"
    if [ "$MACHINE" = "Mac" ]; then
        echo "  xcode-select --install"
    elif [ "$MACHINE" = "Linux" ]; then
        echo "  sudo apt-get install build-essential"
    fi
    exit 1
fi

# Check for Homebrew (macOS)
if [ "$MACHINE" = "Mac" ]; then
    if ! command_exists brew; then
        print_warning "Homebrew not found. Installing..."
        /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
        print_success "Homebrew installed"
    else
        print_success "Homebrew found"
    fi
fi

echo ""
echo "📦 Installing required tools..."
echo ""

# Install LLVM/clangd
if ! command_exists clangd; then
    echo "Installing clangd..."
    if [ "$MACHINE" = "Mac" ]; then
        brew install llvm
        print_success "LLVM/clangd installed"
    elif [ "$MACHINE" = "Linux" ]; then
        sudo apt-get update
        sudo apt-get install -y clangd-12
        print_success "clangd installed"
    else
        print_warning "Please install LLVM manually from https://llvm.org"
    fi
else
    print_success "clangd already installed"
fi

# Install clang-format
if ! command_exists clang-format; then
    echo "Installing clang-format..."
    if [ "$MACHINE" = "Mac" ]; then
        brew install clang-format
        print_success "clang-format installed"
    elif [ "$MACHINE" = "Linux" ]; then
        sudo apt-get install -y clang-format
        print_success "clang-format installed"
    else
        print_warning "Please install clang-format manually"
    fi
else
    print_success "clang-format already installed"
fi

echo ""
echo "🔌 Installing Kiro extensions..."
echo ""

# Check if Kiro is installed
if command_exists kiro; then
    print_success "Kiro found"
    
    # Install clangd extension
    if kiro --list-extensions | grep -q "llvm-vs-code-extensions.vscode-clangd"; then
        print_success "clangd extension already installed"
    else
        echo "Installing clangd extension..."
        kiro --install-extension llvm-vs-code-extensions.vscode-clangd
        print_success "clangd extension installed"
    fi
else
    print_warning "Kiro not found. Please install from https://kiro.ai"
    echo "After installing Kiro, run:"
    echo "  kiro --install-extension llvm-vs-code-extensions.vscode-clangd"
fi

echo ""
echo "✅ Verifying installation..."
echo ""

# Verify clangd
if [ "$MACHINE" = "Mac" ]; then
    CLANGD_PATH="/opt/homebrew/opt/llvm/bin/clangd"
else
    CLANGD_PATH="clangd"
fi

if command_exists $CLANGD_PATH || command_exists clangd; then
    print_success "clangd: $(clangd --version 2>/dev/null | head -1 || echo 'installed')"
else
    print_error "clangd not found in PATH"
fi

# Verify clang-format
if command_exists clang-format; then
    print_success "clang-format: $(clang-format --version | head -1)"
else
    print_error "clang-format not found"
fi

# Verify compiler
if command_exists clang++; then
    print_success "Compiler: $(clang++ --version | head -1)"
elif command_exists g++; then
    print_success "Compiler: $(g++ --version | head -1)"
fi

echo ""
echo "📝 Configuration files..."
echo ""

# Check configuration files
if [ -f ".vscode/settings.json" ]; then
    print_success ".vscode/settings.json exists"
else
    print_error ".vscode/settings.json missing"
fi

if [ -f ".clang-format" ]; then
    print_success ".clang-format exists"
else
    print_error ".clang-format missing"
fi

if [ -f "compile_commands.json" ]; then
    print_success "compile_commands.json exists"
else
    print_warning "compile_commands.json missing (will be generated)"
fi

echo ""
echo "🎉 Setup Complete!"
echo ""
echo "Next steps:"
echo "1. Restart Kiro if it's running (Cmd + Q, then reopen)"
echo "2. Open this project in Kiro:"
echo "   kiro ."
echo "3. Open any .cpp file and test:"
echo "   - Type 'std::' to see auto-completion"
echo "   - Press Cmd + S to auto-format"
echo "   - Type 'int x = \"hello\";' to see error detection"
echo ""
echo "📚 Documentation:"
echo "   - SETUP.md - This guide"
echo "   - .vscode/SNIPPETS.md - All code snippets"
echo "   - KIRO_FINAL_SETUP.md - Detailed Kiro setup"
echo ""
echo "Happy coding! 🚀"
