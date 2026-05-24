# 🔗 Linked Lists - Quick Reference

**Common in interviews!** 🎯

---

## 📋 What is a Linked List?

### **Definition:**

A **linked list** is a **linear data structure** where elements (called nodes) are stored in non-contiguous memory locations. Each node contains:

1. **Data** - The actual value
2. **Pointer(s)** - Reference to the next (and/or previous) node

Unlike arrays, linked lists don't require contiguous memory and can grow/shrink dynamically.

### **Real-World Analogy:**

- **Train cars** 🚂 - Each car is connected to the next
- **Treasure hunt** 🗺️ - Each clue points to the next location
- **Music playlist** 🎵 - Each song links to the next
- **Browser history** 🌐 - Back/forward navigation

### **Memory Visualization:**

```
Array (Contiguous Memory):
┌───┬───┬───┬───┬───┐
│ 1 │ 2 │ 3 │ 4 │ 5 │
└───┴───┴───┴───┴───┘
 100 104 108 112 116  (Memory addresses)

Linked List (Non-contiguous Memory):
┌─────┬────┐    ┌─────┬────┐    ┌─────┬────┐
│  1  │ ●──┼───→│  2  │ ●──┼───→│  3  │ ●──┼───→ NULL
└─────┴────┘    └─────┴────┘    └─────┴────┘
  100             500             300         (Random memory locations)
```

### **Types of Linked Lists:**

#### **1. Singly Linked List:**

```
HEAD → [1|●] → [2|●] → [3|●] → NULL
```

- Each node points to the next node
- Can only traverse forward
- Less memory per node

#### **2. Doubly Linked List:**

```
NULL ← [●|1|●] ↔ [●|2|●] ↔ [●|3|●] → NULL
       HEAD                    TAIL
```

- Each node has two pointers (prev, next)
- Can traverse both directions
- More memory per node

#### **3. Circular Linked List:**

```
     ┌──────────────────┐
     ↓                  │
HEAD → [1|●] → [2|●] → [3|●]
```

- Last node points back to first node
- No NULL termination
- Useful for round-robin scheduling

---

## 🎯 Why Use Linked Lists?

### **Advantages:**

✅ **Dynamic size** - Grow/shrink at runtime  
✅ **Efficient insertion/deletion** - O(1) at known position  
✅ **No memory waste** - Allocate only what's needed  
✅ **No contiguous memory** - Works with fragmented memory

### **Disadvantages:**

❌ **No random access** - Must traverse from head (O(n))  
❌ **Extra memory** - Pointers take additional space  
❌ **Cache unfriendly** - Non-contiguous memory  
❌ **Reverse traversal** - Difficult in singly linked list

### **When to Use:**

- **Frequent insertions/deletions** at beginning/middle
- **Unknown size** - Don't know how many elements
- **No random access** needed
- **Implement stacks/queues** - Natural fit
- **Memory fragmentation** - Can't get contiguous block

### **When NOT to Use:**

- Need **random access** (use array/vector)
- **Memory is limited** (pointers add overhead)
- **Cache performance** matters (use array)
- Need **binary search** (use sorted array)

---

## 📊 Complexity Analysis

| Operation           | Array  | Linked List |
| ------------------- | ------ | ----------- |
| Access (by index)   | O(1)   | O(n)        |
| Search              | O(n)   | O(n)        |
| Insert at beginning | O(n)   | O(1)        |
| Insert at end       | O(1)\* | O(n)        |
| Insert at middle    | O(n)   | O(1)\*\*    |
| Delete at beginning | O(n)   | O(1)        |
| Delete at end       | O(1)\* | O(n)        |
| Delete at middle    | O(n)   | O(1)\*\*    |
| Memory usage        | Less   | More        |

\* Assuming dynamic array with amortized O(1)  
\*\* Assuming you already have pointer to the position

---

## 📋 Linked List Basics

### **Node Structure:**

```cpp
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
```

### **Types:**

1. **Singly Linked List** - One direction
2. **Doubly Linked List** - Two directions
3. **Circular Linked List** - Last points to first

---

## 🎯 Common Operations

### **1. Traversal:**

```cpp
void traverse(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
}
// Time: O(n), Space: O(1)
```

### **2. Insert at Beginning:**

```cpp
ListNode* insertAtHead(ListNode* head, int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    return newNode;
}
// Time: O(1), Space: O(1)
```

### **3. Insert at End:**

```cpp
ListNode* insertAtTail(ListNode* head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) return newNode;

    ListNode* curr = head;
    while (curr->next) curr = curr->next;
    curr->next = newNode;
    return head;
}
// Time: O(n), Space: O(1)
```

### **4. Delete Node:**

```cpp
ListNode* deleteNode(ListNode* head, int val) {
    if (!head) return nullptr;

    if (head->val == val) {
        ListNode* temp = head->next;
        delete head;
        return temp;
    }

    ListNode* curr = head;
    while (curr->next && curr->next->val != val) {
        curr = curr->next;
    }

    if (curr->next) {
        ListNode* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }

    return head;
}
// Time: O(n), Space: O(1)
```

---

## 🔥 Common Patterns

### **1. Two Pointers (Fast & Slow):**

```cpp
// Find middle
ListNode* findMiddle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
// Time: O(n), Space: O(1)
```

### **2. Reverse Linked List:**

```cpp
ListNode* reverse(ListNode* head) {
    ListNode *prev = nullptr, *curr = head;

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

### **3. Detect Cycle:**

```cpp
bool hasCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }

    return false;
}
// Time: O(n), Space: O(1)
```

### **4. Find Cycle Start:**

```cpp
ListNode* detectCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;

    // Find meeting point
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }

    if (!fast || !fast->next) return nullptr;

    // Find cycle start
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}
// Time: O(n), Space: O(1)
```

---

## 💡 Common Problems

### **1. Reverse Linked List:**

```cpp
ListNode* reverseList(ListNode* head) {
    ListNode *prev = nullptr, *curr = head;
    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
```

### **2. Merge Two Sorted Lists:**

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
```

### **3. Remove Nth Node From End:**

```cpp
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode dummy(0);
    dummy.next = head;
    ListNode *first = &dummy, *second = &dummy;

    // Move first n+1 steps ahead
    for (int i = 0; i <= n; i++) {
        first = first->next;
    }

    // Move both until first reaches end
    while (first) {
        first = first->next;
        second = second->next;
    }

    // Remove nth node
    ListNode* temp = second->next;
    second->next = second->next->next;
    delete temp;

    return dummy.next;
}
```

### **4. Reorder List:**

```cpp
void reorderList(ListNode* head) {
    if (!head || !head->next) return;

    // Find middle
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode* second = reverse(slow->next);
    slow->next = nullptr;

    // Merge two halves
    ListNode* first = head;
    while (second) {
        ListNode* temp1 = first->next;
        ListNode* temp2 = second->next;
        first->next = second;
        second->next = temp1;
        first = temp1;
        second = temp2;
    }
}
```

### **5. Palindrome Linked List:**

```cpp
bool isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;

    // Find middle
    ListNode *slow = head, *fast = head;
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode* second = reverse(slow->next);

    // Compare
    ListNode* first = head;
    while (second) {
        if (first->val != second->val) return false;
        first = first->next;
        second = second->next;
    }

    return true;
}
```

---

## 🎯 Interview Tips

### **Common Techniques:**

1. **Dummy node** - Simplifies edge cases
2. **Two pointers** - Fast & slow for middle/cycle
3. **Reverse** - Many problems need reversal
4. **Recursion** - Alternative to iteration

### **Edge Cases:**

- Empty list
- Single node
- Two nodes
- Cycle in list
- Odd/even length

### **Complexity:**

- Access: O(n)
- Insert (head): O(1)
- Insert (tail): O(n)
- Delete: O(n)
- Search: O(n)

---

## 🔥 Must Remember

### **Dummy Node Pattern:**

```cpp
ListNode dummy(0);
dummy.next = head;
// Work with dummy.next
return dummy.next;
```

### **Two Pointers:**

```cpp
ListNode *slow = head, *fast = head;
while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
}
// slow is at middle
```

### **Reverse Pattern:**

```cpp
ListNode *prev = nullptr, *curr = head;
while (curr) {
    ListNode* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}
return prev;
```

---

**Next:** [Stacks →](09-Stacks.md)
