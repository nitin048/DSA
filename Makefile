# Makefile for quick C++ compilation and execution
# Usage: make run FILE=path/to/file.cpp

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Default target
.PHONY: help
help:
	@echo "📚 C++ Quick Compile & Run"
	@echo ""
	@echo "Usage:"
	@echo "  make run FILE=C++/07_Loops/01_prblm.cpp"
	@echo "  make clean"
	@echo ""
	@echo "Examples:"
	@echo "  make run FILE=C++/07_Loops/whileLoop.cpp"
	@echo "  make run FILE=C++/06_Conditionals/ifElse.cpp"

# Compile and run
.PHONY: run
run:
	@if [ -z "$(FILE)" ]; then \
		echo "❌ Error: Please specify FILE"; \
		echo "Usage: make run FILE=path/to/file.cpp"; \
		exit 1; \
	fi
	@echo "🔨 Compiling $(FILE)..."
	@$(CXX) $(CXXFLAGS) $(FILE) -o $(basename $(FILE))
	@echo "✅ Compilation successful!"
	@echo "🚀 Running $(basename $(FILE))..."
	@echo "-----------------------------------"
	@./$(basename $(FILE))
	@echo ""
	@echo "-----------------------------------"
	@echo "✅ Program finished"

# Clean compiled files
.PHONY: clean
clean:
	@echo "🧹 Cleaning compiled files..."
	@find C++ -type f -name "*.out" -delete
	@find C++ -type f ! -name "*.*" -type f -delete 2>/dev/null || true
	@echo "✅ Clean complete!"
