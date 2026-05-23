# 👉👈 Two Pointers - Quick Reference

**Use two pointers to solve in one pass!** 🎯

---

## 📋 What is Two Pointers?

### **Definition:**

Two pointers is a technique where we use **two indices** to traverse a data structure, typically moving them toward each other or in the same direction to solve problems efficiently.

### **Key Characteristics:**

- Reduces time complexity from O(n²) to O(n)
- Works on sorted or sequential data
- Pointers move based on conditions
- No extra space needed (usually)

### **When to Use:**

- Array/string is **sorted**
- Need to find **pairs** or **triplets**
- Need to **partition** array
- **Sliding window** problems

---

## 🎯 Two Pointer Patterns

### **Pattern 1: Opposite Direction (Converging)**

Pointers start at both ends and move toward each other.

```
[1, 2, 3, 4, 5, 6]
 ↑              ↑
left          right
```

**Use Cases:**

- Two sum in sorted array
- Container with most water
- Valid palindrome

---

### **Pattern 2: Same Direction (Fast & Slow)**

Both pointers move in same direction at different speeds.

```
[1, 2, 3, 4, 5, 6]
 ↑  ↑
slow fast
```

**Use Cases:**

- Remove duplicates
- Move zeros
- Linked list cycle detection

---

### **Pattern 3: Sliding Window**

Two pointers define a window that slides through array.

```
[1, 2, 3, 4, 5, 6]
    [-----]
    left  right
```

**Use Cases:**

- Maximum sum subarray
- Longest substring
- Minimum window

---

## 💡 Common Problems

### **1. Two Sum (Sorted Array):**

**Problem:** Find two numbers that sum to target

**Theory:**

- If sum < target, move left pointer right (increase sum)
- If sum > target, move right pointer left (decrease sum)
- If sum == target, found answer

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;   // Need larger sum
        } else {
            right--;  // Need smaller sum
        }
    }

    return {-1, -1};
}
// Time: O(n), Space: O(1)
```

**Why It Works:**

- Sorted array allows us to make decisions
- Moving pointers changes sum predictably

---

### **2. Container With Most Water:**

**Problem:** Find two lines that form container with maximum water

**Theory:**

- Area = min(height[left], height[right]) × width
- Always move pointer with smaller height
- Why? Larger height might give bigger area

```cpp
int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int width = right - left;
        int h = min(height[left], height[right]);
        maxWater = max(maxWater, width * h);

        // Move pointer with smaller height
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}
// Time: O(n), Space: O(1)
```

**Greedy Choice:** Move smaller height pointer

---

### **3. Remove Duplicates:**

**Problem:** Remove duplicates in-place from sorted array

**Theory:**

- Slow pointer tracks position for unique elements
- Fast pointer scans array
- Copy unique elements to slow pointer position

```cpp
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int slow = 0;  // Position for next unique element

    for (int fast = 1; fast < nums.size(); fast++) {
        if (nums[fast] != nums[slow]) {
            slow++;
            nums[slow] = nums[fast];
        }
    }

    return slow + 1;  // Length of unique array
}
// Time: O(n), Space: O(1)
```

**Visualization:**

```
[1, 1, 2, 2, 3]
 s  f              nums[f] == nums[s], skip

[1, 1, 2, 2, 3]
 s     f           nums[f] != nums[s], copy

[1, 2, 2, 2, 3]
    s     f        nums[f] == nums[s], skip

[1, 2, 3, 2, 3]
       s        f  nums[f] != nums[s], copy
```

---

### **4. Three Sum:**

**Problem:** Find all triplets that sum to zero

**Theory:**

- Fix first element
- Use two pointers for remaining two elements
- Skip duplicates to avoid duplicate triplets

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicates for first element
        if (i > 0 && nums[i] == nums[i-1]) continue;

        int left = i + 1, right = nums.size() - 1;
        int target = -nums[i];

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates
                while (left < right && nums[left] == nums[left+1]) left++;
                while (left < right && nums[right] == nums[right-1]) right--;

                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}
// Time: O(n²), Space: O(1)
```

---

### **5. Valid Palindrome:**

**Problem:** Check if string is palindrome

**Theory:**

- Compare characters from both ends
- Move pointers toward center
- Skip non-alphanumeric characters

```cpp
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // Compare characters
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
// Time: O(n), Space: O(1)
```

---

### **6. Move Zeros:**

**Problem:** Move all zeros to end, maintain order

**Theory:**

- Slow pointer tracks position for non-zero elements
- Fast pointer scans array
- Swap non-zero elements to front

```cpp
void moveZeroes(vector<int>& nums) {
    int slow = 0;  // Position for next non-zero

    for (int fast = 0; fast < nums.size(); fast++) {
        if (nums[fast] != 0) {
            swap(nums[slow], nums[fast]);
            slow++;
        }
    }
}
// Time: O(n), Space: O(1)
```

---

### **7. Trapping Rain Water:**

**Problem:** Calculate trapped water between bars

**Theory:**

- Water at position = min(max_left, max_right) - height
- Use two pointers to track max heights from both sides
- Move pointer with smaller max height

```cpp
int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                water += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                water += rightMax - height[right];
            }
            right--;
        }
    }

    return water;
}
// Time: O(n), Space: O(1)
```

---

## 🔥 Two Pointer Strategies

### **1. When to Move Which Pointer:**

**Opposite Direction:**

- Move based on comparison with target
- Move pointer that improves solution

**Same Direction:**

- Fast pointer explores
- Slow pointer builds result

### **2. Handling Duplicates:**

```cpp
// Skip duplicates
while (left < right && nums[left] == nums[left+1]) left++;
while (left < right && nums[right] == nums[right-1]) right--;
```

### **3. Boundary Conditions:**

```cpp
// Always check bounds
while (left < right) {  // Not left <= right
    // Process
}
```

---

## 🎯 How to Identify Two Pointers

### **Use Two Pointers When:**

✅ Array/string is **sorted**
✅ Need to find **pairs/triplets**
✅ Need **O(n) time** instead of O(n²)
✅ Can make **decisions** based on comparisons
✅ Need to **partition** array

### **Don't Use When:**

❌ Need to track **all elements** (use hash map)
❌ Order doesn't matter
❌ Need **random access**

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Single pass:** O(n)
- **With outer loop:** O(n²)
- **With sorting:** O(n log n)

### **Space Complexity:**

- Usually **O(1)** (in-place)
- Sometimes **O(n)** for result

---

## 🔥 Must Remember

### **Key Patterns:**

1. **Opposite direction** - Two sum, palindrome
2. **Same direction** - Remove duplicates, move zeros
3. **Sliding window** - Subarray problems

### **Common Mistakes:**

- ❌ Wrong boundary condition (left <= right vs left < right)
- ❌ Not handling duplicates
- ❌ Moving wrong pointer
- ❌ Not checking bounds

### **Tips:**

- ✅ Draw diagram to visualize
- ✅ Test with small examples
- ✅ Consider edge cases (empty, single element)
- ✅ Think about which pointer to move

---

**Next:** [Sliding Window →](24-Sliding-Window.md)
