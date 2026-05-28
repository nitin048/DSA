#!/bin/bash

# ============================================
# CLEAN EXECUTABLES SCRIPT
# ============================================
# This script removes all compiled executables from your DSA project
# Run this anytime you want to clean up compiled files
# Usage: ./scripts/clean-executables.sh

echo "🧹 Cleaning compiled executables from DSA project..."
echo ""

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Counter
count=0

# Find and remove executables in C++ folder
echo "📂 Checking C++ folder..."
while IFS= read -r -d '' file; do
    if [ -f "$file" ] && [ -x "$file" ]; then
        echo "  ${RED}✗${NC} Removing: $file"
        rm "$file"
        ((count++))
    fi
done < <(find "C++" -type f ! -name "*.*" ! -path "*/.*" -print0 2>/dev/null)

# Find and remove executables in DataStructure&Algorithm folder
echo ""
echo "📂 Checking DataStructure&Algorithm folder..."
while IFS= read -r -d '' file; do
    if [ -f "$file" ] && [ -x "$file" ]; then
        echo "  ${RED}✗${NC} Removing: $file"
        rm "$file"
        ((count++))
    fi
done < <(find "DataStructure&Algorithm" -type f ! -name "*.*" ! -path "*/.*" -print0 2>/dev/null)

echo ""
if [ $count -eq 0 ]; then
    echo "${GREEN}✓${NC} No executables found! Your project is clean! 🎉"
else
    echo "${GREEN}✓${NC} Removed $count executable(s)! 🎉"
fi

echo ""
echo "💡 Tip: These files are now in .gitignore and won't be tracked by git!"
