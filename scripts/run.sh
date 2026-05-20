#!/bin/bash

# Quick C++ compile and run script
# Usage: ./scripts/run.sh filename.cpp
# Example: ./scripts/run.sh C++/07_Loops/01_prblm.cpp

if [ $# -eq 0 ]; then
    echo "Usage: ./scripts/run.sh <filename.cpp>"
    echo "Example: ./scripts/run.sh C++/07_Loops/01_prblm.cpp"
    exit 1
fi

FILE="$1"
OUTPUT="${FILE%.cpp}"

echo "🔨 Compiling $FILE..."
g++ -std=c++17 -Wall -Wextra "$FILE" -o "$OUTPUT"

if [ $? -eq 0 ]; then
    echo "✅ Compilation successful!"
    echo "🚀 Running $OUTPUT..."
    echo "-----------------------------------"
    "./$OUTPUT"
    echo ""
    echo "-----------------------------------"
    echo "✅ Program finished"
else
    echo "❌ Compilation failed!"
    exit 1
fi
