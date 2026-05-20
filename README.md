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

- **One-click run** - Click ▶️ or press Ctrl + Alt + N
- **Error highlighting** - Red squiggles for errors
- **Code navigation** - Find references, rename symbols
- **Format script** - `./format.sh` to format all files

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

### Quick Setup (Recommended)

**For Kiro IDE users (fully configured!):**

1. **Clone this repository**

   ```bash
   git clone https://github.com/nitin048/DSA.git
   cd DSA
   ```

2. **Run setup script**

   ```bash
   chmod +x scripts/setup.sh
   ./scripts/setup.sh
   ```

3. **Open in Kiro**
   ```bash
   kiro .
   ```

**That's it!** IntelliSense, auto-formatting, and all features work automatically! 🎉

📖 **Detailed setup guide**: [docs/SETUP.md](docs/SETUP.md)  
📖 **Kiro IDE guide**: [docs/KIRO_SETUP.md](docs/KIRO_SETUP.md)

### For VS Code Users

This repository also works with VS Code:

1. Clone the repository
2. Open in VS Code: `code .`
3. Install recommended extensions when prompted
4. Reload VS Code

📖 **VS Code setup guide**: [docs/VSCODE_SETUP.md](docs/VSCODE_SETUP.md)

### For Other Editors

1. Clone this repository
2. Navigate through the topics in order
3. Read the explanations and study the implementations
4. Practice with the provided problems
5. Try to solve problems on your own before checking solutions

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
│   └── 07_Loops/               # For, while, do-while (coming soon)
│
├── docs/                       # All documentation
│   ├── SETUP.md                # Main setup guide
│   ├── KIRO_SETUP.md           # Kiro IDE setup
│   ├── VSCODE_SETUP.md         # VS Code setup
│   ├── FORMATTING.md           # Formatting guide
│   ├── TROUBLESHOOTING.md      # Troubleshooting
│   └── CLONE_TEST.md           # Clone testing guide
│
├── scripts/                    # Utility scripts
│   ├── setup.sh                # Automated setup
│   └── format.sh               # Format all files
│
├── .vscode/                    # IDE configuration
│   ├── settings.json           # Editor settings
│   ├── cpp.code-snippets       # 30+ code shortcuts
│   ├── SNIPPETS.md             # Snippet documentation
│   └── README.md               # VS Code config info
│
├── .clang-format               # Formatting rules
├── .gitignore                  # Git ignore rules
├── compile_commands.json       # Build configuration
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
