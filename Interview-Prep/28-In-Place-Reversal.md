# 🔄 In-Place Reversal - Quick Reference

**Reverse linked list without extra space!** 🎯

---

## 📋 What is In-Place Reversal?

### **Definition:**

In-Place Reversal is a technique for **reversing** a linked list or part of it by changing the direction of pointers **without using extra space**.

### **Key Characteristics:**

- Reverses links between nodes
- Uses O(1) extra space
- Changes next pointers
- Requires tracking previous, current, next nodes

### **When to Use:**

- **Reverse** linked list (whole or part)
- **Reorder** linked list
- **Palindrome** check
- Keywords: "reverse", "reorder", "flip"

---

## 🎯 Core Concept

### **Reversal Process:**

```
Original:  1 → 2 → 3 → 4 → null

Step 1:    null ← 1   2 → 3 → 4 → null
           prev  curr next

Step 2:    null ← 1 ← 2   3 → 4 → null
                  prev curr next

Step 3:    null ← 1 ← 2 ← 3   4 → null
                       prev curr next

Step 4:    null ← 1 ← 2 ← 3 ← 4
                            prev curr(null)

Result:    4 → 3 → 2 → 1 → null
```

### **Three Pointers:**

```cpp
ListNode* prev = nullptr;  // Previous node
ListNode* curr = head;     // Current node
ListNode* next = nullptr;  // Next node (temp)
```

---

## 💡 Basic Reversal

### **1. Reverse Entire Linked List:**

**Problem:** Reverse entire linked list

**Theory:**

- Track previous, current, next nodes
- Reverse link: curr->next = prev
- Move all pointers forward

```cpp
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr) {
        ListNode* next = curr->next;  // Save next
        curr->next = prev;             // Reverse link
        prev = curr;                   // Move prev
        curr = next;                   // Move curr
    }

    return prev;  // New head
}
// Time: O(n), Space: O(1)
```

**Step-by-Step:**

```
Initial: 1 → 2 → 3 → null
         c

Step 1:  null ← 1   2 → 3 → null
         p     c    n

Step 2:  null ← 1 ← 2   3 → null
               p    c   n

Step 3:  null ← 1 ← 2 ← 3
                    p   c(null)

Return prev (3)
```

---

### **2. Reverse Linked List (Recursive):**

**Theory:**

- Recursively reverse rest of list
- Make next node point back to current
- Break original link

```cpp
ListNode* reverseList(ListNode* head) {
    // Base case
    if (!head || !head->next) {
        return head;
    }

    // Reverse rest
    ListNode* newHead = reverseList(head->next);

    // Make next node point back
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}
// Time: O(n), Space: O(n) for recursion stack
```

**Visualization:**

```
Original: 1 → 2 → 3 → null

Recursion:
reverseList(1)
  reverseList(2)
    reverseList(3)
      return 3
    3 → 2, 2 → null
    return 3
  3 → 2 → 1, 1 → null
  return 3

Result: 3 → 2 → 1 → null
```

---

## 💡 Partial Reversal

### **3. Reverse Between Positions:**

**Problem:** Reverse linked list from position left to right

**Theory:**

- Find node before left position
- Reverse nodes from left to right
- Connect reversed part back

```cpp
ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (!head || left == right) return head;

    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;

    // Move to node before left
    for (int i = 1; i < left; i++) {
        prev = prev->next;
    }

    // Reverse from left to right
    ListNode* curr = prev->next;
    ListNode* next = nullptr;

    for (int i = 0; i < right - left; i++) {
        next = curr->next;
        curr->next = next->next;
        next->next = prev->next;
        prev->next = next;
    }

    return dummy->next;
}
// Time: O(n), Space: O(1)
```

**Example:**

```
Input: 1 → 2 → 3 → 4 → 5, left=2, right=4

Step 1: Find node before left (1)
        1 → 2 → 3 → 4 → 5
        p   c

Step 2: Reverse 2→3→4
        1 → 3 → 2 → 4 → 5
        1 → 4 → 3 → 2 → 5

Result: 1 → 4 → 3 → 2 → 5
```

---

### **4. Reverse Nodes in k-Group:**

**Problem:** Reverse nodes in groups of k

**Theory:**

- Check if k nodes available
- Reverse k nodes
- Recursively process rest

```cpp
ListNode* reverseKGroup(ListNode* head, int k) {
    // Check if k nodes available
    ListNode* curr = head;
    int count = 0;

    while (curr && count < k) {
        curr = curr->next;
        count++;
    }

    if (count < k) return head;  // Not enough nodes

    // Reverse k nodes
    ListNode* prev = nullptr;
    curr = head;

    for (int i = 0; i < k; i++) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Recursively reverse rest
    head->next = reverseKGroup(curr, k);

    return prev;  // New head of reversed group
}
// Time: O(n), Space: O(n/k) for recursion
```

**Example:**

```
Input: 1 → 2 → 3 → 4 → 5, k=2

Group 1: Reverse 1→2
         2 → 1 → ...

Group 2: Reverse 3→4
         2 → 1 → 4 → 3 → 5

Result: 2 → 1 → 4 → 3 → 5
```

---

### **5. Reverse Alternate k-Group:**

**Problem:** Reverse alternate k nodes

**Theory:**

- Reverse k nodes
- Skip next k nodes
- Repeat

```cpp
ListNode* reverseAlternateKGroup(ListNode* head, int k) {
    if (!head || k == 1) return head;

    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next = nullptr;
    int count = 0;

    // Reverse k nodes
    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // Skip k nodes
    if (head) {
        head->next = curr;
        count = 0;
        while (curr && count < k - 1) {
            curr = curr->next;
            count++;
        }

        // Recursively process rest
        if (curr) {
            curr->next = reverseAlternateKGroup(curr->next, k);
        }
    }

    return prev;
}
```

---

## 💡 Advanced Problems

### **6. Rotate List:**

**Problem:** Rotate list to the right by k places

**Theory:**

- Find length and last node
- Connect last to head (make circular)
- Find new tail (length - k % length - 1)
- Break circle

```cpp
ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    // Find length and last node
    ListNode* last = head;
    int length = 1;

    while (last->next) {
        last = last->next;
        length++;
    }

    // Connect last to head
    last->next = head;

    // Find new tail
    k = k % length;
    int stepsToNewTail = length - k - 1;
    ListNode* newTail = head;

    for (int i = 0; i < stepsToNewTail; i++) {
        newTail = newTail->next;
    }

    // Break circle
    ListNode* newHead = newTail->next;
    newTail->next = nullptr;

    return newHead;
}
// Time: O(n), Space: O(1)
```

**Example:**

```
Input: 1 → 2 → 3 → 4 → 5, k=2

Step 1: Make circular
        1 → 2 → 3 → 4 → 5 → 1

Step 2: Find new tail (at position 3)
        1 → 2 → 3

Step 3: Break circle
        4 → 5 → 1 → 2 → 3

Result: 4 → 5 → 1 → 2 → 3
```

---

### **7. Swap Nodes in Pairs:**

**Problem:** Swap every two adjacent nodes

**Theory:**

- Use dummy node
- Swap pairs iteratively
- Update pointers carefully

```cpp
ListNode* swapPairs(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;

    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = prev->next->next;

        // Swap
        first->next = second->next;
        second->next = first;
        prev->next = second;

        // Move prev
        prev = first;
    }

    return dummy->next;
}
// Time: O(n), Space: O(1)
```

**Visualization:**

```
Input: 1 → 2 → 3 → 4

Step 1: Swap 1 and 2
        2 → 1 → 3 → 4

Step 2: Swap 3 and 4
        2 → 1 → 4 → 3

Result: 2 → 1 → 4 → 3
```

---

### **8. Reorder List:**

**Problem:** Reorder L0→L1→...→Ln to L0→Ln→L1→Ln-1→...

**Theory:**

1. Find middle
2. Reverse second half
3. Merge two halves alternately

```cpp
void reorderList(ListNode* head) {
    if (!head || !head->next) return;

    // Find middle
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode* prev = nullptr;
    ListNode* curr = slow->next;
    slow->next = nullptr;

    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Merge
    ListNode* first = head;
    ListNode* second = prev;

    while (second) {
        ListNode* temp1 = first->next;
        ListNode* temp2 = second->next;

        first->next = second;
        second->next = temp1;

        first = temp1;
        second = temp2;
    }
}
// Time: O(n), Space: O(1)
```

---

## 🔥 Reversal Template

### **Basic Reversal:**

```cpp
ListNode* reverse(ListNode* head) {
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
```

### **Reverse Between:**

```cpp
ListNode* reverseBetween(ListNode* start, ListNode* end) {
    ListNode* prev = nullptr;
    ListNode* curr = start;

    while (curr != end) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
```

---

## 🎯 How to Identify In-Place Reversal

### **Use In-Place Reversal When:**

✅ Need to **reverse** linked list
✅ Need **O(1) space**
✅ **Reorder** linked list
✅ Keywords: "reverse", "reorder", "swap"
✅ Linked list manipulation

### **Don't Use When:**

❌ Need to preserve original list
❌ Array reversal (use two pointers)
❌ Need to access by index

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Full reversal:** O(n)
- **Partial reversal:** O(n)
- **k-group reversal:** O(n)

### **Space Complexity:**

- **Iterative:** O(1)
- **Recursive:** O(n) for call stack

---

## 🔥 Must Remember

### **Key Steps:**

1. **Track** three pointers (prev, curr, next)
2. **Save** next node
3. **Reverse** link (curr->next = prev)
4. **Move** pointers forward
5. **Return** new head (prev)

### **Common Mistakes:**

- ❌ Losing reference to next node
- ❌ Not updating all pointers
- ❌ Wrong return value (return curr instead of prev)
- ❌ Not handling edge cases (empty, single node)

### **Tips:**

- ✅ Use dummy node for complex operations
- ✅ Draw diagrams to visualize
- ✅ Test with 2-3 nodes first
- ✅ Check edge cases (null, single node)

---

## 🎓 Common Patterns

### **Pattern 1: Full Reversal**

- Reverse entire list
- Return new head

### **Pattern 2: Partial Reversal**

- Find start and end positions
- Reverse between them
- Reconnect

### **Pattern 3: Group Reversal**

- Reverse in groups of k
- Handle remaining nodes

### **Pattern 4: Reorder**

- Find middle
- Reverse second half
- Merge alternately

---

**Next:** [Tree BFS →](29-Tree-BFS.md)
