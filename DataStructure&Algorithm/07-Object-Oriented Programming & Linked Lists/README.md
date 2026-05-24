# 🎯 Object-Oriented Programming & Linked Lists

## 📚 Section Overview

This section covers **Object-Oriented Programming (OOP)** concepts and **Linked List** data structures - two fundamental topics in computer science. You'll learn how to design classes, work with objects, and master one of the most important dynamic data structures.

**Lectures:** 49-60 (12 lectures)  
**Difficulty:** Intermediate to Advanced  
**Prerequisites:** Functions, Pointers, Dynamic Memory Allocation

---

## 📂 Folder Structure

### **49. OOPs Tutorial in One Shot**

- **Topics:** Classes, Objects, Encapsulation, Inheritance, Polymorphism, Abstraction
- **Key Concepts:**
  - Class vs Object
  - Access Modifiers (public, private, protected)
  - Constructors & Destructors
  - `this` pointer
  - Static members
- **Practice:** Create a Student class, Bank Account class

### **50. Introduction to Linked List**

- **Topics:** Singly Linked List, Node structure, Basic operations
- **Key Concepts:**
  - Dynamic memory allocation
  - Node creation
  - Traversal
  - Insertion (at head, tail, middle)
  - Deletion
- **Practice:** Implement basic linked list operations

### **51. Reverse a Linked List**

- **Topics:** Iterative and Recursive reversal
- **Key Concepts:**
  - Three-pointer approach
  - Recursive thinking
  - Time: O(n), Space: O(1) iterative / O(n) recursive
- **Practice:** Reverse in groups, Reverse alternate nodes
- **Leetcode:** #206

### **52. Middle of a Linked List**

- **Topics:** Slow-Fast pointer technique (Tortoise-Hare)
- **Key Concepts:**
  - Two-pointer approach
  - Finding middle in one pass
  - Time: O(n), Space: O(1)
- **Practice:** Delete middle node, Check palindrome
- **Leetcode:** #876

### **53. Detect & Remove Cycle in Linked List**

- **Topics:** Floyd's Cycle Detection Algorithm
- **Key Concepts:**
  - Cycle detection using slow-fast pointers
  - Finding cycle start point
  - Removing the cycle
  - Time: O(n), Space: O(1)
- **Practice:** Find cycle length, Detect intersection point
- **Leetcode:** #141, #142

### **54. Merge Two Sorted Lists**

- **Topics:** Merging technique, Dummy node
- **Key Concepts:**
  - Two-pointer merging
  - Dummy node trick
  - Iterative vs Recursive approach
  - Time: O(n+m), Space: O(1)
- **Practice:** Merge K sorted lists, Sort linked list
- **Leetcode:** #21

### **55. Copy List with Random Pointer**

- **Topics:** Deep copy, Hash map approach
- **Key Concepts:**
  - Cloning nodes
  - Handling random pointers
  - Interweaving technique
  - Time: O(n), Space: O(n) or O(1)
- **Practice:** Clone graph, Copy binary tree
- **Leetcode:** #138

### **56. Doubly Linked List Tutorial**

- **Topics:** Doubly Linked List structure and operations
- **Key Concepts:**
  - Bidirectional traversal
  - Insertion and deletion
  - Advantages over singly linked list
  - Time: O(1) for insertion/deletion at known position
- **Practice:** Implement browser history, LRU Cache

### **57. Circular Linked List in Data Structures**

- **Topics:** Circular Singly and Doubly Linked Lists
- **Key Concepts:**
  - Last node points to first
  - No NULL pointers
  - Circular traversal
  - Applications: Round-robin scheduling
- **Practice:** Split circular list, Josephus problem

### **58. Flatten a Doubly Linked List**

- **Topics:** Multi-level linked list flattening
- **Key Concepts:**
  - DFS/BFS approach
  - Stack-based solution
  - Recursive flattening
  - Time: O(n), Space: O(n)
- **Practice:** Flatten binary tree to linked list
- **Leetcode:** #430

### **59. Reverse Nodes in K-Group**

- **Topics:** Advanced reversal technique
- **Key Concepts:**
  - Group-wise reversal
  - Maintaining connections
  - Edge case handling
  - Time: O(n), Space: O(1)
- **Practice:** Reverse alternate K nodes
- **Leetcode:** #25 (Hard)

### **60. Swap Nodes in Pairs**

- **Topics:** Pairwise node swapping
- **Key Concepts:**
  - Pointer manipulation
  - Dummy node usage
  - Iterative and recursive solutions
  - Time: O(n), Space: O(1)
- **Practice:** Swap Kth node from beginning and end
- **Leetcode:** #24

---

## 🎯 Learning Path

```
Week 1: OOP Fundamentals
├── Day 1-2: Classes, Objects, Constructors
├── Day 3-4: Inheritance & Polymorphism
└── Day 5: Practice OOP problems

Week 2: Basic Linked Lists
├── Day 1-2: Singly Linked List operations
├── Day 3: Reverse & Middle finding
└── Day 4-5: Cycle detection & removal

Week 3: Advanced Linked Lists
├── Day 1-2: Merge operations
├── Day 3: Doubly & Circular lists
└── Day 4-5: Complex problems (K-group, Flatten)
```

---

## 📊 Progress Tracker

| Lecture | Topic                    | Status         | Difficulty | Leetcode   |
| ------- | ------------------------ | -------------- | ---------- | ---------- |
| 49      | OOPs Tutorial            | ⬜ Not Started | ⭐⭐       | -          |
| 50      | Intro to Linked List     | ⬜ Not Started | ⭐⭐       | -          |
| 51      | Reverse Linked List      | ⬜ Not Started | ⭐⭐       | #206       |
| 52      | Middle of Linked List    | ⬜ Not Started | ⭐⭐       | #876       |
| 53      | Detect & Remove Cycle    | ⬜ Not Started | ⭐⭐⭐     | #141, #142 |
| 54      | Merge Two Sorted Lists   | ⬜ Not Started | ⭐⭐       | #21        |
| 55      | Copy List Random Pointer | ⬜ Not Started | ⭐⭐⭐     | #138       |
| 56      | Doubly Linked List       | ⬜ Not Started | ⭐⭐       | -          |
| 57      | Circular Linked List     | ⬜ Not Started | ⭐⭐       | -          |
| 58      | Flatten Doubly LL        | ⬜ Not Started | ⭐⭐⭐     | #430       |
| 59      | Reverse in K-Group       | ⬜ Not Started | ⭐⭐⭐⭐   | #25        |
| 60      | Swap Nodes in Pairs      | ⬜ Not Started | ⭐⭐       | #24        |

**Legend:** ⬜ Not Started | 🟨 In Progress | ✅ Completed | ⭐ Difficulty

---

## 💻 Code Templates

### **1. Basic Node Structure (Singly Linked List)**

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert at head
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Insert at tail
    void insertAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Display list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Search element
    bool search(int val) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    // Delete node
    void deleteNode(int val) {
        if (head == NULL) return;

        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL && temp->next->data != val) {
            temp = temp->next;
        }

        if (temp->next != NULL) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
};

int main() {
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtTail(5);
    ll.insertAtTail(15);

    ll.display();  // 20 -> 10 -> 5 -> 15 -> NULL

    cout << "Search 10: " << (ll.search(10) ? "Found" : "Not Found") << endl;

    ll.deleteNode(10);
    ll.display();  // 20 -> 5 -> 15 -> NULL

    return 0;
}
```

### **2. Reverse Linked List (Iterative)**

```cpp
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;  // Store next
        curr->next = prev;  // Reverse link
        prev = curr;        // Move prev forward
        curr = next;        // Move curr forward
    }

    return prev;  // New head
}

// Time Complexity: O(n)
// Space Complexity: O(1)
```

### **3. Reverse Linked List (Recursive)**

```cpp
Node* reverseListRecursive(Node* head) {
    // Base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursive call
    Node* newHead = reverseListRecursive(head->next);

    // Reverse the link
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

// Time Complexity: O(n)
// Space Complexity: O(n) - recursion stack
```

### **4. Find Middle of Linked List (Slow-Fast Pointer)**

```cpp
Node* findMiddle(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;  // Middle node
}

// Time Complexity: O(n)
// Space Complexity: O(1)
```

### **5. Detect Cycle in Linked List (Floyd's Algorithm)**

```cpp
bool hasCycle(Node* head) {
    if (head == NULL) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;  // Cycle detected
        }
    }

    return false;  // No cycle
}

// Time Complexity: O(n)
// Space Complexity: O(1)
```

### **6. Find Cycle Start Point**

```cpp
Node* detectCycleStart(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;
    bool hasCycle = false;

    // Detect cycle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            hasCycle = true;
            break;
        }
    }

    if (!hasCycle) return NULL;

    // Find start of cycle
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;  // Start of cycle
}

// Time Complexity: O(n)
// Space Complexity: O(1)
```

### **7. Merge Two Sorted Lists**

```cpp
Node* mergeTwoLists(Node* l1, Node* l2) {
    // Dummy node
    Node* dummy = new Node(0);
    Node* tail = dummy;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    // Attach remaining nodes
    if (l1 != NULL) tail->next = l1;
    if (l2 != NULL) tail->next = l2;

    Node* mergedHead = dummy->next;
    delete dummy;
    return mergedHead;
}

// Time Complexity: O(n + m)
// Space Complexity: O(1)
```

### **8. Doubly Linked List Node**

```cpp
class DNode {
public:
    int data;
    DNode* prev;
    DNode* next;

    DNode(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    DNode* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    void insertAtHead(int val) {
        DNode* newNode = new DNode(val);
        if (head != NULL) {
            head->prev = newNode;
        }
        newNode->next = head;
        head = newNode;
    }

    void display() {
        DNode* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
```

### **9. Reverse Nodes in K-Group**

```cpp
Node* reverseKGroup(Node* head, int k) {
    if (head == NULL || k == 1) return head;

    // Check if we have k nodes
    Node* temp = head;
    int count = 0;
    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    if (count < k) return head;  // Less than k nodes remaining

    // Reverse k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Recursively reverse remaining groups
    if (next != NULL) {
        head->next = reverseKGroup(next, k);
    }

    return prev;  // New head
}

// Time Complexity: O(n)
// Space Complexity: O(n/k) - recursion stack
```

### **10. Swap Nodes in Pairs**

```cpp
Node* swapPairs(Node* head) {
    if (head == NULL || head->next == NULL) return head;

    Node* dummy = new Node(0);
    dummy->next = head;
    Node* prev = dummy;

    while (prev->next != NULL && prev->next->next != NULL) {
        Node* first = prev->next;
        Node* second = prev->next->next;

        // Swap
        first->next = second->next;
        second->next = first;
        prev->next = second;

        // Move prev forward
        prev = first;
    }

    Node* newHead = dummy->next;
    delete dummy;
    return newHead;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
```

---

## 📊 Time & Space Complexity Analysis

| Operation            | Singly LL | Doubly LL | Circular LL | Array |
| -------------------- | --------- | --------- | ----------- | ----- |
| **Access**           | O(n)      | O(n)      | O(n)        | O(1)  |
| **Search**           | O(n)      | O(n)      | O(n)        | O(n)  |
| **Insert at Head**   | O(1)      | O(1)      | O(1)        | O(n)  |
| **Insert at Tail**   | O(n)      | O(1)\*    | O(1)        | O(1)  |
| **Insert at Middle** | O(n)      | O(n)      | O(n)        | O(n)  |
| **Delete at Head**   | O(1)      | O(1)      | O(1)        | O(n)  |
| **Delete at Tail**   | O(n)      | O(1)\*    | O(1)        | O(1)  |
| **Delete at Middle** | O(n)      | O(n)      | O(n)        | O(n)  |

\*With tail pointer maintained

### **Common Algorithm Complexities**

| Algorithm       | Time   | Space  | Technique            |
| --------------- | ------ | ------ | -------------------- |
| Reverse List    | O(n)   | O(1)   | Three pointers       |
| Find Middle     | O(n)   | O(1)   | Slow-Fast pointer    |
| Detect Cycle    | O(n)   | O(1)   | Floyd's Algorithm    |
| Merge Two Lists | O(n+m) | O(1)   | Two pointers         |
| Reverse K-Group | O(n)   | O(n/k) | Recursion            |
| Swap Pairs      | O(n)   | O(1)   | Pointer manipulation |

---

## 🎓 OOP Concepts Quick Reference

### **1. Class & Object**

```cpp
class Student {
private:
    string name;
    int rollNo;

public:
    // Constructor
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    // Getter
    string getName() {
        return name;
    }

    // Setter
    void setName(string n) {
        name = n;
    }
};

int main() {
    Student s1("Rahul", 101);  // Object
    cout << s1.getName() << endl;
    return 0;
}
```

### **2. Encapsulation**

- Wrapping data and methods together
- Data hiding using access modifiers
- Provides security and control

### **3. Inheritance**

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};
```

### **4. Polymorphism**

```cpp
// Function Overloading (Compile-time)
class Calculator {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};

// Function Overriding (Runtime)
class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing circle" << endl;
    }
};
```

---

## 💡 Pro Tips

### **Linked List Tips:**

1. **Always check for NULL** before accessing node->next
2. **Use dummy node** for easier edge case handling
3. **Draw diagrams** to visualize pointer changes
4. **Practice pointer manipulation** - it's the key skill
5. **Master slow-fast pointer** technique - used in many problems
6. **Remember edge cases:** empty list, single node, two nodes
7. **Use recursion wisely** - it's elegant but uses stack space

### **OOP Tips:**

1. **Encapsulate data** - make members private by default
2. **Use constructors** for initialization
3. **Prefer composition over inheritance** when possible
4. **Follow SOLID principles** for better design
5. **Use virtual functions** for runtime polymorphism
6. **Destructor is important** for memory cleanup

### **Common Mistakes:**

- ❌ Forgetting to update head pointer
- ❌ Memory leaks (not deleting nodes)
- ❌ Losing reference to nodes during manipulation
- ❌ Not handling empty list case
- ❌ Infinite loops in circular lists
- ❌ Not checking for NULL before dereferencing

---

## 🎯 Practice Problems

### **Easy:**

1. Delete Node in a Linked List (Leetcode #237)
2. Remove Duplicates from Sorted List (Leetcode #83)
3. Intersection of Two Linked Lists (Leetcode #160)
4. Palindrome Linked List (Leetcode #234)

### **Medium:**

1. Add Two Numbers (Leetcode #2)
2. Remove Nth Node From End (Leetcode #19)
3. Reorder List (Leetcode #143)
4. Sort List (Leetcode #148)
5. LRU Cache (Leetcode #146)

### **Hard:**

1. Merge K Sorted Lists (Leetcode #23)
2. Reverse Nodes in K-Group (Leetcode #25)
3. Copy List with Random Pointer (Leetcode #138)

---

## 🌟 Interview Tips

### **Common Interview Questions:**

1. Explain the difference between array and linked list
2. When would you use a linked list over an array?
3. How do you detect a cycle in a linked list?
4. Explain Floyd's Cycle Detection Algorithm
5. How do you find the middle of a linked list in one pass?
6. What are the advantages of doubly linked list?
7. Explain the four pillars of OOP
8. What is the difference between overloading and overriding?

### **What Interviewers Look For:**

- ✅ Understanding of pointer manipulation
- ✅ Ability to handle edge cases
- ✅ Knowledge of time/space complexity
- ✅ Clean, readable code
- ✅ Proper memory management
- ✅ OOP design principles

---

## 📖 Additional Resources

- **Visualizations:** [VisuAlgo - Linked List](https://visualgo.net/en/list)
- **Practice:** [LeetCode Linked List Problems](https://leetcode.com/tag/linked-list/)
- **OOP Tutorial:** [GeeksforGeeks OOP in C++](https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/)

---

## ✅ Section Completion Checklist

- [ ] Understand all 4 OOP pillars
- [ ] Implement singly linked list from scratch
- [ ] Master reverse linked list (both iterative & recursive)
- [ ] Understand slow-fast pointer technique
- [ ] Solve cycle detection problems
- [ ] Implement doubly and circular linked lists
- [ ] Solve at least 10 linked list problems on Leetcode
- [ ] Complete all hard problems (K-group, Flatten)

---

**Happy Coding! 🚀**

_Remember: Linked lists are all about pointer manipulation. Draw diagrams, practice regularly, and you'll master them!_
