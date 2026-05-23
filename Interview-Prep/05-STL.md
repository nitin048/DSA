# 📚 STL (Standard Template Library) - Quick Reference

**Essential for competitive programming & interviews!** 🎯

---

## 📋 What is STL?

### **Definition:**

The Standard Template Library (STL) is a powerful set of **C++ template classes** that provide general-purpose **containers**, **algorithms**, and **iterators**. It's a cornerstone of modern C++ programming.

### **Components:**

1. **Containers** - Data structures (vector, map, set, etc.)
2. **Algorithms** - Functions for processing data (sort, search, etc.)
3. **Iterators** - Objects for traversing containers
4. **Function Objects** - Objects that act like functions
5. **Adapters** - Modify interface of containers/iterators

### **Why Use STL?**

- ✅ **Pre-tested** - Reliable, bug-free implementations
- ✅ **Efficient** - Optimized for performance
- ✅ **Reusable** - Generic, works with any data type
- ✅ **Time-saving** - No need to implement from scratch
- ✅ **Standard** - Available in all C++ compilers

### **Philosophy:**

```
STL = Containers + Algorithms + Iterators

Containers store data
Algorithms process data
Iterators connect them
```

---

## 📋 Containers

### **Container Categories:**

1. **Sequence Containers** - Linear order (vector, deque, list)
2. **Associative Containers** - Sorted, key-based (set, map)
3. **Unordered Containers** - Hash-based (unordered_set, unordered_map)
4. **Container Adapters** - Restricted interface (stack, queue, priority_queue)

### **Sequence Containers:**

#### **vector:**

```cpp
vector<int> v;
v.push_back(1);          // O(1) amortized
v.pop_back();            // O(1)
v[0];                    // O(1) access
v.size();                // O(1)
v.empty();               // O(1)
v.clear();               // O(n)
sort(v.begin(), v.end());// O(n log n)
```

#### **deque:**

```cpp
deque<int> dq;
dq.push_front(1);        // O(1)
dq.push_back(2);         // O(1)
dq.pop_front();          // O(1)
dq.pop_back();           // O(1)
```

#### **list:**

```cpp
list<int> lst;
lst.push_front(1);       // O(1)
lst.push_back(2);        // O(1)
lst.insert(it, val);     // O(1)
lst.erase(it);           // O(1)
```

---

### **Associative Containers:**

#### **set (ordered, unique):**

```cpp
set<int> s;
s.insert(1);             // O(log n)
s.erase(1);              // O(log n)
s.find(1);               // O(log n)
s.count(1);              // O(log n)
s.lower_bound(1);        // O(log n)
s.upper_bound(1);        // O(log n)
```

#### **multiset (ordered, duplicates):**

```cpp
multiset<int> ms;
ms.insert(1);            // O(log n)
ms.count(1);             // O(log n + count)
ms.erase(ms.find(1));    // Erase one occurrence
```

#### **map (ordered key-value):**

```cpp
map<string, int> m;
m["key"] = 10;           // O(log n)
m.insert({"key", 10});   // O(log n)
m.erase("key");          // O(log n)
m.find("key");           // O(log n)
m.count("key");          // O(log n)
```

#### **multimap (ordered, duplicate keys):**

```cpp
multimap<int, string> mm;
mm.insert({1, "one"});
mm.insert({1, "uno"});   // Allows duplicates
```

---

### **Unordered Containers:**

#### **unordered_set (hash table):**

```cpp
unordered_set<int> us;
us.insert(1);            // O(1) average
us.erase(1);             // O(1) average
us.find(1);              // O(1) average
us.count(1);             // O(1) average
```

#### **unordered_map (hash table):**

```cpp
unordered_map<string, int> um;
um["key"] = 10;          // O(1) average
um.insert({"key", 10});  // O(1) average
um.erase("key");         // O(1) average
um.find("key");          // O(1) average
um.count("key");         // O(1) average
```

---

### **Container Adapters:**

#### **stack (LIFO):**

```cpp
stack<int> st;
st.push(1);              // O(1)
st.pop();                // O(1)
st.top();                // O(1)
st.empty();              // O(1)
st.size();               // O(1)
```

#### **queue (FIFO):**

```cpp
queue<int> q;
q.push(1);               // O(1)
q.pop();                 // O(1)
q.front();               // O(1)
q.back();                // O(1)
q.empty();               // O(1)
```

#### **priority_queue (max heap):**

```cpp
priority_queue<int> pq;
pq.push(1);              // O(log n)
pq.pop();                // O(log n)
pq.top();                // O(1)

// Min heap
priority_queue<int, vector<int>, greater<int>> minPq;
```

---

## 🧮 Algorithms

### **Sorting:**

```cpp
sort(v.begin(), v.end());                    // Ascending
sort(v.begin(), v.end(), greater<int>());    // Descending
sort(v.begin(), v.end(), [](int a, int b) {  // Custom
    return a > b;
});
```

### **Searching:**

```cpp
// Binary search (requires sorted)
binary_search(v.begin(), v.end(), val);      // Returns bool
lower_bound(v.begin(), v.end(), val);        // First >= val
upper_bound(v.begin(), v.end(), val);        // First > val

// Linear search
find(v.begin(), v.end(), val);               // Returns iterator
count(v.begin(), v.end(), val);              // Count occurrences
```

### **Min/Max:**

```cpp
*min_element(v.begin(), v.end());
*max_element(v.begin(), v.end());
minmax_element(v.begin(), v.end());
```

### **Accumulate:**

```cpp
#include <numeric>
int sum = accumulate(v.begin(), v.end(), 0);
```

### **Reverse:**

```cpp
reverse(v.begin(), v.end());
```

### **Unique:**

```cpp
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());
```

### **Next/Prev Permutation:**

```cpp
next_permutation(v.begin(), v.end());
prev_permutation(v.begin(), v.end());
```

---

## 🎯 Common Patterns

### **1. Frequency Count:**

```cpp
unordered_map<int, int> freq;
for (int x : arr) freq[x]++;
```

### **2. Two Sum (Hash Map):**

```cpp
unordered_map<int, int> seen;
for (int i = 0; i < n; i++) {
    if (seen.count(target - arr[i]))
        return {seen[target - arr[i]], i};
    seen[arr[i]] = i;
}
```

### **3. Top K Elements:**

```cpp
priority_queue<int, vector<int>, greater<int>> minHeap;
for (int x : arr) {
    minHeap.push(x);
    if (minHeap.size() > k)
        minHeap.pop();
}
```

### **4. Sliding Window Maximum:**

```cpp
deque<int> dq;
for (int i = 0; i < n; i++) {
    while (!dq.empty() && arr[dq.back()] < arr[i])
        dq.pop_back();
    dq.push_back(i);
    if (dq.front() <= i - k)
        dq.pop_front();
}
```

---

## 💡 Interview Tips

### **When to Use:**

| Need                        | Use                 |
| --------------------------- | ------------------- |
| Fast access by index        | `vector`            |
| Fast insert/delete at ends  | `deque`             |
| Fast insert/delete anywhere | `list`              |
| Unique sorted elements      | `set`               |
| Key-value pairs (sorted)    | `map`               |
| Fast lookup (unsorted)      | `unordered_set/map` |
| LIFO operations             | `stack`             |
| FIFO operations             | `queue`             |
| Priority operations         | `priority_queue`    |

### **Complexity Cheat Sheet:**

| Container         | Access | Insert   | Delete   | Search   |
| ----------------- | ------ | -------- | -------- | -------- |
| vector            | O(1)   | O(n)     | O(n)     | O(n)     |
| deque             | O(1)   | O(1)\*   | O(1)\*   | O(n)     |
| list              | O(n)   | O(1)     | O(1)     | O(n)     |
| set/map           | -      | O(log n) | O(log n) | O(log n) |
| unordered_set/map | -      | O(1)†    | O(1)†    | O(1)†    |

\*At ends only
†Average case

---

## 🔥 Must Remember

### **Common Operations:**

```cpp
// Iterators
for (auto it = v.begin(); it != v.end(); ++it) {}
for (auto x : v) {}  // Range-based for

// Pair
pair<int, int> p = {1, 2};
p.first, p.second

// Tuple (C++11)
tuple<int, int, int> t = {1, 2, 3};
get<0>(t), get<1>(t), get<2>(t)

// Lambda
sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
});
```

---

## 🎯 When to Use Which Container?

### **Decision Tree:**

```
Need ordered elements?
├─ Yes → Need unique?
│  ├─ Yes → set
│  └─ No → multiset
└─ No → Need fast lookup?
   ├─ Yes → unordered_set/map
   └─ No → vector/deque
```

### **Performance Comparison:**

| Container         | Access | Insert   | Delete   | Search   | Use Case               |
| ----------------- | ------ | -------- | -------- | -------- | ---------------------- |
| vector            | O(1)   | O(n)     | O(n)     | O(n)     | Dynamic array          |
| deque             | O(1)   | O(1)\*   | O(1)\*   | O(n)     | Both ends              |
| list              | O(n)   | O(1)     | O(1)     | O(n)     | Frequent insert/delete |
| set/map           | -      | O(log n) | O(log n) | O(log n) | Sorted, unique         |
| unordered_set/map | -      | O(1)†    | O(1)†    | O(1)†    | Fast lookup            |
| stack             | O(1)   | O(1)     | O(1)     | -        | LIFO                   |
| queue             | O(1)   | O(1)     | O(1)     | -        | FIFO                   |
| priority_queue    | O(1)   | O(log n) | O(log n) | -        | Priority               |

\*At ends only  
†Average case

---

## 🔥 Must Remember

### **Key Concepts:**

1. **vector** - Dynamic array, use most often
2. **map/set** - Sorted, O(log n) operations
3. **unordered_map/set** - Hash table, O(1) average
4. **Iterators** - Connect containers and algorithms
5. **Algorithms** - sort, find, binary_search, etc.

### **Common Mistakes:**

- ❌ Using vector when unordered_set is better
- ❌ Not reserving vector capacity
- ❌ Modifying container while iterating
- ❌ Using map when unordered_map is sufficient
- ❌ Not checking iterator validity

### **Best Practices:**

- ✅ Use vector by default
- ✅ Use unordered_map for O(1) lookup
- ✅ Use set/map when order matters
- ✅ Reserve vector capacity if size known
- ✅ Use range-based for loops
- ✅ Prefer algorithms over manual loops

---

## 🎓 STL Complexity Cheat Sheet

### **Sequence Containers:**

```cpp
vector:  Access O(1), Insert O(n), Delete O(n)
deque:   Access O(1), Insert O(1)*, Delete O(1)*
list:    Access O(n), Insert O(1), Delete O(1)
```

### **Associative Containers:**

```cpp
set/map:           Insert O(log n), Search O(log n)
multiset/multimap: Insert O(log n), Search O(log n)
```

### **Unordered Containers:**

```cpp
unordered_set/map: Insert O(1)†, Search O(1)†
```

### **Container Adapters:**

```cpp
stack:          Push O(1), Pop O(1), Top O(1)
queue:          Push O(1), Pop O(1), Front O(1)
priority_queue: Push O(log n), Pop O(log n), Top O(1)
```

---

**Next:** [Arrays →](06-Arrays.md)
