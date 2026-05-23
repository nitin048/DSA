# 🪟 Sliding Window - Quick Reference

**Slide a window through the array!** 🎯

---

## 📋 What is Sliding Window?

### **Definition:**

Sliding window is a technique where we maintain a **window** (subarray/substring) that slides through the data structure, expanding or contracting based on conditions.

### **Key Characteristics:**

- Reduces time from O(n²) to O(n)
- Window defined by two pointers (left, right)
- Window slides/expands/contracts based on condition
- Tracks state within window

### **When to Use:**

- Find **subarray/substring** with property
- **Contiguous** elements required
- Need **optimal** subarray (max/min length)
- Problem mentions "consecutive" or "contiguous"

---

## 🎯 Sliding Window Patterns

### **Pattern 1: Fixed Size Window**

Window size is constant, slide through array.

```
Size = 3
[1, 2, 3, 4, 5, 6]
 [-----]           Window 1
    [-----]        Window 2
       [-----]     Window 3
```

**Use Cases:**

- Maximum sum of k elements
- Average of subarrays of size k

---

### **Pattern 2: Dynamic Size Window**

Window size changes based on condition.

```
[1, 2, 3, 4, 5, 6]
 [--]              Expand
 [--------]        Expand more
    [-----]        Contract
```

**Use Cases:**

- Longest substring without repeating characters
- Minimum window substring
- Longest subarray with sum ≤ k

---

## 💡 Fixed Window Problems

### **1. Maximum Sum Subarray of Size K:**

**Problem:** Find maximum sum of k consecutive elements

**Theory:**

- Calculate sum of first k elements
- Slide window: add next element, remove first element
- Track maximum sum

```cpp
int maxSumSubarray(vector<int>& nums, int k) {
    if (nums.size() < k) return -1;

    // Calculate first window
    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }

    int maxSum = windowSum;

    // Slide window
    for (int i = k; i < nums.size(); i++) {
        windowSum += nums[i] - nums[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}
// Time: O(n), Space: O(1)
```

**Visualization:**

```
nums = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4

Window 1: [1, 4, 2, 10]     sum = 17
Window 2: [4, 2, 10, 23]    sum = 39  (add 23, remove 1)
Window 3: [2, 10, 23, 3]    sum = 38  (add 3, remove 4)
...
```

---

### **2. Average of Subarrays:**

**Problem:** Find average of all subarrays of size k

```cpp
vector<double> findAverages(vector<int>& nums, int k) {
    vector<double> result;
    double windowSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        windowSum += nums[i];

        if (i >= k - 1) {
            result.push_back(windowSum / k);
            windowSum -= nums[i - k + 1];
        }
    }

    return result;
}
// Time: O(n), Space: O(1)
```

---

## 💡 Dynamic Window Problems

### **1. Longest Substring Without Repeating Characters:**

**Problem:** Find length of longest substring with unique characters

**Theory:**

- Expand window by moving right pointer
- If duplicate found, contract from left
- Use hash set to track characters in window

```cpp
int lengthOfLongestSubstring(string s) {
    unordered_set<char> window;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        // Contract window until no duplicate
        while (window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }

        // Add current character
        window.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
// Time: O(n), Space: O(min(n, charset))
```

**Visualization:**

```
s = "abcabcbb"

left=0, right=0: "a"       len=1
left=0, right=1: "ab"      len=2
left=0, right=2: "abc"     len=3
left=0, right=3: "abca"    duplicate! contract
left=1, right=3: "bca"     len=3
left=1, right=4: "bcab"    duplicate! contract
left=2, right=4: "cab"     len=3
...
```

---

### **2. Minimum Window Substring:**

**Problem:** Find minimum window containing all characters of target

**Theory:**

- Expand window until all characters found
- Contract window while maintaining all characters
- Track character frequencies

```cpp
string minWindow(string s, string t) {
    if (s.empty() || t.empty()) return "";

    unordered_map<char, int> need, window;
    for (char c : t) need[c]++;

    int left = 0, right = 0;
    int valid = 0;  // Count of satisfied characters
    int start = 0, minLen = INT_MAX;

    while (right < s.length()) {
        // Expand window
        char c = s[right];
        right++;

        if (need.count(c)) {
            window[c]++;
            if (window[c] == need[c]) {
                valid++;
            }
        }

        // Contract window
        while (valid == need.size()) {
            // Update result
            if (right - left < minLen) {
                start = left;
                minLen = right - left;
            }

            char d = s[left];
            left++;

            if (need.count(d)) {
                if (window[d] == need[d]) {
                    valid--;
                }
                window[d]--;
            }
        }
    }

    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}
// Time: O(n + m), Space: O(n + m)
```

---

### **3. Longest Subarray with Sum ≤ K:**

**Problem:** Find longest subarray with sum at most k

**Theory:**

- Expand window by adding elements
- If sum > k, contract from left
- Track maximum length

```cpp
int longestSubarray(vector<int>& nums, int k) {
    int left = 0, sum = 0, maxLen = 0;

    for (int right = 0; right < nums.size(); right++) {
        sum += nums[right];

        // Contract window if sum exceeds k
        while (sum > k) {
            sum -= nums[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
// Time: O(n), Space: O(1)
```

---

### **4. Fruits Into Baskets:**

**Problem:** Pick maximum fruits with at most 2 types

**Theory:**

- Window can contain at most 2 types
- Expand window while condition satisfied
- Contract when 3rd type appears

```cpp
int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> basket;
    int left = 0, maxFruits = 0;

    for (int right = 0; right < fruits.size(); right++) {
        basket[fruits[right]]++;

        // Contract if more than 2 types
        while (basket.size() > 2) {
            basket[fruits[left]]--;
            if (basket[fruits[left]] == 0) {
                basket.erase(fruits[left]);
            }
            left++;
        }

        maxFruits = max(maxFruits, right - left + 1);
    }

    return maxFruits;
}
// Time: O(n), Space: O(1)
```

---

### **5. Longest Repeating Character Replacement:**

**Problem:** Longest substring with same character after k replacements

**Theory:**

- Window length - max frequency = replacements needed
- If replacements > k, contract window
- Track max frequency in window

```cpp
int characterReplacement(string s, int k) {
    unordered_map<char, int> count;
    int left = 0, maxCount = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        count[s[right]]++;
        maxCount = max(maxCount, count[s[right]]);

        // If replacements needed > k, contract
        while (right - left + 1 - maxCount > k) {
            count[s[left]]--;
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
// Time: O(n), Space: O(1)
```

---

## 🔥 Sliding Window Template

### **Fixed Size Window:**

```cpp
int fixedWindow(vector<int>& nums, int k) {
    int windowSum = 0, result = 0;

    for (int i = 0; i < nums.size(); i++) {
        windowSum += nums[i];

        if (i >= k - 1) {
            result = max(result, windowSum);
            windowSum -= nums[i - k + 1];
        }
    }

    return result;
}
```

### **Dynamic Size Window:**

```cpp
int dynamicWindow(vector<int>& nums, int k) {
    int left = 0, windowState = 0, result = 0;

    for (int right = 0; right < nums.size(); right++) {
        // Expand window
        windowState += nums[right];

        // Contract window if needed
        while (windowState > k) {
            windowState -= nums[left];
            left++;
        }

        // Update result
        result = max(result, right - left + 1);
    }

    return result;
}
```

---

## 🎯 How to Identify Sliding Window

### **Use Sliding Window When:**

✅ Problem mentions **subarray/substring**
✅ Need **contiguous** elements
✅ Find **optimal** length (max/min)
✅ Keywords: "consecutive", "contiguous", "window"
✅ Can maintain **window state** efficiently

### **Don't Use When:**

❌ Elements don't need to be contiguous
❌ Need to consider all subsequences
❌ Order can be rearranged

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Fixed window:** O(n)
- **Dynamic window:** O(n) - each element visited at most twice

### **Space Complexity:**

- **Without hash map:** O(1)
- **With hash map:** O(k) where k is window size or charset

---

## 🔥 Must Remember

### **Key Steps:**

1. **Initialize** window (left, right, state)
2. **Expand** window (move right)
3. **Update** window state
4. **Contract** window if needed (move left)
5. **Track** result

### **Common Mistakes:**

- ❌ Wrong window size calculation (right - left + 1)
- ❌ Not updating state when contracting
- ❌ Forgetting to update result
- ❌ Off-by-one errors

### **Tips:**

- ✅ Use hash map for character/element tracking
- ✅ Track window state (sum, count, frequency)
- ✅ Contract window in while loop
- ✅ Update result after each valid window

---

## 🎓 Problem Variations

### **By Window Type:**

- **Fixed size:** Max sum, average
- **Variable size:** Longest/shortest substring
- **At most K:** K distinct characters, K replacements

### **By Constraint:**

- **Unique elements:** Longest substring without repeating
- **K distinct:** Fruits into baskets
- **Sum constraint:** Subarray sum ≤ k
- **Frequency:** Character replacement

---

**Next:** [Fast & Slow Pointers →](25-Fast-Slow-Pointers.md)
