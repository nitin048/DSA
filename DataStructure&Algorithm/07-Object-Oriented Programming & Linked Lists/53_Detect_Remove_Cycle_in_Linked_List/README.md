# 🔗 Detect Remove Cycle in Linked List - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Detect Remove Cycle in Linked List?](#-what-is-detect-remove-cycle-in-linked-list)
2. [Why Detect Remove Cycle in Linked List?](#-why-detect-remove-cycle-in-linked-list)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Detect Remove Cycle in Linked List?

### **Concept Overview:**
Detecting and Removing Loops in Linked Lists.

### **Real-Life Analogy:**
Think of a linked list like a **scavenger hunt**. You don't have a map showing all destinations. Instead, you start at the first clue (Head node), which tells you the location of the next clue, and so on, until the last clue points to nothing (nullptr).

---

## 💡 Why Detect Remove Cycle in Linked List?

### **Advantages:**
- Constant time node insertions and deletions O(1) if pointers are known
- No wasted capacity space

### **Disadvantages / Challenges:**
- Sequential access lookup time O(N) (no direct indexing)
- Extra memory overhead for pointer variables
- Not cache friendly due to random pointer locations

### **When to Use:**
- When insertions/deletions at start/middle are highly frequent
- When dynamic sizes vary extensively without sizing bounds

---

## 📖 Core Concepts

- **Cycle Find:** Find loop meets using slow and fast pointers.
- **Reset:** Move slow back to head. Move both at equal speeds; meeting node points to the loop start.

---

## 💻 C++ Implementation Reference

```cpp
Node* detectCycle(Node* head) {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next; fast = fast->next->next;
        if (slow == fast) {
            slow = head;
            while (slow != fast) { slow = slow->next; fast = fast->next; }
            return slow; // Loop start
        }
    }
    return nullptr;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(1) |

---

## 💡 Best Practices & Gotchas

- **To remove the loop, find the node preceding the cycle start and set its next pointer to null.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Traverse linked list nodes
- [ ] Insert node at beginning/end of list
- [ ] Delete node by value

### **Medium Problems:**
- [ ] Reverse a linked list
- [ ] Detect cycle in list (Fast/Slow pointers)
- [ ] Find middle node

### **Hard Problems:**
- [ ] Merge k Sorted Lists
- [ ] Reverse nodes in k-groups

---

## ✅ Checklist

- [ ] Always check if head or head->next is nullptr before references
- [ ] Use dummy nodes to simplify pointer updates
- [ ] Free memory of deleted nodes to prevent leaks

---

**Happy Coding! 🔗**
