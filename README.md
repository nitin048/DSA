# DSA Learning Series

Welcome to the Data Structures and Algorithms Learning Series! This repository contains implementations, explanations, and practice problems to help you master DSA concepts.

## 📚 Overview

This repository is designed to provide a structured approach to learning data structures and algorithms, from fundamental concepts to advanced topics.

## 🎯 Goals

- Build a strong foundation in data structures and algorithms
- Practice problem-solving skills
- Prepare for technical interviews
- Understand time and space complexity analysis

## ✨ Features

This repository is fully configured for modern C++ development:

### 🧠 IntelliSense

- **Auto-completion** - Type `std::` and see suggestions
- **Error detection** - Real-time syntax and semantic errors
- **Hover documentation** - Hover over code for instant info
- **Go to definition** - Cmd/Ctrl + Click to jump to definitions

### 🎨 Auto-Formatting

- **Format on save** - Code auto-formats when you save (Cmd/Ctrl + S)
- **Consistent style** - Google C++ Style Guide with 4-space indentation
- **Format on paste** - Pasted code is automatically formatted

### ⚡ Code Snippets

- **30+ shortcuts** - Type `cpp` + Tab for full boilerplate
- **Control structures** - `if`, `for`, `while`, `switch` + Tab
- **Data structures** - `vec`, `vec2d` + Tab for vectors
- **See all**: [.vscode/SNIPPETS.md](.vscode/SNIPPETS.md)

### 📚 Comprehensive Guides

- **Basics** - [First C++ program](C++/01_Basics/README.md)
- **Variables** - [Complete guide](C++/02_Variables/README.md)
- **Operators** - [All operators explained](C++/03_Operators/README.md)
- **Input/Output** - [I/O operations](C++/04_InputOutput/README.md)
- **Type Casting** - [All cast types](C++/05_Typecasting/README.md)
- **Conditionals** - [If, switch, ternary](C++/06_Conditionals/README.md)

### 🛠️ Development Tools

- **Quick compile & run** - `./scripts/cpp file.cpp` (easiest way!)
- **Detailed run script** - `./scripts/run.sh file.cpp`
- **One-click run** - Click ▶️ or press Ctrl + Alt + N in Kiro/VS Code
- **Beautiful git hooks** - Emoji-rich commit messages 🎉
- **Error highlighting** - Red squiggles for errors
- **Code navigation** - Find references, rename symbols
- **Format script** - `./scripts/format.sh` to format all files

📖 **Quick Run Guide:** [docs/QUICK_RUN_GUIDE.md](docs/QUICK_RUN_GUIDE.md)  
📖 **Git Hooks Guide:** [docs/GIT_HOOKS_GUIDE.md](docs/GIT_HOOKS_GUIDE.md)

## 📖 Topics Covered

### Data Structures

- Arrays and Strings
- Linked Lists
- Stacks and Queues
- Trees (Binary Trees, BST, AVL, etc.)
- Heaps
- Hash Tables
- Graphs
- Tries

### Algorithms

- Sorting (Bubble, Selection, Insertion, Merge, Quick, Heap)
- Searching (Linear, Binary)
- Recursion and Backtracking
- Dynamic Programming
- Greedy Algorithms
- Graph Algorithms (BFS, DFS, Dijkstra, etc.)
- Divide and Conquer
- Bit Manipulation

## 🚀 Getting Started

### 🌍 Universal Setup (Works on ALL Operating Systems!)

This repository works on **Windows 🪟, macOS 🍎, and Linux 🐧** with one-command setup! 🎉

#### **Step 1: Clone the Repository**

```bash
git clone https://github.com/nitin048/DSA.git
cd DSA
```

#### **Step 2: Run Universal Setup** (Choose ONE method)

**🐍 Method 1: Python Script** (Recommended - Works Everywhere!)

```bash
python scripts/setup.py
```

or

```bash
python3 scripts/setup.py
```

**🐚 Method 2: Shell Script** (macOS/Linux)

```bash
./scripts/setup.sh
```

**🪟 Method 3: Batch File** (Windows)

```cmd
scripts\setup.bat
```

Or navigate to `scripts/` folder and **double-click** `setup.bat` on Windows!

#### **Step 3: Start Coding!** 🎊

```bash
# Test it works
./scripts/cpp C++/01_Basics/FirstCode.cpp

# Open in your IDE
kiro .    # For Kiro IDE
code .    # For VS Code
```

**That's it!** ✅ IntelliSense, auto-formatting, git hooks, and all features work automatically! 🎉

---

### 📚 Documentation

- 🚀 **[Complete Setup Guide](docs/SETUP.md)** - Everything you need to get started
- ⚡ **[Quick Reference](docs/QUICK_REFERENCE.md)** - Command cheat sheet
- 🎣 **[Git Hooks Guide](docs/GIT_HOOKS_GUIDE.md)** - Beautiful commit messages
- 💻 **[Git Commands Guide](docs/GIT_COMMANDS.md)** - Complete Git reference
- 🏃 **[Quick Run Guide](docs/QUICK_RUN_GUIDE.md)** - Compile & run methods
- 🚫 **[Gitignore Guide](docs/GITIGNORE.md)** - How executables are handled
- 🎨 **[Formatting Guide](docs/FORMATTING.md)** - Code formatting
- 🆘 **[Troubleshooting](docs/TROUBLESHOOTING.md)** - Common issues & solutions

---

### 🎯 What Gets Installed

All setup scripts install:

- ✅ **Development Tools** - clangd, clang-format, LLVM
- ✅ **Git Hooks** - Beautiful commit messages with emojis 🎉
- ✅ **IDE Configuration** - IntelliSense, auto-formatting
- ✅ **Scripts** - Quick compile & run commands

---

### 🚀 Quick Start (No Setup)

Want to try it immediately? Just compile and run:

```bash
# macOS/Linux
g++ C++/01_Basics/FirstCode.cpp && ./a.out

# Windows (Git Bash)
g++ C++/01_Basics/FirstCode.cpp && ./a.out

# Windows (Command Prompt)
g++ C++/01_Basics/FirstCode.cpp && a.out
```

Then run the setup script when you're ready for the full experience!

## 📁 Repository Structure

```
DSA/
├── C++/                        # C++ learning content (numbered for learning order)
│   ├── 01_Basics/              # First C++ program
│   ├── 02_Variables/           # Variables and data types
│   ├── 03_Operators/           # All C++ operators
│   ├── 04_InputOutput/         # Input/Output operations
│   ├── 05_Typecasting/         # Type conversion
│   ├── 06_Conditionals/        # If, switch, ternary
│   ├── 07_Loops/               # For, while, do-while
│   └── 08_Patterns/            # Pattern printing
│
├── docs/                       # All documentation
│   ├── SETUP.md                # Main setup guide
│   ├── UNIVERSAL_SETUP_SUMMARY.md  # Universal setup overview
│   ├── CROSS_PLATFORM_SETUP.md     # Cross-platform guide
│   ├── SETUP_QUICK_REFERENCE.md    # Quick reference card
│   ├── CLONE_AND_TEST.md       # Clone testing guide
│   ├── KIRO_SETUP.md           # Kiro IDE setup
│   ├── VSCODE_SETUP.md         # VS Code setup
│   ├── GIT_HOOKS_GUIDE.md      # Git hooks guide
│   ├── QUICK_RUN_GUIDE.md      # Compile & run guide
│   ├── FORMATTING.md           # Formatting guide
│   ├── TROUBLESHOOTING.md      # Troubleshooting
│   └── CROSS_PLATFORM_COMPLETE.md  # Implementation summary
│
├── scripts/                    # Utility scripts
│   ├── setup.py                # 🐍 Universal Python setup
│   ├── setup.sh                # 🐚 Shell setup (macOS/Linux)
│   ├── setup.bat               # 🪟 Batch setup (Windows)
│   ├── install_hooks.sh        # Git hooks installer
│   ├── format.sh               # Code formatter
│   ├── cpp                     # Quick compile & run
│   ├── run.sh                  # Detailed compile & run
│   └── check_executables.sh   # Check for executables
│
├── hooks/                      # Git hooks (trackable)
│   ├── pre-commit              # Pre-commit hook
│   ├── post-commit             # Post-commit hook
│   └── README.md               # Hooks documentation
│
├── .vscode/                    # IDE configuration
│   ├── settings.json           # Editor settings
│   ├── cpp.code-snippets       # 30+ code shortcuts
│   ├── SNIPPETS.md             # Snippet documentation
│   └── README.md               # VS Code config info
│
├── .clang-format               # Formatting rules
├── .gitignore                  # Git ignore rules
├── Makefile                    # Make commands
└── README.md                   # This file
```

### Learning Resources

Each topic includes comprehensive guides:

- 📖 [Basics Guide](C++/01_Basics/README.md)
- 📖 [Variables Guide](C++/02_Variables/README.md)
- 📖 [Operators Guide](C++/03_Operators/README.md)
- 📖 [Input/Output Guide](C++/04_InputOutput/README.md)
- 📖 [Type Casting Guide](C++/05_Typecasting/README.md)
- 📖 [Conditionals Guide](C++/06_Conditionals/README.md)

## 💡 How to Use This Repository

### For Learning

- Each topic includes:
  - Concept explanation with examples
  - Implementation examples
  - Time and space complexity analysis
  - Practice problems with solutions
  - Comprehensive README guides

### For VS Code Users

- **Code Snippets**: Type shortcuts like `cpp`, `for`, `if` and press Tab
- **IntelliSense**: Auto-completion and error detection
- **One-Click Run**: Click ▶️ to compile and run
- **Documentation**: All guides in `.vscode/` folder

📖 **See all snippets**: [.vscode/SNIPPETS.md](.vscode/SNIPPETS.md)

## 🤝 Contributing

Contributions are welcome! Feel free to:

- Add new problems and solutions
- Improve existing explanations
- Fix bugs or typos
- Suggest new topics

## 📝 Resources

- [Big-O Cheat Sheet](http://bigocheatsheet.com/)
- [VisuAlgo](https://visualgo.net/) - Algorithm visualizations
- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/)
- [Most Important Interview Questions](https://dsa.apnacollege.in/)

## 📄 License

This project is open source and available for educational purposes.

---

Happy Learning! 🎓
