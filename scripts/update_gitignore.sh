#!/bin/bash

# Script to automatically update .gitignore with all C++ executable names
# This ensures all compiled executables (without extension) are ignored

echo "🔍 Finding all .cpp files..."

# Find all .cpp files and extract their base names (without .cpp extension)
cpp_files=$(find C++ -name "*.cpp" -type f)

echo "📝 Updating .gitignore with executable names..."

# Create a temporary list of executables to ignore
temp_file=$(mktemp)

# Add header
cat > "$temp_file" << 'EOF'
# Compiled executables in C++ folders (no extension)
# Auto-generated list - DO NOT EDIT MANUALLY
# Run ./scripts/update_gitignore.sh to update this list
EOF

# Add each .cpp file's executable name
for file in $cpp_files; do
    # Get base name without extension
    basename=$(basename "$file" .cpp)
    # Add to ignore list
    echo "C++/**/$basename" >> "$temp_file"
done

# Add pattern-based ignores
cat >> "$temp_file" << 'EOF'

# Pattern-based ignores
C++/**/*_prblm
C++/**/*_problem
C++/**/*_test
C++/**/*_solution
EOF

echo ""
echo "✅ Found $(echo "$cpp_files" | wc -l) .cpp files"
echo ""
echo "📋 Executables that will be ignored:"
echo "-----------------------------------"
for file in $cpp_files; do
    basename=$(basename "$file" .cpp)
    echo "  - $basename"
done
echo "-----------------------------------"
echo ""
echo "💡 To apply these changes, you need to manually update .gitignore"
echo "   or copy the content from: $temp_file"
echo ""
echo "🔧 Temporary file created at: $temp_file"
echo ""
echo "📖 To view the generated ignore rules:"
echo "   cat $temp_file"
