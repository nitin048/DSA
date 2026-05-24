# 🗂️ Hash Tables - Quick Reference

**O(1) lookups!** 🎯

---

## 📋 What is a Hash Table?

### **Definition:**

A **hash table** (hash map) is a data structure that stores **key-value pairs** and provides **O(1) average-time** operations for:

- Insert
- Delete
- Search

It uses a **hash function** to compute an index (hash code) where the value is stored in an array.

### **Real-World Analogy:**

- **Dictionary** 📖 - Word (key) → Definition (value)
- **Phone book** 📞 - Name (key) → Phone number (value)
- **Library catalog** 📚 - ISBN (key) → Book location (value)
- **Cache** 💾 - URL (key) → Cached page (value)
- **Database index** 🗄️ - ID (key) → Record (value)

### **How Hash Tables Work:**

```
1. Hash Function:
   key → hash(key) → index

   "apple" → hash("apple") → 5
   "banana" → hash("banana") → 2

2. Storage:
   Index  Value
   ┌───┬────────┐
   │ 0 │        │
   │ 1 │        │
   │ 2 │ banana │ ← hash("banana") = 2
   │ 3 │        │
   │ 4 │        │
   │ 5 │ apple  │ ← hash("apple") = 5
   │ 6 │        │
   └───┴────────┘

3. Collision Handling:
   If hash("cherry") = 2 (same as banana):

   Chaining:
   Index  Value
   ┌───┬────────────────┐
   │ 2 │ banana → cherry│
   └───┴────────────────┘

   Open Addressing:
   Try next available slot
```

---

## 🎯 Hash Function Properties

### **Good Hash Function:**

1. **Deterministic** - Same input → same output
2. **Uniform distribution** - Spread keys evenly
3. **Fast to compute** - O(1) time
4. **Minimize collisions** - Different keys → different indices

### **Common Hash Functions:**

```cpp
// Simple hash for integers
int hash(int key, int tableSize) {
    return key % tableSize;
}

// String hash (polynomial rolling)
int hash(string key, int tableSize) {
    int hash = 0;
    for (char c : key) {
        hash = (hash * 31 + c) % tableSize;
    }
    return hash;
}
```

---

## 🎯 Collision Resolution

### **1. Chaining (Separate Chaining):**

```
Each bucket contains a linked list

Index  Linked List
┌───┬──────────────┐
│ 0 │ → A → D      │
│ 1 │ → B          │
│ 2 │ → C → E → F  │
│ 3 │              │
└───┴──────────────┘

Pros: Simple, handles many collisions
Cons: Extra memory for pointers
```

### **2. Open Addressing:**

```
Find next available slot

Linear Probing:
If slot i is full, try i+1, i+2, ...

Quadratic Probing:
If slot i is full, try i+1², i+2², ...

Double Hashing:
Use second hash function for step size
```

---

## 🎯 Why Use Hash Tables?

### **Advantages:**

✅ **Fast operations** - O(1) average insert/delete/search  
✅ **Flexible keys** - Any hashable type  
✅ **Cache-friendly** - Good locality (open addressing)  
✅ **Simple interface** - Easy to use

### **Disadvantages:**

❌ **No order** - Keys are not sorted  
❌ **Worst case O(n)** - With many collisions  
❌ **Space overhead** - Need extra space for load factor  
❌ **Hash function** - Need good hash function

### **When to Use:**

- **Fast lookup** - Need O(1) search
- **Counting frequency** - Count occurrences
- **Caching** - Store computed results
- **Deduplication** - Remove duplicates
- **Two sum problems** - Find pairs

### **When NOT to Use:**

- Need **sorted data** (use BST/map)
- Need **range queries** (use BST)
- **Memory is limited** (hash tables need extra space)
- Need **worst-case guarantees** (use balanced BST)

---

## 📊 Complexity Analysis

| Operation | Average | Worst Case |
| --------- | ------- | ---------- |
| Insert    | O(1)    | O(n)       |
| Delete    | O(1)    | O(n)       |
| Search    | O(1)    | O(n)       |
| Space     | O(n)    | O(n)       |

**Load Factor (α) = n / m**

- n = number of elements
- m = table size
- Keep α < 0.75 for good performance

---

## 📋 Hash Table Basics

```cpp
#include <unordered_map>
#include <unordered_set>

unordered_map<int, int> map;
map[key] = value;        // O(1) average
map.count(key);          // O(1) average
map.erase(key);          // O(1) average

unordered_set<int> set;
set.insert(val);         // O(1) average
set.count(val);          // O(1) average
set.erase(val);          // O(1) average
```

---

## 💡 Common Problems

### **1. Two Sum:**

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.count(complement))
            return {map[complement], i};
        map[nums[i]] = i;
    }
    return {};
}
```

### **2. Group Anagrams:**

```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map;
    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        map[key].push_back(s);
    }
    vector<vector<string>> result;
    for (auto& [key, group] : map) {
        result.push_back(group);
    }
    return result;
}
```

### **3. Longest Consecutive Sequence:**

```cpp
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> set(nums.begin(), nums.end());
    int maxLen = 0;

    for (int num : set) {
        if (!set.count(num - 1)) {  // Start of sequence
            int len = 1;
            while (set.count(num + len)) len++;
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
}
```

---

## 🔥 Common Patterns

1. **Frequency counting** - Character/element frequency
2. **Two sum variations** - Find pairs with target
3. **Anagrams** - Group by sorted string
4. **Caching** - Store computed results

---

**Next:** [Heaps →](14-Heaps.md)
