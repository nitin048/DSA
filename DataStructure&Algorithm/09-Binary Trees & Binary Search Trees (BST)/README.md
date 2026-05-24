# 🌳 Binary Trees & Binary Search Trees (BST)

## 📚 Section Overview

This section covers **Binary Trees** and **Binary Search Trees (BST)** - hierarchical data structures that are fundamental to computer science. You'll learn tree traversals, BST operations, and solve complex tree problems that are frequently asked in interviews.

**Lectures:** 78-103 (26 lectures)  
**Difficulty:** Intermediate to Advanced  
**Prerequisites:** Recursion, Pointers, Linked Lists

---

## 📂 Folder Structure

### **78. Binary Trees in Data Structures | Tree Traversal**

- **Topics:** Tree basics, Node structure, Traversals (Inorder, Preorder, Postorder, Level Order)
- **Key Concepts:**
  - Binary tree properties
  - Recursive traversals
  - BFS vs DFS
  - Queue for level order
- **Practice:** Implement all traversals

### **79. Height of a Binary Tree | Count of Nodes**

- **Topics:** Tree height, Node counting
- **Key Concepts:**
  - Recursive height calculation
  - Complete vs Full binary tree
  - Time: O(n), Space: O(h)
- **Practice:** Find depth, Count leaf nodes
- **Leetcode:** #104

### **80. Identical Tree | Subtree of another Tree**

- **Topics:** Tree comparison, Subtree checking
- **Key Concepts:**
  - Recursive comparison
  - Structure and value matching
  - Time: O(n), Space: O(h)
- **Practice:** Mirror tree, Symmetric tree
- **Leetcode:** #100, #572

### **81. Diameter of Binary Tree**

- **Topics:** Longest path between any two nodes
- **Key Concepts:**
  - Path through root vs not through root
  - Height calculation optimization
  - Time: O(n), Space: O(h)
- **Practice:** Binary tree maximum path sum
- **Leetcode:** #543

### **82. Top View of a Binary Tree**

- **Topics:** Vertical order traversal
- **Key Concepts:**
  - Horizontal distance concept
  - Level order + Map
  - Time: O(n), Space: O(n)
- **Practice:** Bottom view, Left/Right view

### **83. Kth Level of a Binary Tree**

- **Topics:** Level-specific traversal
- **Key Concepts:**
  - Recursive level tracking
  - BFS with level counting
  - Time: O(n), Space: O(w)
- **Practice:** Zigzag level order, Average of levels

### **84. Lowest Common Ancestor in Binary Tree**

- **Topics:** LCA finding algorithm
- **Key Concepts:**
  - Recursive search
  - Path finding approach
  - Time: O(n), Space: O(h)
- **Practice:** Distance between nodes
- **Leetcode:** #236

### **85. Build Tree from Preorder & Inorder**

- **Topics:** Tree construction from traversals
- **Key Concepts:**
  - Root identification from preorder
  - Left/Right subtree from inorder
  - HashMap for optimization
  - Time: O(n), Space: O(n)
- **Practice:** Build from Postorder & Inorder
- **Leetcode:** #105

### **86. Transform to Sum Tree**

- **Topics:** Tree transformation
- **Key Concepts:**
  - Postorder traversal
  - Subtree sum calculation
  - Time: O(n), Space: O(h)
- **Practice:** Convert to Greater Sum Tree

### **87. Binary Tree Paths**

- **Topics:** Root-to-leaf path finding
- **Key Concepts:**
  - DFS with path tracking
  - Backtracking
  - Time: O(n), Space: O(h)
- **Practice:** Path sum, All paths with target sum
- **Leetcode:** #257

### **88. Maximum Width of Binary Tree**

- **Topics:** Width calculation
- **Key Concepts:**
  - Level order with indexing
  - Leftmost and rightmost positions
  - Time: O(n), Space: O(w)
- **Practice:** Minimum width
- **Leetcode:** #662

### **89. Morris Inorder Traversal**

- **Topics:** Space-optimized traversal
- **Key Concepts:**
  - Threaded binary tree
  - No recursion, no stack
  - Time: O(n), Space: O(1)
- **Practice:** Morris Preorder
- **Leetcode:** #94

### **90. Flatten Binary Tree to Linked List**

- **Topics:** Tree to linked list conversion
- **Key Concepts:**
  - Preorder traversal
  - Right pointer manipulation
  - Time: O(n), Space: O(1)
- **Practice:** Flatten to doubly linked list
- **Leetcode:** #114

### **91. Binary Search Trees (BSTs)**

- **Topics:** BST properties, Operations (Insert, Delete, Search)
- **Key Concepts:**
  - Left < Root < Right property
  - Inorder gives sorted sequence
  - Time: O(h), Space: O(h)
- **Practice:** Implement all BST operations

### **92. Sorted Array to Balanced BST**

- **Topics:** BST construction from sorted array
- **Key Concepts:**
  - Middle element as root
  - Recursive construction
  - Time: O(n), Space: O(h)
- **Practice:** Sorted linked list to BST
- **Leetcode:** #108

### **93. Validate Binary Search Tree**

- **Topics:** BST validation
- **Key Concepts:**
  - Range checking (min, max)
  - Inorder traversal check
  - Time: O(n), Space: O(h)
- **Practice:** Check if BST is balanced
- **Leetcode:** #98

### **94. Min Distance between BST Nodes**

- **Topics:** Minimum difference in BST
- **Key Concepts:**
  - Inorder traversal
  - Adjacent node difference
  - Time: O(n), Space: O(h)
- **Practice:** Find mode in BST
- **Leetcode:** #783

### **95. Kth Smallest in BST**

- **Topics:** Kth element finding
- **Key Concepts:**
  - Inorder traversal
  - Counter approach
  - Time: O(k), Space: O(h)
- **Practice:** Kth largest element
- **Leetcode:** #230

### **96. Lowest Common Ancestor in BST**

- **Topics:** LCA in BST
- **Key Concepts:**
  - BST property utilization
  - Iterative approach possible
  - Time: O(h), Space: O(1)
- **Practice:** Find distance between nodes
- **Leetcode:** #235

### **97. Construct BST from Preorder**

- **Topics:** BST construction from preorder
- **Key Concepts:**
  - Range-based construction
  - No inorder needed
  - Time: O(n), Space: O(h)
- **Practice:** Construct from postorder
- **Leetcode:** #1008

### **98. Merge Two Binary Search Trees**

- **Topics:** BST merging
- **Key Concepts:**
  - Inorder to sorted arrays
  - Merge sorted arrays
  - Construct balanced BST
  - Time: O(m+n), Space: O(m+n)
- **Practice:** Merge K BSTs

### **99. Recover BST**

- **Topics:** Fix swapped nodes in BST
- **Key Concepts:**
  - Inorder traversal
  - Find two swapped nodes
  - Time: O(n), Space: O(h)
- **Practice:** Delete node in BST
- **Leetcode:** #99

### **100. Largest BST in Binary Tree**

- **Topics:** Find largest BST subtree
- **Key Concepts:**
  - Postorder traversal
  - Track min, max, size
  - Time: O(n), Space: O(h)
- **Practice:** Count BST nodes in range

### **101. Populate Next Right Pointers in Each Node**

- **Topics:** Level linking
- **Key Concepts:**
  - Level order traversal
  - Constant space approach
  - Time: O(n), Space: O(1)
- **Practice:** Connect all siblings
- **Leetcode:** #116, #117

### **102. BST Iterator**

- **Topics:** Iterator design for BST
- **Key Concepts:**
  - Stack-based inorder
  - next() and hasNext()
  - Time: O(1) average, Space: O(h)
- **Practice:** Two Sum BST
- **Leetcode:** #173

### **103. Inorder Predecessor & Successor in BST**

- **Topics:** Find predecessor and successor
- **Key Concepts:**
  - BST property utilization
  - Parent pointer approach
  - Time: O(h), Space: O(1)
- **Practice:** Delete node using predecessor/successor

---

## 🎯 Learning Path

```
Week 1: Binary Tree Fundamentals
├── Day 1-2: Tree structure, Traversals
├── Day 3-4: Height, Diameter, Views
└── Day 5: LCA, Path problems

Week 2: Advanced Binary Trees
├── Day 1-2: Tree construction, Transformation
├── Day 3: Morris traversal, Flattening
└── Day 4-5: Width, Complex problems

Week 3: Binary Search Trees
├── Day 1-2: BST basics, Validation
├── Day 3-4: Kth element, LCA, Construction
└── Day 5: Merge, Recovery, Iterator

Week 4: Advanced BST & Practice
├── Day 1-2: Largest BST, Next pointers
├── Day 3-4: Predecessor/Successor
└── Day 5: Mixed practice problems
```

---

## 📊 Progress Tracker

| Lecture | Topic                    | Status         | Difficulty | Leetcode        |
| ------- | ------------------------ | -------------- | ---------- | --------------- |
| 78      | Binary Trees & Traversal | ⬜ Not Started | ⭐⭐       | #94, #144, #145 |
| 79      | Height & Count Nodes     | ⬜ Not Started | ⭐⭐       | #104            |
| 80      | Identical & Subtree      | ⬜ Not Started | ⭐⭐       | #100, #572      |
| 81      | Diameter of Tree         | ⬜ Not Started | ⭐⭐       | #543            |
| 82      | Top View                 | ⬜ Not Started | ⭐⭐⭐     | -               |
| 83      | Kth Level                | ⬜ Not Started | ⭐⭐       | #102            |
| 84      | LCA in Binary Tree       | ⬜ Not Started | ⭐⭐⭐     | #236            |
| 85      | Build from Traversals    | ⬜ Not Started | ⭐⭐⭐     | #105            |
| 86      | Sum Tree                 | ⬜ Not Started | ⭐⭐       | -               |
| 87      | Binary Tree Paths        | ⬜ Not Started | ⭐⭐       | #257            |
| 88      | Maximum Width            | ⬜ Not Started | ⭐⭐⭐     | #662            |
| 89      | Morris Traversal         | ⬜ Not Started | ⭐⭐⭐⭐   | #94             |
| 90      | Flatten to LL            | ⬜ Not Started | ⭐⭐⭐     | #114            |
| 91      | BST Basics               | ⬜ Not Started | ⭐⭐       | -               |
| 92      | Array to BST             | ⬜ Not Started | ⭐⭐       | #108            |
| 93      | Validate BST             | ⬜ Not Started | ⭐⭐⭐     | #98             |
| 94      | Min Distance BST         | ⬜ Not Started | ⭐⭐       | #783            |
| 95      | Kth Smallest BST         | ⬜ Not Started | ⭐⭐       | #230            |
| 96      | LCA in BST               | ⬜ Not Started | ⭐⭐       | #235            |
| 97      | BST from Preorder        | ⬜ Not Started | ⭐⭐⭐     | #1008           |
| 98      | Merge Two BSTs           | ⬜ Not Started | ⭐⭐⭐     | -               |
| 99      | Recover BST              | ⬜ Not Started | ⭐⭐⭐⭐   | #99             |
| 100     | Largest BST              | ⬜ Not Started | ⭐⭐⭐⭐   | -               |
| 101     | Next Right Pointers      | ⬜ Not Started | ⭐⭐⭐     | #116, #117      |
| 102     | BST Iterator             | ⬜ Not Started | ⭐⭐⭐     | #173            |
| 103     | Predecessor/Successor    | ⬜ Not Started | ⭐⭐⭐     | -               |

**Legend:** ⬜ Not Started | 🟨 In Progress | ✅ Completed | ⭐ Difficulty

---

## 💻 Code Templates

### **1. Binary Tree Node Structure**

```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
```

### **2. Tree Traversals**

```cpp
// Inorder Traversal (Left -> Root -> Right)
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder Traversal (Root -> Left -> Right)
void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder Traversal (Left -> Right -> Root)
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Level Order Traversal (BFS)
void levelOrder(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
}

// Time: O(n), Space: O(h) for recursive, O(w) for level order
```

### **3. Height of Binary Tree**

```cpp
int height(Node* root) {
    if (root == NULL) return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

// Time Complexity: O(n)
// Space Complexity: O(h) - recursion stack
```

### **4. Count Nodes in Binary Tree**

```cpp
int countNodes(Node* root) {
    if (root == NULL) return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

// Time Complexity: O(n)
// Space Complexity: O(h)
```

### **5. Diameter of Binary Tree**

```cpp
int diameterHelper(Node* root, int& diameter) {
    if (root == NULL) return 0;

    int leftHeight = diameterHelper(root->left, diameter);
    int rightHeight = diameterHelper(root->right, diameter);

    // Update diameter
    diameter = max(diameter, leftHeight + rightHeight);

    return max(leftHeight, rightHeight) + 1;
}

int diameter(Node* root) {
    int diam = 0;
    diameterHelper(root, diam);
    return diam;
}

// Time Complexity: O(n)
// Space Complexity: O(h)
```

### **6. Lowest Common Ancestor (Binary Tree)**

```cpp
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if (root == NULL) return NULL;
    if (root == p || root == q) return root;

    Node* leftLCA = lowestCommonAncestor(root->left, p, q);
    Node* rightLCA = lowestCommonAncestor(root->right, p, q);

    if (leftLCA != NULL && rightLCA != NULL) return root;

    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

// Time Complexity: O(n)
// Space Complexity: O(h)
```

### **7. Build Tree from Preorder & Inorder**

```cpp
Node* buildTreeHelper(vector<int>& preorder, vector<int>& inorder,
                      int preStart, int preEnd, int inStart, int inEnd,
                      unordered_map<int, int>& inMap) {
    if (preStart > preEnd || inStart > inEnd) return NULL;

    Node* root = new Node(preorder[preStart]);
    int inRoot = inMap[root->data];
    int numsLeft = inRoot - inStart;

    root->left = buildTreeHelper(preorder, inorder,
                                  preStart + 1, preStart + numsLeft,
                                  inStart, inRoot - 1, inMap);
    root->right = buildTreeHelper(preorder, inorder,
                                   preStart + numsLeft + 1, preEnd,
                                   inRoot + 1, inEnd, inMap);

    return root;
}

Node* buildTree(vector<int>& preorder, vector<int>& inorder) {
    unordered_map<int, int> inMap;
    for (int i = 0; i < inorder.size(); i++) {
        inMap[inorder[i]] = i;
    }

    return buildTreeHelper(preorder, inorder, 0, preorder.size() - 1,
                          0, inorder.size() - 1, inMap);
}

// Time Complexity: O(n)
// Space Complexity: O(n)
```

### **8. Morris Inorder Traversal (Space Optimized)**

```cpp
void morrisInorder(Node* root) {
    Node* curr = root;

    while (curr != NULL) {
        if (curr->left == NULL) {
            cout << curr->data << " ";
            curr = curr->right;
        } else {
            // Find inorder predecessor
            Node* pred = curr->left;
            while (pred->right != NULL && pred->right != curr) {
                pred = pred->right;
            }

            if (pred->right == NULL) {
                // Create thread
                pred->right = curr;
                curr = curr->left;
            } else {
                // Remove thread
                pred->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1) - No recursion, no stack!
```

### **9. BST Operations**

```cpp
// Insert in BST
Node* insertBST(Node* root, int val) {
    if (root == NULL) return new Node(val);

    if (val < root->data) {
        root->left = insertBST(root->left, val);
    } else {
        root->right = insertBST(root->right, val);
    }

    return root;
}

// Search in BST
bool searchBST(Node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;

    if (key < root->data) {
        return searchBST(root->left, key);
    } else {
        return searchBST(root->right, key);
    }
}

// Time Complexity: O(h)
// Space Complexity: O(h)
```

### **10. Validate BST**

```cpp
bool isValidBSTHelper(Node* root, long minVal, long maxVal) {
    if (root == NULL) return true;

    if (root->data <= minVal || root->data >= maxVal) {
        return false;
    }

    return isValidBSTHelper(root->left, minVal, root->data) &&
           isValidBSTHelper(root->right, root->data, maxVal);
}

bool isValidBST(Node* root) {
    return isValidBSTHelper(root, LONG_MIN, LONG_MAX);
}

// Time Complexity: O(n)
// Space Complexity: O(h)
```

### **11. Kth Smallest in BST**

```cpp
void kthSmallestHelper(Node* root, int& k, int& result) {
    if (root == NULL) return;

    kthSmallestHelper(root->left, k, result);

    k--;
    if (k == 0) {
        result = root->data;
        return;
    }

    kthSmallestHelper(root->right, k, result);
}

int kthSmallest(Node* root, int k) {
    int result = -1;
    kthSmallestHelper(root, k, result);
    return result;
}

// Time Complexity: O(k)
// Space Complexity: O(h)
```

### **12. LCA in BST**

```cpp
Node* lowestCommonAncestorBST(Node* root, Node* p, Node* q) {
    if (root == NULL) return NULL;

    // Both nodes in left subtree
    if (p->data < root->data && q->data < root->data) {
        return lowestCommonAncestorBST(root->left, p, q);
    }

    // Both nodes in right subtree
    if (p->data > root->data && q->data > root->data) {
        return lowestCommonAncestorBST(root->right, p, q);
    }

    // Split point is LCA
    return root;
}

// Time Complexity: O(h)
// Space Complexity: O(h)
```

### **13. Sorted Array to Balanced BST**

```cpp
Node* sortedArrayToBST(vector<int>& nums, int start, int end) {
    if (start > end) return NULL;

    int mid = start + (end - start) / 2;
    Node* root = new Node(nums[mid]);

    root->left = sortedArrayToBST(nums, start, mid - 1);
    root->right = sortedArrayToBST(nums, mid + 1, end);

    return root;
}

Node* sortedArrayToBST(vector<int>& nums) {
    return sortedArrayToBST(nums, 0, nums.size() - 1);
}

// Time Complexity: O(n)
// Space Complexity: O(log n)
```

### **14. BST Iterator**

```cpp
class BSTIterator {
private:
    stack<Node*> st;

    void pushLeft(Node* node) {
        while (node != NULL) {
            st.push(node);
            node = node->left;
        }
    }

public:
    BSTIterator(Node* root) {
        pushLeft(root);
    }

    int next() {
        Node* top = st.top();
        st.pop();
        pushLeft(top->right);
        return top->data;
    }

    bool hasNext() {
        return !st.empty();
    }
};

// Time Complexity: O(1) average for next()
// Space Complexity: O(h)
```

---

## 📊 Time & Space Complexity Analysis

| Operation     | Binary Tree | BST (Balanced) | BST (Skewed) |
| ------------- | ----------- | -------------- | ------------ |
| **Search**    | O(n)        | O(log n)       | O(n)         |
| **Insert**    | O(1)\*      | O(log n)       | O(n)         |
| **Delete**    | O(n)        | O(log n)       | O(n)         |
| **Traversal** | O(n)        | O(n)           | O(n)         |
| **Height**    | O(n)        | O(log n)       | O(n)         |
| **Min/Max**   | O(n)        | O(log n)       | O(n)         |

\*At known position

### **Common Algorithm Complexities**

| Algorithm                  | Time | Space | Notes             |
| -------------------------- | ---- | ----- | ----------------- |
| Inorder/Preorder/Postorder | O(n) | O(h)  | Recursive         |
| Level Order                | O(n) | O(w)  | w = max width     |
| Height                     | O(n) | O(h)  | Recursive         |
| Diameter                   | O(n) | O(h)  | Optimized         |
| LCA                        | O(n) | O(h)  | Binary Tree       |
| LCA (BST)                  | O(h) | O(h)  | Uses BST property |
| Morris Traversal           | O(n) | O(1)  | No stack!         |
| Validate BST               | O(n) | O(h)  | Range check       |
| Kth Smallest               | O(k) | O(h)  | Inorder           |

---

## 💡 Pro Tips

### **Binary Tree Tips:**

1. **Master recursion** - Most tree problems use recursion
2. **Draw the tree** - Visualize before coding
3. **Think base case first** - NULL check is crucial
4. **Use helper functions** - Pass additional parameters
5. **Level order = BFS** - Use queue
6. **DFS = Stack or Recursion** - Preorder, Inorder, Postorder
7. **Height vs Depth** - Height from bottom, Depth from top

### **BST Tips:**

1. **Inorder gives sorted** - Key property for many problems
2. **Use BST property** - Left < Root < Right
3. **Range validation** - Pass min/max for validation
4. **Iterative possible** - Many BST operations don't need recursion
5. **Predecessor/Successor** - Important for deletion
6. **Balance matters** - Unbalanced BST = O(n) operations

### **Common Patterns:**

- **Two recursive calls** - Process left and right subtrees
- **Pass by reference** - For diameter, sum, etc.
- **Dummy node** - Simplifies edge cases
- **Level tracking** - Use queue with size or NULL marker
- **Path tracking** - Use vector and backtrack

### **Common Mistakes:**

- ❌ Forgetting NULL checks
- ❌ Not returning from base case
- ❌ Confusing height and depth
- ❌ Memory leaks (not deleting nodes)
- ❌ Wrong BST validation (not using range)
- ❌ Modifying tree during traversal

---

## 🎯 Practice Problems

### **Easy:**

1. Maximum Depth of Binary Tree (Leetcode #104)
2. Same Tree (Leetcode #100)
3. Invert Binary Tree (Leetcode #226)
4. Symmetric Tree (Leetcode #101)
5. Path Sum (Leetcode #112)
6. Minimum Depth (Leetcode #111)

### **Medium:**

1. Binary Tree Level Order Traversal (Leetcode #102)
2. Construct Binary Tree from Traversals (Leetcode #105, #106)
3. Kth Smallest Element in BST (Leetcode #230)
4. Validate Binary Search Tree (Leetcode #98)
5. Binary Tree Right Side View (Leetcode #199)
6. Count Complete Tree Nodes (Leetcode #222)
7. All Nodes Distance K (Leetcode #863)

### **Hard:**

1. Binary Tree Maximum Path Sum (Leetcode #124)
2. Serialize and Deserialize Binary Tree (Leetcode #297)
3. Recover Binary Search Tree (Leetcode #99)
4. Binary Tree Cameras (Leetcode #968)
5. Vertical Order Traversal (Leetcode #987)

---

## 🌟 Interview Tips

### **Common Interview Questions:**

1. Explain the difference between Binary Tree and BST
2. What are the different tree traversals?
3. How do you find the height of a tree?
4. Explain Morris Traversal and its advantage
5. How do you validate a BST?
6. What is the time complexity of BST operations?
7. How do you find LCA in a tree?
8. Explain the difference between complete and full binary tree

### **What Interviewers Look For:**

- ✅ Understanding of recursion
- ✅ Ability to visualize tree structure
- ✅ Knowledge of traversal techniques
- ✅ BST property utilization
- ✅ Space optimization awareness
- ✅ Edge case handling (NULL, single node)

### **Interview Strategy:**

1. **Clarify the problem** - Ask about duplicates, NULL nodes
2. **Draw examples** - Small tree with 3-5 nodes
3. **Think recursively** - Define base case and recursive case
4. **Consider iterative** - If space is a concern
5. **Test edge cases** - Empty tree, single node, skewed tree
6. **Analyze complexity** - Time and space

---

## 📖 Additional Resources

- **Visualizations:** [VisuAlgo - Binary Tree](https://visualgo.net/en/bst)
- **Practice:** [LeetCode Tree Problems](https://leetcode.com/tag/tree/)
- **Tutorial:** [GeeksforGeeks Binary Trees](https://www.geeksforgeeks.org/binary-tree-data-structure/)
- **BST Visualization:** [BST Visualizer](https://www.cs.usfca.edu/~galles/visualization/BST.html)

---

## ✅ Section Completion Checklist

- [ ] Understand all tree traversals (Inorder, Preorder, Postorder, Level Order)
- [ ] Master recursive tree problems
- [ ] Implement BST from scratch with all operations
- [ ] Understand Morris Traversal
- [ ] Solve LCA problems (both Binary Tree and BST)
- [ ] Master tree construction from traversals
- [ ] Understand BST validation
- [ ] Solve at least 15 tree problems on Leetcode
- [ ] Complete all hard problems (Diameter, Morris, Recover BST)
- [ ] Understand space-time tradeoffs

---

**Happy Coding! 🌳**

_Remember: Trees are recursive by nature. Master recursion, and you'll master trees!_
