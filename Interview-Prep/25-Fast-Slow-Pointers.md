# 🐢🐰 Fast & Slow Pointers - Quick Reference

**Tortoise and Hare Algorithm!** 🎯

---

## 📋 What is Fast & Slow Pointers?

### **Definition:**

Fast & Slow pointers (also called **Tortoise and Hare**) is a technique where two pointers traverse a data structure at **different speeds** to detect cycles, find middle elements, or solve other problems.

### **Key Characteristics:**

- Two pointers move at different speeds
- Fast pointer moves 2 steps, slow moves 1 step
- Detects cycles in O(n) time, O(1) space
- Works on linked lists and arrays

### **When to Use:**

- Detect **cycles** in linked list
- Find **middle** of linked list
- Find **nth node** from end
- Check if linked list is **palindrome**

---

## 🎯 Core Concept

### **Speed Difference:**

```
Slow: →  →  →  →
Fast: →→ →→ →→ →→

If there's a cycle, fast will eventually catch slow!
```

### **Why It Works:**

- In a cycle, fast pointer gains 1 position per iteration
- Eventually fast catches slow (like running on a track)
- If no cycle, fast reaches end first

---

## 💡 Common Problems

### **1. Detect Cycle in Linked List:**

**Problem:** Check if linked list has a cycle

**Theory:**

- Fast moves 2 steps, slow moves 1 step
- If they meet, there's a cycle
- If fast reaches null, no cycle

```cpp
bool hasCycle(ListNode* head) {
    if (!head || !head->next) return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;        // Move 1 step
        fast = fast->next->next;  // Move 2 steps

        if (slow == fast) {
            return true;  // Cycle detected
        }
    }

    return false;  // No cycle
}
// Time: O(n), Space: O(1)
```

**Visualization:**

```
No Cycle:
1 → 2 → 3 → 4 → null
s   f
    s       f
        s           (fast reaches null)

With Cycle:
1 → 2 → 3 → 4
    ↑       ↓
    6 ← 5 ←

s   f
    s       f
        s   f
    s       f
        s   f       (they meet!)
```

---

### **2. Find Cycle Start:**

**Problem:** Find the node where cycle begins

**Theory:**

- First, detect cycle (fast meets slow)
- Reset slow to head
- Move both at same speed (1 step)
- They meet at cycle start!

**Mathematical Proof:**

```
Let:
- L = distance from head to cycle start
- C = cycle length
- k = distance from cycle start to meeting point

When they meet:
- Slow traveled: L + k
- Fast traveled: L + k + nC (n cycles)
- Fast = 2 × Slow
- L + k + nC = 2(L + k)
- L = nC - k

So distance from head to start = distance from meeting to start!
```

```cpp
ListNode* detectCycle(ListNode* head) {
    if (!head || !head->next) return nullptr;

    ListNode* slow = head;
    ListNode* fast = head;

    // Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Cycle found, find start
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;  // Cycle start
        }
    }

    return nullptr;  // No cycle
}
// Time: O(n), Space: O(1)
```

---

### **3. Find Middle of Linked List:**

**Problem:** Find middle node of linked list

**Theory:**

- When fast reaches end, slow is at middle
- For even length, returns second middle

```cpp
ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;  // Middle node
}
// Time: O(n), Space: O(1)
```

**Visualization:**

```
Odd length: 1 → 2 → 3 → 4 → 5
            s   f
                s       f
                    s           (fast at end)
            Middle = 3

Even length: 1 → 2 → 3 → 4
             s   f
                 s       f      (fast->next is null)
             Middle = 3 (second middle)
```

---

### **4. Palindrome Linked List:**

**Problem:** Check if linked list is palindrome

**Theory:**

1. Find middle using fast & slow
2. Reverse second half
3. Compare first half with reversed second half

```cpp
bool isPalindrome(ListNode* head) {
    if (!head || !head->next) return true;

    // Find middle
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode* prev = nullptr;
    while (slow) {
        ListNode* next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    // Compare
    ListNode* left = head;
    ListNode* right = prev;

    while (right) {
        if (left->val != right->val) {
            return false;
        }
        left = left->next;
        right = right->next;
    }

    return true;
}
// Time: O(n), Space: O(1)
```

---

### **5. Happy Number:**

**Problem:** Determine if number is happy

**Theory:**

- Happy number: sum of squares of digits eventually becomes 1
- Unhappy: enters a cycle
- Use fast & slow to detect cycle

```cpp
int getNext(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n;
    int fast = n;

    do {
        slow = getNext(slow);           // Move 1 step
        fast = getNext(getNext(fast));  // Move 2 steps

        if (fast == 1) return true;
    } while (slow != fast);

    return false;  // Cycle detected
}
// Time: O(log n), Space: O(1)
```

**Example:**

```
n = 19
19 → 1² + 9² = 82
82 → 8² + 2² = 68
68 → 6² + 8² = 100
100 → 1² + 0² + 0² = 1  ✓ Happy!

n = 2
2 → 4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4 (cycle!)
```

---

### **6. Reorder List:**

**Problem:** Reorder list: L0 → Ln → L1 → Ln-1 → L2 → Ln-2 ...

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

### **7. Remove Nth Node From End:**

**Problem:** Remove nth node from end in one pass

**Theory:**

- Move fast pointer n steps ahead
- Move both until fast reaches end
- Slow will be at (n-1)th node from end

```cpp
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* slow = dummy;
    ListNode* fast = dummy;

    // Move fast n+1 steps ahead
    for (int i = 0; i <= n; i++) {
        fast = fast->next;
    }

    // Move both until fast reaches end
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }

    // Remove nth node
    ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    delete toDelete;

    return dummy->next;
}
// Time: O(n), Space: O(1)
```

---

## 🔥 Fast & Slow Patterns

### **Pattern 1: Cycle Detection**

```cpp
bool hasCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
```

### **Pattern 2: Find Middle**

```cpp
ListNode* findMiddle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
```

### **Pattern 3: Find Kth from End**

```cpp
ListNode* findKthFromEnd(ListNode* head, int k) {
    ListNode* slow = head;
    ListNode* fast = head;

    // Move fast k steps ahead
    for (int i = 0; i < k; i++) {
        fast = fast->next;
    }

    // Move both
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
```

---

## 🎯 How to Identify Fast & Slow

### **Use Fast & Slow When:**

✅ **Linked list** problem
✅ Need to detect **cycle**
✅ Find **middle** element
✅ Find **kth from end**
✅ Need **O(1) space**

### **Don't Use When:**

❌ Need to access **random positions**
❌ Array with **indices** (use two pointers instead)
❌ Need to track **all elements**

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Cycle detection:** O(n)
- **Find middle:** O(n)
- **Kth from end:** O(n)

### **Space Complexity:**

- Always **O(1)** - no extra space!

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Fast moves 2x speed** of slow
2. **Cycle detection:** They meet if cycle exists
3. **Middle finding:** Fast reaches end, slow at middle
4. **Gap technique:** Move fast k steps ahead

### **Common Mistakes:**

- ❌ Not checking `fast->next` before `fast->next->next`
- ❌ Wrong initialization (both should start at head)
- ❌ Off-by-one errors in gap technique
- ❌ Not handling empty list or single node

### **Tips:**

- ✅ Always check `fast && fast->next`
- ✅ Use dummy node for edge cases
- ✅ Draw diagrams to visualize
- ✅ Test with odd and even length lists

---

## 🎓 Why It's Called Tortoise & Hare

**Aesop's Fable:**

- Tortoise (slow) moves steadily
- Hare (fast) moves quickly
- In a race on a circular track, hare catches tortoise!

**Algorithm:**

- Slow pointer = Tortoise 🐢
- Fast pointer = Hare 🐰
- If cycle exists, hare catches tortoise!

---

**Next:** [Merge Intervals →](26-Merge-Intervals.md)
