#!/bin/bash

# Script to automatically update .gitignore with all C++ executable names
# Run this after adding new .cpp files to keep .gitignore up to date

echo "🔍 Scanning for .cpp files in C++ directory..."

# Find all .cpp files and extract their base names
cpp_files=$(find C++ -name "*.cpp" -type f | sort)
count=$(echo "$cpp_files" | wc -l | tr -d ' ')

echo "✅ Found $count .cpp files"
echo ""

# Create list of executable names
echo "📝 Executable names to ignore:"
echo "-----------------------------------"

executables=()
for file in $cpp_files; do
    basename=$(basename "$file" .cpp)
    executables+=("$basename")
    echo "  - $basename"
done

echo "-----------------------------------"
echo ""

# Generate .gitignore entries
echo "📋 Generated .gitignore entries:"
echo ""
echo "# Auto-generated executable ignores"
echo "# Generated on: $(date)"
echo ""

for exe in "${executables[@]}"; do
    echo "C++/**/$exe"
done

echo ""
echo "💡 To update .gitignore:"
echo "   1. Copy the entries above"
echo "   2. Paste them into .gitignore under the 'Pattern 2' section"
echo "   3. Or run: ./scripts/auto_update_gitignore.sh"
echo ""
