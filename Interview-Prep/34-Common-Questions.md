# 💼 Common Interview Questions - Quick Reference

**Most frequently asked coding problems!** 🎯

---

## 📋 Overview

This guide covers the **most common** interview questions across all major tech companies (FAANG+). These problems appear repeatedly and test fundamental concepts.

---

## 🔥 Top 10 Must-Know Problems

### **1. Two Sum**

**Problem:** Find two numbers that add up to target

**Pattern:** Hash Map

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.count(complement)) {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }

    return {};
}
// Time: O(n), Space: O(n)
```

**Why Important:** Tests hash map understanding, one of most asked questions

---

### **2. Valid Parentheses**

**Problem:** Check if parentheses are balanced

**Pattern:** Stack

```cpp
bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> pairs = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char c : s) {
        if (pairs.count(c)) {
            if (st.empty() || st.top() != pairs[c]) {
                return false;
            }
            st.pop();
        } else {
            st.push(c);
        }
    }

    return st.empty();
}
// Time: O(n), Space: O(n)
```

**Why Important:** Tests stack usage, common warmup question

---

### **3. Reverse Linked List**

**Problem:** Reverse a singly linked list

**Pattern:** In-Place Reversal

```cpp
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
// Time: O(n), Space: O(1)
```

**Why Important:** Fundamental linked list operation, asked everywhere

---

### **4. Maximum Subarray (Kadane's Algorithm)**

**Problem:** Find contiguous subarray with maximum sum

**Pattern:** Dynamic Programming

```cpp
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}
// Time: O(n), Space: O(1)
```

**Why Important:** Classic DP problem, tests optimization thinking

---

### **5. Merge Two Sorted Lists**

**Problem:** Merge two sorted linked lists

**Pattern:** Two Pointers

```cpp
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = l1 ? l1 : l2;
    return dummy.next;
}
// Time: O(n + m), Space: O(1)
```

**Why Important:** Tests merge logic, foundation for merge sort

---

### **6. Binary Tree Level Order Traversal**

**Problem:** Traverse tree level by level

**Pattern:** BFS

```cpp
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(level);
    }

    return result;
}
// Time: O(n), Space: O(n)
```

**Why Important:** Tests BFS understanding, very common tree problem

---

### **7. Longest Substring Without Repeating Characters**

**Problem:** Find length of longest substring with unique characters

**Pattern:** Sliding Window

```cpp
int lengthOfLongestSubstring(string s) {
    unordered_set<char> window;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        while (window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }
        window.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
// Time: O(n), Space: O(min(n, charset))
```

**Why Important:** Classic sliding window, tests hash set usage

---

### **8. Validate Binary Search Tree**

**Problem:** Check if tree is valid BST

**Pattern:** Tree DFS

```cpp
bool isValidBST(TreeNode* root) {
    function<bool(TreeNode*, long, long)> validate =
        [&](TreeNode* node, long minVal, long maxVal) -> bool {
        if (!node) return true;

        if (node->val <= minVal || node->val >= maxVal) {
            return false;
        }

        return validate(node->left, minVal, node->val) &&
               validate(node->right, node->val, maxVal);
    };

    return validate(root, LONG_MIN, LONG_MAX);
}
// Time: O(n), Space: O(h)
```

**Why Important:** Tests tree properties, range validation

---

### **9. Merge Intervals**

**Problem:** Merge overlapping intervals

**Pattern:** Intervals

```cpp
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> result;
    result.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= result.back()[1]) {
            result.back()[1] = max(result.back()[1], intervals[i][1]);
        } else {
            result.push_back(intervals[i]);
        }
    }

    return result;
}
// Time: O(n log n), Space: O(n)
```

**Why Important:** Common scheduling problem, tests sorting + merging

---

### **10. LRU Cache**

**Problem:** Implement Least Recently Used cache

**Pattern:** Hash Map + Doubly Linked List

```cpp
class LRUCache {
private:
    struct Node {
        int key, value;
        Node *prev, *next;
        Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
    };

    int capacity;
    unordered_map<int, Node*> cache;
    Node *head, *tail;

    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertAtFront(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

public:
    LRUCache(int capacity) : capacity(capacity) {
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (!cache.count(key)) return -1;

        Node* node = cache[key];
        remove(node);
        insertAtFront(node);
        return node->value;
    }

    void put(int key, int value) {
        if (cache.count(key)) {
            Node* node = cache[key];
            node->value = value;
            remove(node);
            insertAtFront(node);
        } else {
            if (cache.size() == capacity) {
                Node* lru = tail->prev;
                remove(lru);
                cache.erase(lru->key);
                delete lru;
            }

            Node* node = new Node(key, value);
            cache[key] = node;
            insertAtFront(node);
        }
    }
};
// Time: O(1) for both operations, Space: O(capacity)
```

**Why Important:** Tests design skills, combines multiple data structures

---

## 🎯 By Company

### **Google Favorites:**

1. **Longest Substring Without Repeating Characters**
2. **Merge Intervals**
3. **Word Ladder**
4. **Number of Islands**
5. **Decode Ways**

### **Amazon Favorites:**

1. **Two Sum**
2. **LRU Cache**
3. **Merge Two Sorted Lists**
4. **Reverse Linked List**
5. **Valid Parentheses**

### **Facebook/Meta Favorites:**

1. **Binary Tree Vertical Order Traversal**
2. **Valid Palindrome**
3. **Merge K Sorted Lists**
4. **Clone Graph**
5. **Product of Array Except Self**

### **Microsoft Favorites:**

1. **Reverse Linked List**
2. **Validate Binary Search Tree**
3. **Maximum Subarray**
4. **Rotate Array**
5. **String to Integer (atoi)**

### **Apple Favorites:**

1. **Two Sum**
2. **Palindrome Number**
3. **Reverse Integer**
4. **Longest Common Prefix**
5. **Valid Parentheses**

---

## 📊 By Difficulty

### **Easy (Must Master):**

- Two Sum
- Valid Parentheses
- Merge Two Sorted Lists
- Maximum Depth of Binary Tree
- Best Time to Buy and Sell Stock
- Valid Palindrome
- Reverse Linked List
- Climbing Stairs
- Symmetric Tree
- Single Number

### **Medium (Practice Often):**

- Add Two Numbers
- Longest Substring Without Repeating Characters
- Container With Most Water
- 3Sum
- Letter Combinations of Phone Number
- Remove Nth Node From End
- Generate Parentheses
- Merge Intervals
- Rotate Image
- Group Anagrams

### **Hard (Understand Concepts):**

- Median of Two Sorted Arrays
- Regular Expression Matching
- Merge K Sorted Lists
- Trapping Rain Water
- Wildcard Matching
- Jump Game II
- N-Queens
- Word Ladder II
- Longest Valid Parentheses
- Sudoku Solver

---

## 🔥 By Pattern

### **Array/String:**

- Two Sum
- Best Time to Buy and Sell Stock
- Product of Array Except Self
- Maximum Subarray
- Rotate Array

### **Linked List:**

- Reverse Linked List
- Merge Two Sorted Lists
- Linked List Cycle
- Remove Nth Node From End
- Add Two Numbers

### **Tree:**

- Maximum Depth of Binary Tree
- Validate Binary Search Tree
- Binary Tree Level Order Traversal
- Lowest Common Ancestor
- Serialize and Deserialize Binary Tree

### **Graph:**

- Number of Islands
- Clone Graph
- Course Schedule
- Word Ladder
- Pacific Atlantic Water Flow

### **Dynamic Programming:**

- Climbing Stairs
- House Robber
- Coin Change
- Longest Increasing Subsequence
- Word Break

---

## 💡 Interview Tips

### **Before Interview:**

1. **Practice top 50** LeetCode problems
2. **Master** all patterns in this guide
3. **Time yourself** - aim for 30-45 min per problem
4. **Explain** your approach out loud
5. **Test** with edge cases

### **During Interview:**

1. **Clarify** requirements and constraints
2. **Think out loud** - explain your thought process
3. **Start simple** - brute force first, then optimize
4. **Test** your code with examples
5. **Discuss** time and space complexity

### **Common Mistakes:**

- ❌ Jumping to code without planning
- ❌ Not asking clarifying questions
- ❌ Ignoring edge cases
- ❌ Not testing code
- ❌ Getting stuck on one approach

### **What Interviewers Look For:**

- ✅ Problem-solving approach
- ✅ Code quality and clarity
- ✅ Communication skills
- ✅ Handling feedback
- ✅ Testing and debugging

---

## 📚 Study Plan

### **Week 1-2: Fundamentals**

- Arrays and Strings
- Hash Maps and Sets
- Two Pointers
- Sliding Window

### **Week 3-4: Data Structures**

- Linked Lists
- Stacks and Queues
- Trees (BFS/DFS)
- Heaps

### **Week 5-6: Algorithms**

- Binary Search
- Sorting
- Recursion
- Backtracking

### **Week 7-8: Advanced**

- Dynamic Programming
- Graphs
- Greedy
- Design Problems

### **Week 9-10: Practice**

- Mock interviews
- Company-specific problems
- Time-constrained practice
- Review mistakes

---

## 🎯 Problem-Solving Framework

### **Step 1: Understand**

- Read problem carefully
- Ask clarifying questions
- Identify inputs and outputs
- Consider constraints

### **Step 2: Plan**

- Think of examples
- Identify pattern
- Consider data structures
- Estimate complexity

### **Step 3: Implement**

- Start with brute force
- Optimize if needed
- Write clean code
- Use meaningful names

### **Step 4: Test**

- Test with examples
- Consider edge cases
- Walk through code
- Fix bugs

### **Step 5: Analyze**

- Discuss time complexity
- Discuss space complexity
- Mention trade-offs
- Suggest improvements

---

## 🔗 Resources

### **Practice Platforms:**

- LeetCode (most popular)
- HackerRank
- CodeSignal
- Pramp (mock interviews)

### **Books:**

- Cracking the Coding Interview
- Elements of Programming Interviews
- Algorithm Design Manual

### **Courses:**

- Grokking the Coding Interview
- AlgoExpert
- Educative.io

---

## 🎓 Final Tips

### **Consistency is Key:**

- Practice **daily** (1-2 problems)
- Review **mistakes**
- Track **progress**
- Stay **motivated**

### **Quality Over Quantity:**

- Understand **why** solution works
- Learn **patterns**, not just problems
- Practice **explaining** solutions
- Focus on **weak areas**

### **Mock Interviews:**

- Practice with **peers**
- Use **Pramp** or similar platforms
- Get **feedback**
- Simulate **real conditions**

---

**Good luck with your interviews!** 🚀💪✨

**Remember:** Everyone struggles at first. Keep practicing, stay consistent, and you'll improve!

---

**See Also:**

- [Interview Tips →](35-Interview-Tips.md)
- [Complexity Analysis →](33-Complexity-Analysis.md)
- [All Patterns →](README.md)
