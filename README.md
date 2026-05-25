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

### 🎯 Complete DSA Series (127 Lectures)

This repository contains a comprehensive Data Structures & Algorithms series organized into 10 major sections:

1. **Arrays & Vector Problems** (Lectures 1-8)
   - Array fundamentals, Kadane's Algorithm, Two Pointer technique
   - Leetcode: #238, #11, #121, #169

2. **Pointers & Searching Algorithms** (Lectures 9-16)
   - Binary Search patterns, Rotated arrays, Book allocation
   - Leetcode: #33, #852, #540

3. **Sorting & STL** (Lectures 17-21)
   - Sorting algorithms, DNF algorithm, C++ STL complete guide
   - Leetcode: #75, #88, #31

4. **Strings & 2D Arrays** (Lectures 22-30)
   - String manipulation, 2D matrix problems, Spiral traversal
   - Leetcode: #125, #443, #54, #74

5. **Hashing & Basic Recursion** (Lectures 31-36)
   - Hash maps, Two Sum variations, Recursion fundamentals
   - Leetcode: #1, #15, #18, #560

6. **Backtracking & Advanced Sorting** (Lectures 37-48)
   - N-Queens, Sudoku Solver, Merge Sort, Quick Sort
   - Leetcode: #51, #37, #46, #78

7. **OOP & Linked Lists** (Lectures 49-60)
   - Object-Oriented Programming, Linked List operations
   - Leetcode: #206, #141, #21, #25, #138

8. **Stacks & Queues** (Lectures 61-77)
   - Stack/Queue operations, Monotonic stack, LRU Cache
   - Leetcode: #20, #84, #42, #146, #239

9. **Binary Trees & BST** (Lectures 78-103)
   - Tree traversals, BST operations, Morris traversal
   - Leetcode: #94, #98, #105, #114, #230

10. **Graphs & Advanced Algorithms** (Lectures 104-127)
    - BFS/DFS, Dijkstra's, Topological Sort, MST algorithms
    - Leetcode: #200, #207, #743, #1584

### Data Structures

- Arrays and Vectors
- Linked Lists (Singly, Doubly, Circular)
- Stacks and Queues
- Trees (Binary Trees, BST, AVL, etc.)
- Heaps and Priority Queues
- Hash Tables and Hash Maps
- Graphs (Adjacency List/Matrix)
- Tries and Disjoint Sets

### Algorithms

- Sorting (Bubble, Selection, Insertion, Merge, Quick, Heap)
- Searching (Linear, Binary, Ternary)
- Recursion and Backtracking
- Dynamic Programming
- Greedy Algorithms
- Graph Algorithms (BFS, DFS, Dijkstra, Bellman-Ford, Prim's, Kruskal's)
- Divide and Conquer
- Two Pointer and Sliding Window
- Monotonic Stack/Queue patterns

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
- 🎯 **[Executable Ignore Solution](docs/EXECUTABLE_IGNORE_SOLUTION.md)** - Auto-ignore all executables
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
│   ├── 08_Patterns/            # Pattern printing
│   ├── 09_Functions/           # Functions and methods
│   ├── 10_Binary_Number_System/ # Binary, Decimal conversion, Two's complement
│   └── 11_Bitwise_Operator/    # Bitwise operators, Data type modifiers
│
├── DataStructure&Algorithm/    # Complete DSA series (127 lectures)
│   ├── 01-Arrays & Vector Problems/           # Lectures 1-8
│   │   ├── 01_Array_Data_Structure_Part1/
│   │   ├── 02_Vectors_in_CPP_Arrays_Part2/
│   │   ├── 03_Kadanes_Algorithm_Maximum_Subarray_Sum/
│   │   ├── 04_Majority_Element_Moores_Voting_Algorithm/
│   │   ├── 05_Time_and_Space_Complexity/
│   │   ├── 06_Buy_and_Sell_Stock_PowXN_Problem/
│   │   ├── 07_Container_with_Most_Water_Two_Pointer/
│   │   ├── 08_Product_of_Array_Except_Self/
│   │   └── README.md           # Complete guide with code templates
│   │
│   ├── 02-Pointers & Searching Algorithms/    # Lectures 9-16
│   │   ├── 09_Pointers_in_CPP_In_Detail/
│   │   ├── 10_Binary_Search_Iterative_and_Recursive/
│   │   ├── 11_Search_in_Rotated_Sorted_Array/
│   │   ├── 12_Peak_Index_in_Mountain_Array/
│   │   ├── 13_Single_Element_in_Sorted_Array/
│   │   ├── 14_Book_Allocation_Problem/
│   │   ├── 15_Painters_Partition_Problem/
│   │   ├── 16_Aggressive_Cows_Problem/
│   │   └── README.md           # Binary search patterns & templates
│   │
│   ├── 03-Sorting & Standard Template Library (STL)/  # Lectures 17-21
│   │   ├── 17_Sorting_Algorithms_Bubble_Selection_Insertion/
│   │   ├── 18_Sort_Array_of_0s_1s_2s_DNF_Algorithm/
│   │   ├── 19_Merge_Sorted_Arrays_Next_Permutation/
│   │   ├── 20_CPP_STL_Complete_Tutorial/
│   │   ├── 21_Setup_CPP_Compiler_on_Mac/
│   │   └── README.md           # Sorting algorithms & STL guide
│   │
│   ├── 04-Strings & 2D Arrays/                # Lectures 22-30
│   │   ├── 22_Strings_Character_Arrays_Part1/
│   │   ├── 23_Valid_Palindrome_Remove_Occurrences_Part2/
│   │   ├── 24_Strings_Part3_Permutation_in_String/
│   │   ├── 25_Strings_Part4_Reverse_Words_in_String/
│   │   ├── 26_String_Compression_Leetcode_443/
│   │   ├── 27_Maths_for_DSA_One_Shot/
│   │   ├── 28_2D_Arrays_in_CPP_Part1/
│   │   ├── 29_Search_2D_Matrix_Variation_I_II_Part2/
│   │   ├── 30_Spiral_Matrix_Part3_Leetcode_54/
│   │   └── README.md           # String manipulation & 2D arrays
│   │
│   ├── 05-Hashing & Basic Recursion/          # Lectures 31-36
│   │   ├── 31_Two_Sum_Find_Duplicate_Hashing_Problems/
│   │   ├── 32_3_Sum_Brute_Better_Optimal_Leetcode_15/
│   │   ├── 33_4_Sum_Problem_Optimal_Approach/
│   │   ├── 34_Subarray_Sum_Equals_K/
│   │   ├── 35_Recursion_Tutorial_Basics_to_Advanced_Part1/
│   │   ├── 36_Recursion_Part2_Fibonacci_Binary_Search/
│   │   └── README.md           # Hashing techniques & recursion basics
│   │
│   ├── 06-Backtracking & Advanced Sorting/    # Lectures 37-48
│   │   ├── 37_Recursion_Part3_Backtracking_Print_Subsets/
│   │   ├── 38_Permutations_Array_String_Backtracking/
│   │   ├── 39_N_Queens_Problem_Backtracking_Leetcode_Hard/
│   │   ├── 40_Sudoku_Solver_Backtracking_Leetcode_Hard/
│   │   ├── 41_Rat_in_Maze_Problem_Backtracking/
│   │   ├── 42_Combination_Sum_Recursion_Backtracking/
│   │   ├── 43_Palindrome_Partitioning_Backtracking/
│   │   ├── 44_Merge_Sort_Algorithm/
│   │   ├── 45_One_Major_Update_1000M_Views/
│   │   ├── 46_Quick_Sort_Algorithm/
│   │   ├── 47_Count_Inversions_Brute_Optimal/
│   │   ├── 48_Knights_Tour_Backtracking_Leetcode_2596/
│   │   └── README.md           # Backtracking patterns & advanced sorting
│   │
│   ├── 07-Object-Oriented Programming & Linked Lists/  # Lectures 49-60
│   │   ├── 49_OOPs_Tutorial_in_One_Shot/
│   │   ├── 50_Introduction_to_Linked_List/
│   │   ├── 51_Reverse_a_Linked_List/
│   │   ├── 52_Middle_of_a_Linked_List/
│   │   ├── 53_Detect_Remove_Cycle_in_Linked_List/
│   │   ├── 54_Merge_Two_Sorted_Lists/
│   │   ├── 55_Copy_List_with_Random_Pointer/
│   │   ├── 56_Doubly_Linked_List_Tutorial/
│   │   ├── 57_Circular_Linked_List_in_Data_Structures/
│   │   ├── 58_Flatten_a_Doubly_Linked_List_Leetcode_430/
│   │   ├── 59_Reverse_Nodes_in_K_Group_Linked_List/
│   │   ├── 60_Swap_Nodes_in_Pairs_Linked_List/
│   │   └── README.md           # OOP concepts & linked list mastery
│   │
│   ├── 08-Stacks & Queues/                    # Lectures 61-77
│   │   ├── 61_Introduction_to_STACKS/
│   │   ├── 62_Valid_Parentheses_Stack/
│   │   ├── 63_Stock_Span_Problem_Optimal_Solution/
│   │   ├── 64_Next_Greater_Element_Optimal_Solution/
│   │   ├── 65_Previous_Smaller_Element_Optimal_Solution/
│   │   ├── 66_Design_a_Min_Stack_Optimal_Solution/
│   │   ├── 67_Largest_Rectangle_in_Histogram_Best_Solution/
│   │   ├── 68_Next_Greater_Element_II_Stack_Queue/
│   │   ├── 69_Trapping_Rainwater_Problem_Optimal_Solution/
│   │   ├── 70_The_Celebrity_Problem_Stack_Queue/
│   │   ├── 71_Implement_LRU_Cache_Linked_List/
│   │   ├── 72_Queue_Data_Structure/
│   │   ├── 73_Circular_Queue_in_Data_Structure/
│   │   ├── 74_Implement_Queue_using_Stack_Stack_using_Queue/
│   │   ├── 75_First_Unique_Character_in_String_Leetcode_387/
│   │   ├── 76_Sliding_Window_Maximum_Queue/
│   │   ├── 77_Gas_Station_Greedy_Approach_Leetcode_134/
│   │   └── README.md           # Stack & Queue patterns (LIFO/FIFO)
│   │
│   ├── 09-Binary Trees & Binary Search Trees (BST)/  # Lectures 78-103
│   │   ├── 78_Binary_Trees_in_Data_Structures_Tree_Traversal/
│   │   ├── 79_Height_of_a_Binary_Tree_Count_of_Nodes/
│   │   ├── 80_Identical_Tree_Subtree_of_another_Tree/
│   │   ├── 81_Diameter_of_Binary_Tree/
│   │   ├── 82_Top_View_of_a_Binary_Tree/
│   │   ├── 83_Kth_Level_of_a_Binary_Tree/
│   │   ├── 84_Lowest_Common_Ancestor_in_Binary_Tree/
│   │   ├── 85_Build_Tree_from_Preorder_Inorder/
│   │   ├── 86_Transform_to_Sum_Tree/
│   │   ├── 87_Binary_Tree_Paths/
│   │   ├── 88_Maximum_Width_of_Binary_Tree/
│   │   ├── 89_Morris_Inorder_Traversal/
│   │   ├── 90_Flatten_Binary_Tree_to_Linked_List/
│   │   ├── 91_Binary_Search_Trees_BSTs/
│   │   ├── 92_Sorted_Array_to_Balanced_BST/
│   │   ├── 93_Validate_Binary_Search_Tree/
│   │   ├── 94_Min_Distance_between_BST_Nodes/
│   │   ├── 95_Kth_Smallest_in_BST/
│   │   ├── 96_Lowest_Common_Ancestor_in_BST/
│   │   ├── 97_Construct_BST_from_Preorder/
│   │   ├── 98_Merge_Two_Binary_Search_Trees/
│   │   ├── 99_Recover_BST/
│   │   ├── 100_Largest_BST_in_Binary_Tree/
│   │   ├── 101_Populate_Next_Right_Pointers_in_Each_Node/
│   │   ├── 102_BST_Iterator/
│   │   ├── 103_Inorder_Predecessor_Successor_in_BST/
│   │   └── README.md           # Complete tree algorithms & BST operations
│   │
│   ├── 10-Graphs & Advanced Algorithms/       # Lectures 104-127
│   │   ├── 104_Introduction_to_Graphs/
│   │   ├── 105_BFS_Traversal_in_Graphs/
│   │   ├── 106_DFS_Traversal_in_Graphs/
│   │   ├── 107_Detect_Cycle_in_Undirected_Graph_using_DFS/
│   │   ├── 108_Detect_Cycle_in_Undirected_Graph_using_BFS/
│   │   ├── 109_Number_of_Islands_Connected_Components_Leetcode_200/
│   │   ├── 110_Rotting_Oranges_Multi_source_BFS_Leetcode_994/
│   │   ├── 111_Detect_Cycle_in_Directed_Graph_using_DFS/
│   │   ├── 112_Topological_Sorting_in_Graph_using_DFS/
│   │   ├── 113_Course_Schedule_Problem_Graph_Topological_Sort/
│   │   ├── 114_Course_Schedule_II_Problem_Graph_Topological_Sort/
│   │   ├── 115_Flood_Fill_Algorithm_Graph_Problem/
│   │   ├── 116_Topological_Sorting_using_Kahns_Algorithm/
│   │   ├── 117_Dijkstras_Algorithm_Single_Source_Shortest_Path_Greedy/
│   │   ├── 118_Bellman_Ford_Algorithm_Single_Source_Shortest_Path_DP/
│   │   ├── 119_DSA_Series_Quick_Update_125_lectures/
│   │   ├── 120_Prims_Algorithm_Minimum_Spanning_Tree_in_Graph/
│   │   ├── 121_Disjoint_Set_Union_With_Rank_Size_Path_Compression/
│   │   ├── 122_Kruskals_Algorithm_Minimum_Spanning_Tree_in_Graph/
│   │   ├── 123_Number_of_Provinces_Graph_Problem/
│   │   ├── 124_Min_Cost_to_Connect_All_Points_Graph_Problem/
│   │   ├── 125_Cheapest_Flights_Within_K_Stops_Graph_Problem/
│   │   ├── 126_Bridge_in_Graph_using_Tarjans_Algorithm_Critical_Connections/
│   │   ├── 127_Articulation_Point_in_Graph_using_Tarjans_Algorithm/
│   │   └── README.md           # Graph algorithms & advanced techniques
│   │
│   └── README.md               # Main DSA overview & learning path
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

#### C++ Fundamentals

Each C++ topic includes comprehensive guides:

- 📖 [Basics Guide](C++/01_Basics/README.md)
- 📖 [Variables Guide](C++/02_Variables/README.md)
- �� [Operators Guide](C++/03_Operators/README.md)
- 📖 [Input/Output Guide](C++/04_InputOutput/README.md)
- 📖 [Type Casting Guide](C++/05_Typecasting/README.md)
- 📖 [Conditionals Guide](C++/06_Conditionals/README.md)
- 📖 [Loops Guide](C++/07_Loops/README.md)
- 📖 [Patterns Guide](C++/08_Patterns/README.md)
- 📖 [Functions Guide](C++/09_Functions/README.md) - **Includes Memory Explanation!** 🧠
- 📖 [Binary Number System](C++/10_Binary_Number_System/README.md) - **Binary, Decimal, Two's Complement** 🔢
- 📖 [Bitwise Operators](C++/11_Bitwise_Operator/README.md) - **Bit Manipulation & Data Type Modifiers** ⚡


#### Data Structures & Algorithms

Complete DSA series with detailed guides:

- 📊 [Arrays & Vectors](DataStructure&Algorithm/01-Arrays%20&%20Vector%20Problems/README.md) - Kadane's, Two Pointer
- 🔍 [Binary Search](DataStructure&Algorithm/02-Pointers%20&%20Searching%20Algorithms/README.md) - All patterns
- 🔄 [Sorting & STL](<DataStructure&Algorithm/03-Sorting%20&%20Standard%20Template%20Library%20(STL)/README.md>) - Complete STL guide
- 📝 [Strings & 2D Arrays](DataStructure&Algorithm/04-Strings%20&%202D%20Arrays/README.md) - Matrix problems
- #️⃣ [Hashing & Recursion](DataStructure&Algorithm/05-Hashing%20&%20Basic%20Recursion/README.md) - Hash maps, recursion
- 🔙 [Backtracking](DataStructure&Algorithm/06-Backtracking%20&%20Advanced%20Sorting/README.md) - N-Queens, Sudoku
- 🔗 [OOP & Linked Lists](DataStructure&Algorithm/07-Object-Oriented%20Programming%20&%20Linked%20Lists/README.md) - Complete LL guide
- 📚 [Stacks & Queues](DataStructure&Algorithm/08-Stacks%20&%20Queues/README.md) - Monotonic stack, LRU Cache
- 🌳 [Trees & BST](<DataStructure&Algorithm/09-Binary%20Trees%20&%20Binary%20Search%20Trees%20(BST)/README.md>) - All tree algorithms
- 🕸️ [Graphs](DataStructure&Algorithm/10-Graphs%20&%20Advanced%20Algorithms/README.md) - BFS, DFS, Dijkstra's, MST

---

## 🎯 Interview Preparation

**Quick revision guide for technical interviews!** 💼

### **📚 Complete Interview Prep:**

- 🎯 **[Interview Preparation Guide](Interview-Prep/README.md)** - Main guide
- 💻 **C++ Fundamentals** - Basics, Functions, Pointers, OOP, STL
- 📊 **Data Structures** - Arrays, Trees, Graphs, Hash Tables, Heaps
- 🧮 **Algorithms** - Sorting, Searching, DP, Greedy, Backtracking
- 🎯 **Problem Patterns** - Two Pointers, Sliding Window, BFS/DFS
- ⏱️ **[Complexity Analysis](Interview-Prep/33-Complexity-Analysis.md)** - Big-O notation
- 💡 **Top 50 Problems** - Must-do questions
- 🎓 **Interview Tips** - How to ace interviews

### **🔥 Quick Links:**

- [C++ Basics Cheat Sheet](Interview-Prep/01-CPP-Basics.md)
- [Time & Space Complexity](Interview-Prep/33-Complexity-Analysis.md)
- [Common Interview Questions](Interview-Prep/34-Common-Questions.md)
- [Interview Tips](Interview-Prep/35-Interview-Tips.md)

### **📅 Study Plans:**

- 4-week comprehensive plan
- 1-week quick revision
- 1-day before interview checklist

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
