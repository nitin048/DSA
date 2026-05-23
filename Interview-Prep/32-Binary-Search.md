# 🔍 Binary Search - Quick Reference

**Binary search with a twist!** 🎯

---

## 📋 What is Binary Search?

### **Definition:**

Binary Search applies the **binary search principle** to problems beyond simple sorted array search, including rotated arrays, search space problems, and finding boundaries.

### **Key Characteristics:**

- O(log n) time complexity
- Works on **monotonic** search space
- Eliminates half of search space each iteration
- Can work on **implicit** arrays

### **When to Use:**

- Array is **sorted** (or partially sorted)
- Search space is **monotonic**
- Need **O(log n)** solution
- Keywords: "sorted", "rotated", "search", "find"

---

## 🎯 Binary Search Basics

### **Standard Binary Search:**

```cpp
int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
// Time: O(log n), Space: O(1)
```

### **Key Points:**

- `mid = left + (right - left) / 2` prevents overflow
- `left <= right` for exact match
- `left < right` for finding boundaries

---

## 💡 Rotated Array Problems

### **1. Search in Rotated Sorted Array:**

**Problem:** Find target in rotated sorted array

**Theory:**

- One half is always sorted
- Check which half is sorted
- Determine if target is in sorted half

```cpp
int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        // Left half is sorted
        if (nums[left] <= nums[mid]) {
            // Target in left half
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        // Right half is sorted
        else {
            // Target in right half
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;
}
// Time: O(log n), Space: O(1)
```

**Visualization:**

```
Array: [4, 5, 6, 7, 0, 1, 2]
        L        M        R

Left half [4,5,6,7] is sorted
Right half [0,1,2] is sorted (but smaller)

If target = 0:
- Not in left sorted half [4,7]
- Must be in right half
```

---

### **2. Find Minimum in Rotated Array:**

**Problem:** Find minimum element in rotated sorted array

**Theory:**

- Minimum is at rotation point
- If mid > right, minimum is in right half
- Otherwise, minimum is in left half (including mid)

```cpp
int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Minimum is in right half
        if (nums[mid] > nums[right]) {
            left = mid + 1;
        }
        // Minimum is in left half (including mid)
        else {
            right = mid;
        }
    }

    return nums[left];
}
// Time: O(log n), Space: O(1)
```

---

## 💡 Finding Boundaries

### **3. First and Last Position:**

**Problem:** Find first and last position of target

**Theory:**

- Use binary search twice
- First search: find leftmost position
- Second search: find rightmost position

```cpp
vector<int> searchRange(vector<int>& nums, int target) {
    auto findLeft = [&]() {
        int left = 0, right = nums.size() - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                result = mid;
                right = mid - 1;  // Continue searching left
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    };

    auto findRight = [&]() {
        int left = 0, right = nums.size() - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                result = mid;
                left = mid + 1;  // Continue searching right
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    };

    return {findLeft(), findRight()};
}
// Time: O(log n), Space: O(1)
```

---

### **4. Search Insert Position:**

**Problem:** Find index where target should be inserted

**Theory:**

- Standard binary search
- If not found, left pointer is insert position

```cpp
int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;  // Insert position
}
// Time: O(log n), Space: O(1)
```

---

## 💡 Search Space Problems

### **5. Find Peak Element:**

**Problem:** Find any peak element (greater than neighbors)

**Theory:**

- If mid < mid+1, peak is in right half
- Otherwise, peak is in left half (including mid)

```cpp
int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Peak is in right half
        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        }
        // Peak is in left half (including mid)
        else {
            right = mid;
        }
    }

    return left;
}
// Time: O(log n), Space: O(1)
```

---

### **6. Square Root:**

**Problem:** Find integer square root

**Theory:**

- Search space: [0, x]
- Find largest number whose square ≤ x

```cpp
int mySqrt(int x) {
    if (x < 2) return x;

    long left = 1, right = x / 2;

    while (left <= right) {
        long mid = left + (right - left) / 2;
        long square = mid * mid;

        if (square == x) {
            return mid;
        } else if (square < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return right;  // Largest number with square ≤ x
}
// Time: O(log n), Space: O(1)
```

---

### **7. Capacity to Ship Packages:**

**Problem:** Find minimum capacity to ship within D days

**Theory:**

- Search space: [max(weights), sum(weights)]
- Binary search on capacity
- Check if capacity works in D days

```cpp
int shipWithinDays(vector<int>& weights, int days) {
    auto canShip = [&](int capacity) {
        int daysNeeded = 1, currentLoad = 0;

        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                daysNeeded++;
                currentLoad = 0;
            }
            currentLoad += weight;
        }

        return daysNeeded <= days;
    };

    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (canShip(mid)) {
            right = mid;  // Try smaller capacity
        } else {
            left = mid + 1;  // Need larger capacity
        }
    }

    return left;
}
// Time: O(n log(sum)), Space: O(1)
```

---

### **8. Koko Eating Bananas:**

**Problem:** Find minimum eating speed to finish in H hours

**Theory:**

- Search space: [1, max(piles)]
- Binary search on speed
- Check if speed works in H hours

```cpp
int minEatingSpeed(vector<int>& piles, int h) {
    auto canFinish = [&](int speed) {
        long hours = 0;
        for (int pile : piles) {
            hours += (pile + speed - 1) / speed;  // Ceiling division
        }
        return hours <= h;
    };

    int left = 1;
    int right = *max_element(piles.begin(), piles.end());

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (canFinish(mid)) {
            right = mid;  // Try slower speed
        } else {
            left = mid + 1;  // Need faster speed
        }
    }

    return left;
}
// Time: O(n log m), Space: O(1)
```

---

## 💡 2D Matrix Search

### **9. Search 2D Matrix:**

**Problem:** Search in row and column sorted matrix

**Theory:**

- Treat as 1D sorted array
- Convert index: row = mid / cols, col = mid % cols

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty()) return false;

    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / n][mid % n];

        if (midValue == target) {
            return true;
        } else if (midValue < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}
// Time: O(log(m*n)), Space: O(1)
```

---

### **10. Search 2D Matrix II:**

**Problem:** Search in matrix sorted row-wise and column-wise

**Theory:**

- Start from top-right or bottom-left
- Eliminate row or column each step

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty()) return false;

    int row = 0, col = matrix[0].size() - 1;

    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            col--;  // Eliminate column
        } else {
            row++;  // Eliminate row
        }
    }

    return false;
}
// Time: O(m + n), Space: O(1)
```

---

## 🔥 Binary Search Templates

### **Template 1: Exact Match**

```cpp
int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}
```

### **Template 2: Find Boundary**

```cpp
int findBoundary(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (condition(mid)) {
            right = mid;  // Boundary in left half
        } else {
            left = mid + 1;  // Boundary in right half
        }
    }

    return left;
}
```

### **Template 3: Search Space**

```cpp
int searchSpace(int minVal, int maxVal) {
    int left = minVal, right = maxVal;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (isValid(mid)) {
            right = mid;  // Try smaller value
        } else {
            left = mid + 1;  // Need larger value
        }
    }

    return left;
}
```

---

## 🎯 How to Identify Binary Search

### **Use Binary Search When:**

✅ Array is **sorted** (or rotated)
✅ Search space is **monotonic**
✅ Can **eliminate half** each step
✅ Need **O(log n)** solution
✅ Keywords: "sorted", "search", "find"

### **Don't Use When:**

❌ Array is unsorted and can't be sorted
❌ Need to check all elements
❌ Search space is not monotonic

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Standard:** O(log n)
- **With validation:** O(n log m) where m is search space

### **Space Complexity:**

- **Iterative:** O(1)
- **Recursive:** O(log n) for call stack

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Prevent overflow:** `mid = left + (right - left) / 2`
2. **Exact match:** `left <= right`
3. **Find boundary:** `left < right`
4. **Search space:** Can be implicit (not actual array)

### **Common Mistakes:**

- ❌ Integer overflow in mid calculation
- ❌ Wrong loop condition (< vs <=)
- ❌ Not updating left/right correctly
- ❌ Off-by-one errors

### **Tips:**

- ✅ Draw search space diagram
- ✅ Test with small examples
- ✅ Check boundary conditions
- ✅ Verify loop invariants

---

## 🎓 Advanced Patterns

### **Pattern 1: Rotated Array**

- Identify sorted half
- Check if target in sorted half

### **Pattern 2: Find Boundary**

- Use `left < right`
- Return `left` or `right`

### **Pattern 3: Search Space**

- Define min and max
- Binary search on answer
- Validate with helper function

### **Pattern 4: 2D Matrix**

- Treat as 1D array
- Or start from corner

---

**Next:** [Common Questions →](34-Common-Questions.md)
