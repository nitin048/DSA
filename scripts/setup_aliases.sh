#!/bin/bash

# Shell aliases for quick C++ compilation
# Add these to your ~/.bashrc or ~/.zshrc

echo "📝 Add these aliases to your shell configuration:"
echo ""
echo "# C++ Quick Compile & Run Aliases"
echo "alias cpprun='g++ -std=c++17 -Wall -Wextra \$1 && ./a.out'"
echo "alias cpprunf='g++ -std=c++17 -Wall -Wextra \$1 -o \${1%.cpp} && ./\${1%.cpp}'"
echo "alias cppclean='find . -name \"a.out\" -delete && find . -type f -executable -delete'"
echo ""
echo "---"
echo ""
echo "After adding to ~/.bashrc or ~/.zshrc, run: source ~/.bashrc (or source ~/.zshrc)"
echo ""
echo "Then you can use:"
echo "  cpprun file.cpp       # Compiles and runs (creates a.out)"
echo "  cpprunf file.cpp      # Compiles and runs (creates file executable)"
echo "  cppclean              # Removes all compiled files"
