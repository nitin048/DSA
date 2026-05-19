#!/bin/bash
# Format C++ files using clang-format

if [ $# -eq 0 ]; then
    echo "📝 Formatting all C++ files in project..."
    find . -type f \( -name "*.cpp" -o -name "*.h" -o -name "*.hpp" \) -not -path "./.git/*" -exec clang-format -i {} \;
    echo "✅ All files formatted!"
else
    echo "📝 Formatting: $1"
    clang-format -i "$1"
    echo "✅ Formatted: $1"
fi
