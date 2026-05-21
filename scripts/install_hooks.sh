#!/bin/bash

# 🎣 Git Hooks Installation Script
# 🚀 This script installs beautiful git hooks with emoji-rich messages

# 🎨 Colors
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
CYAN='\033[0;36m'
MAGENTA='\033[0;35m'
RED='\033[0;31m'
BOLD='\033[1m'
NC='\033[0m' # No Color

echo ""
echo -e "${CYAN}╔════════════════════════════════════════════════════════════════╗${NC}"
echo -e "${CYAN}║${NC}  ${BOLD}🎣 Git Hooks Installation 🚀${NC}                               ${CYAN}║${NC}"
echo -e "${CYAN}╚════════════════════════════════════════════════════════════════╝${NC}"
echo ""

# 🔍 Check if hooks directory exists
if [ ! -d "hooks" ]; then
    echo -e "${RED}❌ Error: hooks/ directory not found!${NC}"
    echo -e "${YELLOW}💡 Make sure you're in the repository root${NC}"
    exit 1
fi

echo -e "${CYAN}📂 Installing git hooks...${NC}"
echo ""

# 🎯 Install pre-commit hook
if [ -f "hooks/pre-commit" ]; then
    cp hooks/pre-commit .git/hooks/pre-commit
    chmod +x .git/hooks/pre-commit
    echo -e "${GREEN}✅ Pre-commit hook installed! 🛡️${NC}"
    echo -e "   ${CYAN}🔍 Checks for untracked executables${NC}"
else
    echo -e "${YELLOW}⚠️  Pre-commit hook not found${NC}"
fi

# 🎉 Install post-commit hook
if [ -f "hooks/post-commit" ]; then
    cp hooks/post-commit .git/hooks/post-commit
    chmod +x .git/hooks/post-commit
    echo -e "${GREEN}✅ Post-commit hook installed! 🎉${NC}"
    echo -e "   ${CYAN}📊 Shows beautiful commit summary${NC}"
else
    echo -e "${YELLOW}⚠️  Post-commit hook not found${NC}"
fi

echo ""
echo -e "${GREEN}╔════════════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║${NC}  ${BOLD}🎊 Installation Complete! 🎉${NC}                               ${GREEN}║${NC}"
echo -e "${GREEN}╚════════════════════════════════════════════════════════════════╝${NC}"
echo ""

echo -e "${CYAN}🎯 ${BOLD}What's Installed:${NC}"
echo ""
echo -e "  ${MAGENTA}🎣 Pre-Commit Hook:${NC}"
echo -e "     ${GREEN}✓${NC} Checks for untracked executables 🔍"
echo -e "     ${GREEN}✓${NC} Prevents committing compiled files 🛡️"
echo -e "     ${GREEN}✓${NC} Shows helpful fix suggestions 💡"
echo ""
echo -e "  ${MAGENTA}🎉 Post-Commit Hook:${NC}"
echo -e "     ${GREEN}✓${NC} Beautiful commit summary 📊"
echo -e "     ${GREEN}✓${NC} File change statistics 📈"
echo -e "     ${GREEN}✓${NC} Random helpful tips 💡"
echo -e "     ${GREEN}✓${NC} Celebration messages 🎊"
echo -e "     ${GREEN}✓${NC} Unpushed commits warning ⚠️"
echo ""

echo -e "${CYAN}🧪 ${BOLD}Test Your Hooks:${NC}"
echo ""
echo -e "  ${YELLOW}1.${NC} Make a change:"
echo -e "     ${GREEN}echo \"// test\" >> test.cpp${NC}"
echo ""
echo -e "  ${YELLOW}2.${NC} Commit it:"
echo -e "     ${GREEN}git add .${NC}"
echo -e "     ${GREEN}git commit -m \"Test hooks\"${NC}"
echo ""
echo -e "  ${YELLOW}3.${NC} Watch the magic! ✨"
echo ""

echo -e "${MAGENTA}💡 ${BOLD}Pro Tips:${NC}"
echo -e "   ${CYAN}🔹${NC} Hooks run automatically on every commit"
echo -e "   ${CYAN}🔹${NC} Pre-commit checks BEFORE commit"
echo -e "   ${CYAN}🔹${NC} Post-commit shows summary AFTER commit"
echo -e "   ${CYAN}🔹${NC} Enjoy beautiful, emoji-rich messages! 🎨"
echo ""

echo -e "${GREEN}╔════════════════════════════════════════════════════════════════╗${NC}"
echo -e "${GREEN}║${NC}  ${BOLD}🚀 Happy Coding! Keep up the great work! 💪${NC}               ${GREEN}║${NC}"
echo -e "${GREEN}╚════════════════════════════════════════════════════════════════╝${NC}"
echo ""
