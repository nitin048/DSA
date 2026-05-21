#!/bin/bash

# ============================================
# 🚀 Universal Setup Script for macOS/Linux
# ============================================
# This script installs everything needed for the DSA repository

# 🎨 Colors
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
CYAN='\033[0;36m'
RED='\033[0;31m'
BOLD='\033[1m'
NC='\033[0m' # No Color

echo ""
echo -e "${CYAN}╔════════════════════════════════════════════════════════════════╗${NC}"
echo -e "${CYAN}║${NC}  ${BOLD}🚀 DSA Repository Setup${NC}                                    ${CYAN}║${NC}"
echo -e "${CYAN}╚════════════════════════════════════════════════════════════════╝${NC}"
echo ""

# 🖥️ Detect OS
OS="$(uname -s)"
case "${OS}" in
    Linux*)     MACHINE=Linux;;
    Darwin*)    MACHINE=Mac;;
    CYGWIN*)    MACHINE=Cygwin;;
    MINGW*)     MACHINE=MinGw;;
    *)          MACHINE="UNKNOWN:${OS}"
esac

echo -e "${CYAN}🖥️  Operating System: ${BOLD}${MACHINE}${NC}"
echo ""

# 🔧 Make all scripts executable
echo -e "${CYAN}📦 Making scripts executable...${NC}"
chmod +x scripts/*.sh
chmod +x hooks/pre-commit hooks/post-commit
echo -e "${GREEN}✅ Scripts are now executable!${NC}"
echo ""

# 📋 Setup Steps
echo -e "${BOLD}📋 Setup Steps:${NC}"
echo ""

# Step 1: Setup development tools
echo -e "${CYAN}📦 Step 1: Installing development tools...${NC}"
if [ -f "scripts/setup.sh" ]; then
    bash scripts/setup.sh
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}✅ Development tools installed!${NC}"
    else
        echo -e "${YELLOW}⚠️  Development tools installation had issues, but continuing...${NC}"
    fi
else
    echo -e "${YELLOW}⚠️  scripts/setup.sh not found, skipping...${NC}"
fi
echo ""

# Step 2: Install git hooks
echo -e "${CYAN}📦 Step 2: Installing git hooks...${NC}"
if [ -f "scripts/install_hooks.sh" ]; then
    bash scripts/install_hooks.sh
    if [ $? -eq 0 ]; then
        echo -e "${GREEN}✅ Git hooks installed!${NC}"
    else
        echo -e "${YELLOW}⚠️  Git hooks installation had issues, but continuing...${NC}"
    fi
else
    echo -e "${YELLOW}⚠️  scripts/install_hooks.sh not found, skipping...${NC}"
fi
echo ""

# Step 3: Format code (optional)
echo -e "${CYAN}📦 Step 3: Formatting code (optional)...${NC}"
read -p "$(echo -e ${YELLOW}Format all C++ files now? \(y/n\): ${NC})" -n 1 -r
echo
if [[ $REPLY =~ ^[Yy]$ ]]; then
    if [ -f "scripts/format.sh" ]; then
        bash scripts/format.sh
        echo -e "${GREEN}✅ Code formatted!${NC}"
    else
        echo -e "${YELLOW}⚠️  scripts/format.sh not found, skipping...${NC}"
    fi
else
    echo -e "${CYAN}ℹ️  Skipping code formatting${NC}"
fi
echo ""

# Success message
echo -e "${GREEN}╔════════════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║${NC}  ${BOLD}✅ Setup Complete! 🎉${NC}                                       ${GREEN}║${NC}"
echo -e "${GREEN}╚════════════════════════════════════════════════════════════════╝${NC}"
echo ""

echo -e "${CYAN}🎯 What's Installed:${NC}"
echo -e "   ${GREEN}✓${NC} Development tools (clangd, clang-format)"
echo -e "   ${GREEN}✓${NC} Git hooks (pre-commit, post-commit)"
echo -e "   ${GREEN}✓${NC} Code formatting configured"
echo ""

echo -e "${CYAN}🚀 Next Steps:${NC}"
echo "   1. Open this folder in your IDE (VS Code, CLion, etc.)"
echo "   2. Start coding! Try: ./scripts/cpp C++/01_Basics/FirstCode.cpp"
echo "   3. Make a commit to see beautiful git messages!"
echo ""

echo -e "${CYAN}💡 Quick Commands:${NC}"
echo "   - Compile and run: ./scripts/cpp file.cpp"
echo "   - Format code: ./scripts/format.sh"
echo "   - Check executables: ./scripts/check_executables.sh"
echo ""

echo -e "${GREEN}╔════════════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║${NC}  ${BOLD}🎊 Happy Coding! 💪${NC}                                         ${GREEN}║${NC}"
echo -e "${GREEN}╚════════════════════════════════════════════════════════════════╝${NC}"
echo ""
