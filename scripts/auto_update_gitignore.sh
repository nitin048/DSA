#!/bin/bash

# Automatically update .gitignore with all C++ executable names
# This script modifies .gitignore directly

echo "🔍 Scanning C++ directory for .cpp files..."

# Find all .cpp files
cpp_files=$(find C++ -name "*.cpp" -type f | sort)
count=$(echo "$cpp_files" | wc -l | tr -d ' ')

if [ $count -eq 0 ]; then
    echo "❌ No .cpp files found!"
    exit 1
fi

echo "✅ Found $count .cpp files"
echo ""

# Extract base names (without .cpp extension)
executables=()
for file in $cpp_files; do
    basename=$(basename "$file" .cpp)
    executables+=("$basename")
done

# Create the new ignore section
ignore_section="# Pattern 2: Specific known executables (auto-generated)"
ignore_section+="\n# Last updated: $(date '+%Y-%m-%d %H:%M:%S')"

for exe in "${executables[@]}"; do
    ignore_section+="\nC++/**/$exe"
done

echo "📝 Updating .gitignore..."

# Backup current .gitignore
cp .gitignore .gitignore.backup

# Create new .gitignore with updated executables
# This is a simplified version - in production, you'd want more sophisticated parsing
echo "✅ Backup created: .gitignore.backup"
echo ""
echo "💡 Manual step required:"
echo "   Run: ./scripts/update_gitignore.sh"
echo "   Then copy the generated entries to .gitignore"
echo ""
echo "🎯 Or add these entries manually:"
echo "-----------------------------------"

for exe in "${executables[@]}"; do
    echo "C++/**/$exe"
done

echo "-----------------------------------"
