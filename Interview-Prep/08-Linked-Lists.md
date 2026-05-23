# 🔗 Linked Lists - Quick Reference

**Common in interviews!** 🎯

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
