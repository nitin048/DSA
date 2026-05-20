#!/bin/bash

# Script to check for untracked executable files
# Helps identify executables that should be added to .gitignore

echo "🔍 Checking for untracked executable files..."
echo ""

# Find untracked files in C++ directory
untracked=$(git ls-files --others --exclude-standard C++/)

if [ -z "$untracked" ]; then
    echo "✅ No untracked files found in C++ directory!"
    exit 0
fi

# Check each untracked file
executables_found=false

for file in $untracked; do
    # Skip if it has a common source extension
    if [[ "$file" =~ \.(cpp|h|hpp|md|txt)$ ]]; then
        continue
    fi
    
    # Check if file is executable or has no extension
    if [ -x "$file" ] || [[ ! "$file" =~ \. ]]; then
        if [ "$executables_found" = false ]; then
            echo "⚠️  Found untracked executable files:"
            echo "-----------------------------------"
            executables_found=true
        fi
        
        basename=$(basename "$file")
        echo "  ❌ $file"
        
        # Check if corresponding .cpp exists
        cpp_file="${file}.cpp"
        if [ -f "$cpp_file" ]; then
            echo "     → Compiled from: $cpp_file"
        fi
    fi
done

if [ "$executables_found" = true ]; then
    echo "-----------------------------------"
    echo ""
    echo "💡 To ignore these files, add them to .gitignore:"
    echo ""
    for file in $untracked; do
        if [[ ! "$file" =~ \.(cpp|h|hpp|md|txt)$ ]]; then
            if [ -x "$file" ] || [[ ! "$file" =~ \. ]]; then
                basename=$(basename "$file")
                echo "   C++/**/$basename"
            fi
        fi
    done
    echo ""
    echo "🔧 Or run: ./scripts/update_gitignore.sh"
else
    echo "✅ No untracked executables found!"
fi
