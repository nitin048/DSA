# 🎯 C++ & DSA Interview Preparation Guide

**Quick revision guide for technical interviews!** 💪

---

## 📋 Table of Contents

1. [How to Use This Guide](#-how-to-use-this-guide)
2. [C++ Fundamentals](#-c-fundamentals)
3. [Data Structures](#-data-structures)
4. [Algorithms](#-algorithms)
5. [Problem-Solving Patterns](#-problem-solving-patterns)
6. [Time & Space Complexity](#-time--space-complexity)
7. [Common Interview Questions](#-common-interview-questions)
8. [Interview Tips](#-interview-tips)

---

## 🎓 How to Use This Guide

### **Before Interview (1-2 days):**

1. ✅ Review all topic READMEs
2. ✅ Practice common patterns
3. ✅ Revise time complexity
4. ✅ Go through common questions

### **Day Before Interview:**

1. ✅ Quick scan of all cheat sheets
2. ✅ Practice 5-10 problems
3. ✅ Review your weak areas

### **1 Hour Before Interview:**

1. ✅ Read [Interview Tips](#-interview-tips)
2. ✅ Scan [Common Patterns](05-Problem-Patterns.md)
3. ✅ Relax and stay confident! 😊

---

## 💻 C++ Fundamentals

### **📚 Topics Covered:**

| Topic                     | File                                                   | Key Concepts                            |
| ------------------------- | ------------------------------------------------------ | --------------------------------------- |
| **Basics**                | [01-CPP-Basics.md](01-CPP-Basics.md)                   | Syntax, Variables, I/O, Operators       |
| **Functions**             | [02-Functions.md](02-Functions.md)                     | Declaration, Parameters, Return, Memory |
| **Pointers & References** | [03-Pointers-References.md](03-Pointers-References.md) | Pointers, References, Memory Management |
| **OOP Concepts**          | [04-OOP.md](04-OOP.md)                                 | Classes, Inheritance, Polymorphism      |
| **STL**                   | [05-STL.md](05-STL.md)                                 | Vectors, Maps, Sets, Algorithms         |

### **🔥 Must Know for Interviews:**

- ✅ Pass by value vs reference
- ✅ Pointers and memory management
- ✅ STL containers (vector, map, set)
- ✅ Time complexity of STL operations
- ✅ Classes and objects basics

---

## 📊 Data Structures

### **📚 Topics Covered:**

| Data Structure   | File                                     | Time Complexity       | When to Use                       |
| ---------------- | ---------------------------------------- | --------------------- | --------------------------------- |
| **Arrays**       | [06-Arrays.md](06-Arrays.md)             | Access: O(1)          | Fixed size, fast access           |
| **Strings**      | [07-Strings.md](07-Strings.md)           | Various               | Text manipulation                 |
| **Linked Lists** | [08-Linked-Lists.md](08-Linked-Lists.md) | Insert: O(1)          | Dynamic size, frequent insertions |
| **Stacks**       | [09-Stacks.md](09-Stacks.md)             | Push/Pop: O(1)        | LIFO operations                   |
| **Queues**       | [10-Queues.md](10-Queues.md)             | Enqueue/Dequeue: O(1) | FIFO operations                   |
| **Trees**        | [11-Trees.md](11-Trees.md)               | Search: O(log n)      | Hierarchical data                 |
| **Graphs**       | [12-Graphs.md](12-Graphs.md)             | Various               | Network/relationship data         |
| **Hash Tables**  | [13-Hash-Tables.md](13-Hash-Tables.md)   | Access: O(1) avg      | Fast lookups                      |
| **Heaps**        | [14-Heaps.md](14-Heaps.md)               | Insert: O(log n)      | Priority operations               |

### **🔥 Most Asked in Interviews:**

1. ⭐ Arrays & Strings (40% of questions)
2. ⭐ Trees & Graphs (30% of questions)
3. ⭐ Hash Tables (15% of questions)
4. ⭐ Stacks & Queues (10% of questions)
5. ⭐ Linked Lists (5% of questions)

---

## 🧮 Algorithms

### **📚 Topics Covered:**

| Algorithm Type          | File                                                   | Common Problems                    |
| ----------------------- | ------------------------------------------------------ | ---------------------------------- |
| **Searching**           | [15-Searching.md](15-Searching.md)                     | Binary Search, Linear Search       |
| **Sorting**             | [16-Sorting.md](16-Sorting.md)                         | Quick Sort, Merge Sort, Heap Sort  |
| **Recursion**           | [17-Recursion.md](17-Recursion.md)                     | Factorial, Fibonacci, Backtracking |
| **Dynamic Programming** | [18-Dynamic-Programming.md](18-Dynamic-Programming.md) | Knapsack, LCS, Coin Change         |
| **Greedy**              | [19-Greedy.md](19-Greedy.md)                           | Activity Selection, Huffman Coding |
| **Backtracking**        | [20-Backtracking.md](20-Backtracking.md)               | N-Queens, Sudoku, Permutations     |
| **Graph Algorithms**    | [21-Graph-Algorithms.md](21-Graph-Algorithms.md)       | BFS, DFS, Dijkstra, Kruskal        |
| **Bit Manipulation**    | [22-Bit-Manipulation.md](22-Bit-Manipulation.md)       | XOR tricks, Bit masking            |

### **🔥 Must Master:**

- ✅ Binary Search (and variations)
- ✅ Two Pointers technique
- ✅ Sliding Window
- ✅ BFS & DFS
- ✅ Basic Dynamic Programming

---

## 🎯 Problem-Solving Patterns

### **📚 Common Patterns:**

| Pattern                    | File                                                         | Use Cases                  |
| -------------------------- | ------------------------------------------------------------ | -------------------------- |
| **Two Pointers**           | [23-Two-Pointers.md](23-Two-Pointers.md)                     | Sorted arrays, palindromes |
| **Sliding Window**         | [24-Sliding-Window.md](24-Sliding-Window.md)                 | Subarray problems          |
| **Fast & Slow Pointers**   | [25-Fast-Slow-Pointers.md](25-Fast-Slow-Pointers.md)         | Cycle detection            |
| **Merge Intervals**        | [26-Merge-Intervals.md](26-Merge-Intervals.md)               | Overlapping intervals      |
| **Cyclic Sort**            | [27-Cyclic-Sort.md](27-Cyclic-Sort.md)                       | Missing numbers            |
| **In-place Reversal**      | [28-In-Place-Reversal.md](28-In-Place-Reversal.md)           | Linked list reversal       |
| **Tree BFS**               | [29-Tree-BFS.md](29-Tree-BFS.md)                             | Level order traversal      |
| **Tree DFS**               | [30-Tree-DFS.md](30-Tree-DFS.md)                             | Path problems              |
| **Top K Elements**         | [31-Top-K-Elements.md](31-Top-K-Elements.md)                 | Heap problems              |
| **Modified Binary Search** | [32-Modified-Binary-Search.md](32-Modified-Binary-Search.md) | Rotated arrays             |

### **🔥 Learn These First:**

1. ⭐ Two Pointers
2. ⭐ Sliding Window
3. ⭐ Binary Search variations
4. ⭐ BFS/DFS on trees
5. ⭐ Hash table patterns

---

## ⏱️ Time & Space Complexity

### **📚 Quick Reference:**

**File:** [33-Complexity-Analysis.md](33-Complexity-Analysis.md)

### **Common Complexities (Best to Worst):**

```
O(1)        → Constant       → Hash table lookup
O(log n)    → Logarithmic    → Binary search
O(n)        → Linear         → Array traversal
O(n log n)  → Linearithmic   → Merge sort, Quick sort
O(n²)       → Quadratic      → Nested loops
O(n³)       → Cubic          → Triple nested loops
O(2ⁿ)       → Exponential    → Recursive fibonacci
O(n!)       → Factorial      → Permutations
```

### **🔥 Interview Tip:**

Always analyze and state time & space complexity after solving!

---

## 💡 Common Interview Questions

### **📚 By Category:**

**File:** [34-Common-Questions.md](34-Common-Questions.md)

### **Top 50 Must-Do Problems:**

#### **Arrays (10 problems)**

1. Two Sum
2. Best Time to Buy and Sell Stock
3. Contains Duplicate
4. Product of Array Except Self
5. Maximum Subarray
6. Merge Intervals
7. Rotate Array
8. Find Minimum in Rotated Sorted Array
9. Search in Rotated Sorted Array
10. 3Sum

#### **Strings (5 problems)**

11. Valid Anagram
12. Valid Parentheses
13. Longest Substring Without Repeating Characters
14. Longest Palindromic Substring
15. Group Anagrams

#### **Linked Lists (5 problems)**

16. Reverse Linked List
17. Merge Two Sorted Lists
18. Linked List Cycle
19. Remove Nth Node From End
20. Reorder List

#### **Trees (10 problems)**

21. Maximum Depth of Binary Tree
22. Same Tree
23. Invert Binary Tree
24. Binary Tree Level Order Traversal
25. Validate Binary Search Tree
26. Kth Smallest Element in BST
27. Lowest Common Ancestor
28. Binary Tree Right Side View
29. Count Good Nodes in Binary Tree
30. Serialize and Deserialize Binary Tree

#### **Graphs (5 problems)**

31. Number of Islands
32. Clone Graph
33. Course Schedule
34. Pacific Atlantic Water Flow
35. Graph Valid Tree

#### **Dynamic Programming (5 problems)**

36. Climbing Stairs
37. House Robber
38. Coin Change
39. Longest Increasing Subsequence
40. Word Break

#### **Backtracking (3 problems)**

41. Subsets
42. Combination Sum
43. Permutations

#### **Heap/Priority Queue (3 problems)**

44. Kth Largest Element
45. Top K Frequent Elements
46. Find Median from Data Stream

#### **Bit Manipulation (2 problems)**

47. Single Number
48. Number of 1 Bits

#### **Math (2 problems)**

49. Reverse Integer
50. Pow(x, n)

---

## 🎯 Interview Tips

### **📚 Complete Guide:**

**File:** [35-Interview-Tips.md](35-Interview-Tips.md)

### **🔥 Quick Tips:**

#### **Before Interview:**

- ✅ Practice on whiteboard/paper
- ✅ Review your resume projects
- ✅ Prepare questions to ask interviewer
- ✅ Get good sleep!

#### **During Interview:**

- ✅ **Clarify the problem** - Ask questions!
- ✅ **Think out loud** - Explain your approach
- ✅ **Start with brute force** - Then optimize
- ✅ **Test your code** - Walk through examples
- ✅ **Analyze complexity** - State time & space

#### **Problem-Solving Steps:**

1. 🎯 **Understand** - Clarify requirements
2. 🧠 **Plan** - Think of approach
3. 💻 **Code** - Write clean code
4. 🧪 **Test** - Check edge cases
5. 📊 **Analyze** - State complexity

#### **Common Mistakes to Avoid:**

- ❌ Jumping to code immediately
- ❌ Not asking clarifying questions
- ❌ Not testing with examples
- ❌ Not considering edge cases
- ❌ Not stating complexity

---

## 📚 Additional Resources

### **Practice Platforms:**

- 🌐 [LeetCode](https://leetcode.com/) - Most popular
- 🌐 [HackerRank](https://www.hackerrank.com/) - Good for beginners
- 🌐 [Codeforces](https://codeforces.com/) - Competitive programming
- 🌐 [GeeksforGeeks](https://www.geeksforgeeks.org/) - Theory + practice

### **Books:**

- 📖 "Cracking the Coding Interview" by Gayle Laakmann McDowell
- 📖 "Elements of Programming Interviews" by Adnan Aziz
- 📖 "Introduction to Algorithms" by CLRS

### **YouTube Channels:**

- 🎥 NeetCode
- 🎥 Abdul Bari (Algorithms)
- 🎥 Back To Back SWE
- 🎥 Tech Dose

---

## 🗓️ Study Plan

### **4-Week Plan:**

#### **Week 1: Fundamentals**

- Day 1-2: Arrays & Strings
- Day 3-4: Linked Lists
- Day 5-6: Stacks & Queues
- Day 7: Practice problems

#### **Week 2: Trees & Graphs**

- Day 1-2: Binary Trees
- Day 3-4: Binary Search Trees
- Day 5-6: Graphs (BFS/DFS)
- Day 7: Practice problems

#### **Week 3: Algorithms**

- Day 1-2: Sorting & Searching
- Day 3-4: Recursion & Backtracking
- Day 5-6: Dynamic Programming basics
- Day 7: Practice problems

#### **Week 4: Advanced & Practice**

- Day 1-2: Advanced DP
- Day 3-4: Greedy algorithms
- Day 5-6: System design basics
- Day 7: Mock interviews

---

## 🎯 Quick Revision Checklist

### **1 Day Before Interview:**

- [ ] Review all cheat sheets
- [ ] Practice 5 easy problems
- [ ] Practice 3 medium problems
- [ ] Review common patterns
- [ ] Review time complexity

### **1 Hour Before Interview:**

- [ ] Read interview tips
- [ ] Review problem-solving steps
- [ ] Relax and breathe! 😊

---

## 📊 Progress Tracker

Track your preparation:

```
Arrays & Strings:        [    ] 0/10 problems
Linked Lists:            [    ] 0/5 problems
Trees:                   [    ] 0/10 problems
Graphs:                  [    ] 0/5 problems
Dynamic Programming:     [    ] 0/5 problems
Backtracking:            [    ] 0/3 problems
Heap/Priority Queue:     [    ] 0/3 problems
Bit Manipulation:        [    ] 0/2 problems
Math:                    [    ] 0/2 problems

Total Progress:          [    ] 0/50 problems
```

---

## 🎉 Final Words

### **Remember:**

- 💪 **Practice consistently** - 1-2 problems daily
- 🧠 **Understand, don't memorize** - Learn patterns
- 🗣️ **Communicate clearly** - Think out loud
- 😊 **Stay positive** - You've got this!

### **Interview is not just about:**

- ❌ Getting the perfect solution immediately
- ❌ Knowing every algorithm by heart
- ❌ Writing bug-free code on first try

### **Interview IS about:**

- ✅ Your problem-solving approach
- ✅ Your communication skills
- ✅ Your ability to learn and adapt
- ✅ Your thought process

---

## 🚀 You're Ready!

**This guide covers everything you need for C++ & DSA interviews!**

**Good luck with your interviews!** 🎯💪✨

---

**Made with ❤️ for interview success!**
