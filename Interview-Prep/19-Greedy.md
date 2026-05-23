# 🎯 Greedy Algorithms - Quick Reference

**Make locally optimal choices!** 💪

---

## 📋 What is Greedy?

### **Definition:**

A greedy algorithm makes the **locally optimal choice** at each step, hoping to find a **global optimum**.

### **Key Characteristics:**

- Makes best choice at current moment
- Never reconsiders previous choices
- Doesn't always give optimal solution
- Fast and simple when it works

### **When to Use:**

- Problem has **optimal substructure**
- **Greedy choice property** holds
- Local optimum leads to global optimum

---

## 🎯 Greedy vs Dynamic Programming

| Greedy                      | Dynamic Programming    |
| --------------------------- | ---------------------- |
| Makes one choice at a time  | Considers all choices  |
| Never looks back            | Can reconsider         |
| Faster (usually O(n log n)) | Slower (usually O(n²)) |
| Not always optimal          | Always optimal         |
| Example: Activity Selection | Example: 0/1 Knapsack  |

---

## 💡 Common Problems

### **1. Activity Selection:**

**Problem:** Select maximum non-overlapping activities

**Theory:**

- Sort by end time
- Always pick activity that ends earliest
- This leaves maximum room for future activities

```cpp
int activitySelection(vector<pair<int,int>>& activities) {
    // Sort by end time
    sort(activities.begin(), activities.end(),
         [](auto& a, auto& b) { return a.second < b.second; });

    int count = 1;
    int lastEnd = activities[0].second;

    for (int i = 1; i < activities.size(); i++) {
        if (activities[i].first >= lastEnd) {
            count++;
            lastEnd = activities[i].second;
        }
    }

    return count;
}
// Time: O(n log n), Space: O(1)
```

**Why Greedy Works:**

- Activity ending earliest leaves most room
- Can't do better by choosing differently

---

### **2. Jump Game:**

**Problem:** Can you reach the last index?

**Theory:**

- Track maximum reachable position
- If current position > max reachable, return false
- Update max reachable at each step

```cpp
bool canJump(vector<int>& nums) {
    int maxReach = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (i > maxReach) return false;
        maxReach = max(maxReach, i + nums[i]);
        if (maxReach >= nums.size() - 1) return true;
    }

    return true;
}
// Time: O(n), Space: O(1)
```

**Greedy Choice:** Always try to reach as far as possible

---

### **3. Gas Station:**

**Problem:** Can complete circular route?

**Theory:**

- If total gas >= total cost, solution exists
- Start from station where we first run out
- This ensures we can complete the circuit

```cpp
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totalGas = 0, totalCost = 0;
    int tank = 0, start = 0;

    for (int i = 0; i < gas.size(); i++) {
        totalGas += gas[i];
        totalCost += cost[i];
        tank += gas[i] - cost[i];

        if (tank < 0) {
            start = i + 1;
            tank = 0;
        }
    }

    return totalGas >= totalCost ? start : -1;
}
```

**Why Greedy Works:**

- If we fail at station i, all stations before i can't be start
- Starting from i+1 is the greedy choice

---

### **4. Partition Labels:**

**Problem:** Partition string into maximum parts

**Theory:**

- Track last occurrence of each character
- Extend partition until we've seen all characters
- Start new partition after that

```cpp
vector<int> partitionLabels(string s) {
    vector<int> last(26);
    for (int i = 0; i < s.length(); i++) {
        last[s[i] - 'a'] = i;
    }

    vector<int> result;
    int start = 0, end = 0;

    for (int i = 0; i < s.length(); i++) {
        end = max(end, last[s[i] - 'a']);
        if (i == end) {
            result.push_back(end - start + 1);
            start = i + 1;
        }
    }

    return result;
}
```

---

## 🔥 Common Greedy Patterns

### **1. Interval Problems:**

- Sort by start/end time
- Merge or select intervals
- Examples: Meeting rooms, activity selection

### **2. Array Problems:**

- Sort first
- Make greedy choice
- Examples: Jump game, assign cookies

### **3. String Problems:**

- Character frequency
- Greedy construction
- Examples: Remove k digits, partition labels

### **4. Two Pointer:**

- Sort array
- Move pointers greedily
- Examples: Container with most water

---

## 🎯 How to Identify Greedy

### **Ask These Questions:**

1. **Can I make a local choice?**
   - Is there an obvious "best" choice at each step?

2. **Does local optimum lead to global optimum?**
   - Will greedy choices give correct answer?

3. **Can I prove it?**
   - Exchange argument
   - Contradiction
   - Induction

### **Red Flags (Use DP instead):**

- Need to consider all possibilities
- Future choices depend on past choices
- Problem asks for "all solutions"

---

## 💡 Proof Techniques

### **1. Exchange Argument:**

```
Assume optimal solution differs from greedy
Show we can exchange to get greedy solution
Prove exchange doesn't make solution worse
Therefore greedy is optimal
```

### **2. Greedy Stays Ahead:**

```
Show greedy solution is always "ahead"
At each step, greedy ≥ optimal
Therefore greedy reaches goal
```

---

## 🔥 Must Remember

### **Greedy Algorithm Steps:**

1. **Sort** (if needed)
2. **Initialize** result
3. **Iterate** through choices
4. **Make greedy choice** at each step
5. **Update** result

### **Common Mistakes:**

- ❌ Not sorting when needed
- ❌ Not proving greedy works
- ❌ Using greedy when DP needed
- ❌ Not considering edge cases

---

## 📊 Complexity

Most greedy algorithms:

- **Time:** O(n log n) due to sorting
- **Space:** O(1) or O(n)

---

**Next:** [Backtracking →](20-Backtracking.md)
