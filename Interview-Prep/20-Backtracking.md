# 🔙 Backtracking - Quick Reference

**Try all possibilities!** 🎯

---

## 📋 What is Backtracking?

### **Definition:**

Backtracking is a systematic way to **try all possible solutions** by building candidates incrementally and **abandoning** them as soon as we determine they cannot lead to a valid solution.

### **Key Concepts:**

- **Choose** - Make a choice
- **Explore** - Recursively explore
- **Unchoose** - Undo the choice (backtrack)

### **When to Use:**

- Need to find **all solutions**
- Need to find **one solution** among many
- Constraints eliminate many possibilities
- Problem has **decision tree** structure

---

## 🎯 Backtracking Template

```cpp
void backtrack(state, choices, result) {
    // Base case
    if (isValidSolution(state)) {
        result.add(state);
        return;
    }

    // Try all choices
    for (choice in choices) {
        // 1. Choose
        makeChoice(state, choice);

        // 2. Explore
        backtrack(newState, newChoices, result);

        // 3. Unchoose (backtrack)
        undoChoice(state, choice);
    }
}
```

---

## 💡 Common Problems

### **1. Subsets:**

**Problem:** Generate all subsets of a set

**Theory:**

- For each element, we have 2 choices: include or exclude
- Decision tree has 2^n leaves
- Each path from root to leaf is a subset

```cpp
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;

    function<void(int)> backtrack = [&](int start) {
        // Add current subset
        result.push_back(current);

        // Try adding each remaining element
        for (int i = start; i < nums.size(); i++) {
            current.push_back(nums[i]);      // Choose
            backtrack(i + 1);                 // Explore
            current.pop_back();               // Unchoose
        }
    };

    backtrack(0);
    return result;
}
// Time: O(2^n), Space: O(n) for recursion
```

**Decision Tree:**

```
                    []
           /                  \
        [1]                    []
      /     \                /    \
   [1,2]   [1]            [2]     []
   /  \    /  \          /  \    /  \
[1,2,3][1,2][1,3][1]  [2,3][2] [3] []
```

---

### **2. Permutations:**

**Problem:** Generate all permutations

**Theory:**

- At each position, try all unused elements
- Use visited array to track used elements
- n! total permutations

```cpp
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    vector<bool> used(nums.size(), false);

    function<void()> backtrack = [&]() {
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            current.push_back(nums[i]);      // Choose
            used[i] = true;
            backtrack();                      // Explore
            current.pop_back();               // Unchoose
            used[i] = false;
        }
    };

    backtrack();
    return result;
}
// Time: O(n!), Space: O(n)
```

---

### **3. Combination Sum:**

**Problem:** Find all combinations that sum to target

**Theory:**

- Try including each candidate
- Subtract from target
- Backtrack if target becomes negative
- Can reuse elements (start from same index)

```cpp
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> result;
    vector<int> current;

    function<void(int, int)> backtrack = [&](int start, int remaining) {
        if (remaining == 0) {
            result.push_back(current);
            return;
        }
        if (remaining < 0) return;

        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);
            backtrack(i, remaining - candidates[i]);  // Can reuse
            current.pop_back();
        }
    };

    backtrack(0, target);
    return result;
}
```

---

### **4. N-Queens:**

**Problem:** Place N queens on N×N board

**Theory:**

- Place one queen per row
- Check if position is safe (no attacks)
- Backtrack if no safe position found

```cpp
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> result;
    vector<string> board(n, string(n, '.'));

    function<bool(int, int)> isSafe = [&](int row, int col) {
        // Check column
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') return false;
        }

        // Check diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') return false;
        }

        // Check anti-diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') return false;
        }

        return true;
    };

    function<void(int)> backtrack = [&](int row) {
        if (row == n) {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isSafe(row, col)) {
                board[row][col] = 'Q';        // Choose
                backtrack(row + 1);            // Explore
                board[row][col] = '.';         // Unchoose
            }
        }
    };

    backtrack(0);
    return result;
}
```

---

### **5. Word Search:**

**Problem:** Find if word exists in grid

**Theory:**

- Try all starting positions
- DFS in 4 directions
- Mark visited cells
- Backtrack by unmarking

```cpp
bool exist(vector<vector<char>>& board, string word) {
    int m = board.size(), n = board[0].size();

    function<bool(int, int, int)> backtrack = [&](int i, int j, int k) {
        if (k == word.length()) return true;
        if (i < 0 || i >= m || j < 0 || j >= n ||
            board[i][j] != word[k]) return false;

        char temp = board[i][j];
        board[i][j] = '#';  // Mark visited

        bool found = backtrack(i+1, j, k+1) ||
                     backtrack(i-1, j, k+1) ||
                     backtrack(i, j+1, k+1) ||
                     backtrack(i, j-1, k+1);

        board[i][j] = temp;  // Unmark (backtrack)
        return found;
    };

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (backtrack(i, j, 0)) return true;
        }
    }
    return false;
}
```

---

## 🔥 Backtracking Patterns

### **1. Subset/Combination:**

```cpp
void backtrack(start, current) {
    result.add(current);
    for (i = start; i < n; i++) {
        current.add(i);
        backtrack(i + 1, current);
        current.remove();
    }
}
```

### **2. Permutation:**

```cpp
void backtrack(current, used) {
    if (current.size() == n) {
        result.add(current);
        return;
    }
    for (i = 0; i < n; i++) {
        if (used[i]) continue;
        current.add(i);
        used[i] = true;
        backtrack(current, used);
        current.remove();
        used[i] = false;
    }
}
```

### **3. Grid Search:**

```cpp
bool backtrack(i, j, state) {
    if (isGoal(state)) return true;
    if (isInvalid(i, j)) return false;

    mark(i, j);
    for (direction in directions) {
        if (backtrack(newI, newJ, newState))
            return true;
    }
    unmark(i, j);
    return false;
}
```

---

## 🎯 Optimization Techniques

### **1. Pruning:**

```cpp
// Stop early if solution impossible
if (remaining < 0) return;  // Prune
```

### **2. Sorting:**

```cpp
// Sort to enable early termination
sort(candidates.begin(), candidates.end());
if (candidates[i] > remaining) break;
```

### **3. Memoization:**

```cpp
// Cache results for repeated states
if (memo.count(state)) return memo[state];
```

---

## 💡 When to Use Backtracking

### **Use Backtracking When:**

- ✅ Need **all solutions**
- ✅ Need **one solution** from many
- ✅ Problem has **constraints**
- ✅ Can **prune** search space
- ✅ Problem is **NP-complete**

### **Don't Use When:**

- ❌ Need **optimal solution** (use DP)
- ❌ Problem has **polynomial solution**
- ❌ Can't prune effectively
- ❌ State space too large

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Subsets:** O(2^n)
- **Permutations:** O(n!)
- **Combinations:** O(C(n,k))
- **N-Queens:** O(n!)

### **Space Complexity:**

- **Recursion stack:** O(depth)
- **Current path:** O(depth)
- **Result storage:** O(number of solutions)

---

## 🔥 Must Remember

### **Three Steps:**

1. **Choose** - Make a decision
2. **Explore** - Recurse with new state
3. **Unchoose** - Undo decision (backtrack)

### **Common Mistakes:**

- ❌ Forgetting to backtrack
- ❌ Not checking base case
- ❌ Not pruning invalid paths
- ❌ Modifying shared state incorrectly

---

**Next:** [Graph Algorithms →](21-Graph-Algorithms.md)
