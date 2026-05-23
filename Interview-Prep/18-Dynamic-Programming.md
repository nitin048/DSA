# 💎 Dynamic Programming - Quick Reference

**Optimize recursion!** 🎯

---

## 📋 What is Dynamic Programming?

### **Definition:**

Dynamic Programming (DP) is an optimization technique that solves complex problems by **breaking them down into simpler subproblems** and **storing their solutions** to avoid redundant calculations.

### **Key Concepts:**

1. **Overlapping Subproblems** - Same subproblems solved multiple times
2. **Optimal Substructure** - Optimal solution contains optimal solutions to subproblems
3. **Memoization** - Store results (Top-Down)
4. **Tabulation** - Build table iteratively (Bottom-Up)

### **When to Use:**

- Problem has **overlapping subproblems**
- Problem has **optimal substructure**
- Need **optimal solution** (not just any solution)
- Keywords: "maximum", "minimum", "longest", "shortest", "count ways"

---

## 🎯 DP vs Recursion vs Greedy

### **Comparison:**

| Approach  | Time          | Space | Use Case                |
| --------- | ------------- | ----- | ----------------------- |
| Recursion | O(2^n)        | O(n)  | Simple, small inputs    |
| DP        | O(n) or O(n²) | O(n)  | Optimal solution needed |
| Greedy    | O(n log n)    | O(1)  | Local optimum = global  |

### **Example - Fibonacci:**

```cpp
// Pure Recursion - O(2^n)
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

// DP Memoization - O(n)
int fib(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}

// DP Tabulation - O(n)
int fib(int n) {
    if (n <= 1) return n;
    vector<int> dp(n+1);
    dp[0] = 0; dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// Space Optimized - O(1)
int fib(int n) {
    if (n <= 1) return n;
    int prev2 = 0, prev1 = 1;
    for (int i = 2; i <= n; i++) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
```

---

## 🎯 DP Approaches

### **1. Top-Down (Memoization):**

**Theory:**

- Start from original problem
- Recursively break down
- Store results in memo
- Check memo before computing

```cpp
int solve(int n, vector<int>& memo) {
    // Base case
    if (n == 0) return base;

    // Check memo
    if (memo[n] != -1) return memo[n];

    // Compute and store
    memo[n] = /* recursive formula */;
    return memo[n];
}
```

**Pros:**

- ✅ Intuitive (follows recursion)
- ✅ Only computes needed subproblems
- ✅ Easy to convert from recursion

**Cons:**

- ❌ Recursion overhead
- ❌ Stack space O(n)

---

### **2. Bottom-Up (Tabulation):**

**Theory:**

- Start from base cases
- Build up to final solution
- Fill DP table iteratively
- No recursion needed

```cpp
int solve(int n) {
    vector<int> dp(n+1);

    // Base cases
    dp[0] = base;

    // Fill table
    for (int i = 1; i <= n; i++) {
        dp[i] = /* formula using dp[i-1], etc */;
    }

    return dp[n];
}
```

**Pros:**

- ✅ No recursion overhead
- ✅ Better space optimization possible
- ✅ Faster in practice

**Cons:**

- ❌ Computes all subproblems
- ❌ Less intuitive initially

---

## 📋 DP Approach Steps

### **Step-by-Step Process:**

1. **Define State** - What does dp[i] represent?
2. **Find Recurrence** - How to compute dp[i] from previous states?
3. **Base Cases** - What are the initial values?
4. **Order of Computation** - Which order to fill table?
5. **Final Answer** - Where is the answer stored?

### **Example - Climbing Stairs:**

```
Problem: Climb n stairs, 1 or 2 steps at a time. Count ways.

1. State: dp[i] = ways to reach step i
2. Recurrence: dp[i] = dp[i-1] + dp[i-2]
   (from step i-1 take 1 step, or from i-2 take 2 steps)
3. Base: dp[0] = 1, dp[1] = 1
4. Order: i from 2 to n
5. Answer: dp[n]
```

---

## 📋 DP Approach (Detailed)

### **Steps:**

1. Define state (dp[i] means what?)
2. Find recurrence relation
3. Initialize base cases
4. Fill DP table
5. Return answer

---

## 💡 Common Problems

### **1. Climbing Stairs:**

```cpp
int climbStairs(int n) {
    if (n <= 2) return n;

    vector<int> dp(n + 1);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}
// Time: O(n), Space: O(n)
```

### **2. House Robber:**

```cpp
int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];

    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
    }

    return dp[n-1];
}
```

### **3. Coin Change:**

```cpp
int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (i >= coin) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[amount] > amount ? -1 : dp[amount];
}
```

### **4. Longest Increasing Subsequence:**

```cpp
int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}
```

### **5. 0/1 Knapsack:**

```cpp
int knapsack(vector<int>& weights, vector<int>& values, int W) {
    int n = weights.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (weights[i-1] <= w) {
                dp[i][w] = max(dp[i-1][w],
                              dp[i-1][w - weights[i-1]] + values[i-1]);
            } else {
                dp[i][w] = dp[i-1][w];
            }
        }
    }

    return dp[n][W];
}
```

### **6. Longest Common Subsequence:**

```cpp
int longestCommonSubsequence(string text1, string text2) {
    int m = text1.length(), n = text2.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (text1[i-1] == text2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}
// Time: O(m*n), Space: O(m*n)
```

### **7. Edit Distance:**

```cpp
int minDistance(string word1, string word2) {
    int m = word1.length(), n = word2.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1));

    // Base cases
    for (int i = 0; i <= m; i++) dp[i][0] = i;
    for (int j = 0; j <= n; j++) dp[0][j] = j;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (word1[i-1] == word2[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min({dp[i-1][j],    // Delete
                                    dp[i][j-1],    // Insert
                                    dp[i-1][j-1]}); // Replace
            }
        }
    }

    return dp[m][n];
}
```

---

## 🔥 DP Patterns

### **Pattern 1: 1D DP (Linear)**

**Use When:** State depends on previous few states

```cpp
// Template
vector<int> dp(n+1);
dp[0] = base;
for (int i = 1; i <= n; i++) {
    dp[i] = f(dp[i-1], dp[i-2], ...);
}
```

**Examples:**

- Fibonacci
- Climbing Stairs
- House Robber
- Decode Ways

---

### **Pattern 2: 2D DP (Grid)**

**Use When:** Two parameters define state

```cpp
// Template
vector<vector<int>> dp(m+1, vector<int>(n+1));
// Initialize base cases
for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
        dp[i][j] = f(dp[i-1][j], dp[i][j-1], ...);
    }
}
```

**Examples:**

- Longest Common Subsequence
- Edit Distance
- Unique Paths
- 0/1 Knapsack

---

### **Pattern 3: State Machine DP**

**Use When:** Multiple states at each position

```cpp
// Template
vector<vector<int>> dp(n, vector<int>(states));
for (int i = 0; i < n; i++) {
    for (int state = 0; state < states; state++) {
        // Transition between states
        dp[i][state] = max(dp[i-1][prevState] + ...);
    }
}
```

**Examples:**

- Best Time to Buy/Sell Stock
- Paint House
- Maximum Alternating Subsequence

---

### **Pattern 4: Interval DP**

**Use When:** Problem involves intervals/subarrays

```cpp
// Template
vector<vector<int>> dp(n, vector<int>(n));
for (int len = 2; len <= n; len++) {
    for (int i = 0; i + len <= n; i++) {
        int j = i + len - 1;
        dp[i][j] = f(dp[i][k], dp[k+1][j]);
    }
}
```

**Examples:**

- Palindrome Partitioning
- Burst Balloons
- Matrix Chain Multiplication

---

## 🎯 How to Identify DP

### **Use DP When:**

✅ Problem asks for **optimal** solution (max/min)
✅ Problem asks to **count** ways
✅ Has **overlapping subproblems**
✅ Has **optimal substructure**
✅ Keywords: "maximum", "minimum", "longest", "shortest", "count"

### **Don't Use When:**

❌ Need **all solutions** (use backtracking)
❌ Greedy works (local optimum = global)
❌ No overlapping subproblems
❌ Simple recursion sufficient

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **1D DP:** O(n) typically
- **2D DP:** O(n²) or O(m×n)
- **With optimization:** Can reduce by factor

### **Space Complexity:**

- **Full table:** O(n) or O(n²)
- **Space optimized:** Often O(1) or O(n)

### **Space Optimization:**

```cpp
// 2D DP - O(n²) space
vector<vector<int>> dp(n, vector<int>(n));

// Optimized - O(n) space
vector<int> prev(n), curr(n);
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        curr[j] = f(prev[j], curr[j-1]);
    }
    prev = curr;
}
```

---

## 🔥 Must Remember

### **Key Steps:**

1. **Identify** if DP is applicable
2. **Define** state clearly
3. **Find** recurrence relation
4. **Initialize** base cases
5. **Determine** order of computation
6. **Optimize** space if possible

### **Common Mistakes:**

- ❌ Wrong state definition
- ❌ Missing base cases
- ❌ Wrong order of computation
- ❌ Not considering all transitions

### **Tips:**

- ✅ Start with recursive solution
- ✅ Add memoization (top-down)
- ✅ Convert to tabulation (bottom-up)
- ✅ Optimize space
- ✅ Draw DP table to visualize

---

## 🎓 DP Problem Categories

### **1. Linear DP:**

- Climbing Stairs
- House Robber
- Decode Ways
- Maximum Subarray

### **2. String DP:**

- Longest Common Subsequence
- Edit Distance
- Palindrome Partitioning
- Word Break

### **3. Grid DP:**

- Unique Paths
- Minimum Path Sum
- Dungeon Game

### **4. Knapsack:**

- 0/1 Knapsack
- Unbounded Knapsack
- Partition Equal Subset Sum
- Target Sum

### **5. Stock Problems:**

- Best Time to Buy/Sell Stock (all variations)
- Maximum Profit with Cooldown

---

## 🔥 DP Optimization Techniques

### **1. Space Optimization:**

```cpp
// From O(n) to O(1)
// Instead of: vector<int> dp(n);
int prev2 = dp[0], prev1 = dp[1];
for (int i = 2; i < n; i++) {
    int curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
}
```

### **2. Rolling Array:**

```cpp
// From O(m*n) to O(n)
vector<int> prev(n), curr(n);
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        curr[j] = f(prev[j], curr[j-1]);
    }
    swap(prev, curr);
}
```

### **3. State Compression:**

```cpp
// Use bitmask for states
// Instead of: dp[i][state1][state2][state3]
// Use: dp[i][mask] where mask encodes all states
```

---

**Next:** [Greedy →](19-Greedy.md)
