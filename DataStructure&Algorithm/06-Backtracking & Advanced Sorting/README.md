# 🔄 Backtracking & Advanced Sorting

## 📚 Complete Section Overview

This section contains **12 comprehensive lectures** covering backtracking techniques, advanced sorting algorithms, and complex problem-solving.

---

## 📂 Folder Structure

### **37. Recursion Part 3 : Backtracking in Detail | Print all Subsets**

- Backtracking fundamentals
- Print all subsets
- Subsets II (with duplicates)
- Decision tree approach
- Time complexity analysis

### **38. Permutations of an Array/String**

- Permutation generation
- Swap technique
- Backtracking approach
- Avoiding duplicates
- Leetcode 46 & 47

### **39. N-Queens Problem | Backtracking**

- N-Queens placement
- Constraint checking
- Backtracking solution
- Optimization techniques
- Leetcode Hard

### **40. Sudoku Solver Problem | Backtracking**

- Sudoku validation
- Backtracking approach
- Constraint propagation
- Optimal solution
- Leetcode Hard

### **41. Rat in a Maze Problem**

- Maze navigation
- Path finding
- Backtracking technique
- All possible paths
- Classic problem

### **42. Combination Sum Problem**

- Combination generation
- Target sum finding
- Backtracking with pruning
- Avoiding duplicates
- Leetcode 39 & 40

### **43. Palindrome Partitioning Problem**

- String partitioning
- Palindrome checking
- Backtracking approach
- All valid partitions
- Leetcode 131

### **44. Merge Sort Algorithm**

- Divide and conquer
- Merge operation
- Recursive implementation
- Stability analysis
- O(n log n) guaranteed

### **45. One Major update & reaching 1000M views**

- Course milestone
- Updates and announcements
- Community achievements

### **46. Quick Sort Algorithm**

- Partition technique
- Pivot selection
- In-place sorting
- Average O(n log n)
- Randomized Quick Sort

### **47. Count Inversions Problem**

- Inversion counting
- Brute force O(n²)
- Optimal using Merge Sort
- Modified merge sort
- O(n log n) solution

### **48. KNIGHTS TOUR Problem - Backtracking**

- Knight's movement
- Chessboard traversal
- Backtracking solution
- Warnsdorff's heuristic
- Leetcode 2596

---

## 🎯 Key Concepts Covered

### **Backtracking:**

✅ Backtracking fundamentals  
✅ Subsets & Permutations  
✅ N-Queens problem  
✅ Sudoku Solver  
✅ Maze problems  
✅ Combination Sum  
✅ Palindrome Partitioning  
✅ Knights Tour

### **Advanced Sorting:**

✅ Merge Sort (Divide & Conquer)  
✅ Quick Sort (Partition)  
✅ Count Inversions  
✅ Stability in sorting  
✅ Time complexity analysis

---

## 📊 Progress Tracker

- [ ] 37. Backtracking in Detail | Subsets
- [ ] 38. Permutations | Backtracking
- [ ] 39. N-Queens Problem
- [ ] 40. Sudoku Solver
- [ ] 41. Rat in a Maze
- [ ] 42. Combination Sum
- [ ] 43. Palindrome Partitioning
- [ ] 44. Merge Sort Algorithm
- [ ] 45. Major Update (Milestone)
- [ ] 46. Quick Sort Algorithm
- [ ] 47. Count Inversions
- [ ] 48. Knights Tour Problem

**Progress: 0/12 completed** 🎯

---

## 📝 Practice Problems

### **Backtracking (Hard):**

- Subsets I & II
- Permutations I & II
- N-Queens (Leetcode 51)
- Sudoku Solver (Leetcode 37)
- Rat in a Maze
- Combination Sum I & II
- Palindrome Partitioning (Leetcode 131)
- Knights Tour (Leetcode 2596)

### **Sorting:**

- Implement Merge Sort
- Implement Quick Sort
- Count Inversions

---

## 💡 Important Algorithms

### **1. Backtracking Template:**

```cpp
void backtrack(vector<int>& current, /* other params */) {
    // Base case - found solution
    if (isValidSolution(current)) {
        result.push_back(current);
        return;
    }

    // Try all possible choices
    for (int choice : getAllChoices()) {
        // Make choice
        current.push_back(choice);

        // Recurse
        backtrack(current, /* params */);

        // Undo choice (backtrack)
        current.pop_back();
    }
}
```

### **2. Subsets (Backtracking):**

```cpp
void findSubsets(vector<int>& nums, int index, vector<int>& current,
                 vector<vector<int>>& result) {
    // Add current subset
    result.push_back(current);

    // Try adding each remaining element
    for (int i = index; i < nums.size(); i++) {
        current.push_back(nums[i]);
        findSubsets(nums, i + 1, current, result);
        current.pop_back();
    }
}
// Time: O(2^n), Space: O(n)
```

### **3. Permutations (Backtracking):**

```cpp
void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); // backtrack
    }
}
// Time: O(n!), Space: O(n)
```

### **4. N-Queens:**

```cpp
bool isSafe(vector<string>& board, int row, int col, int n) {
    // Check column
    for (int i = 0; i < row; i++)
        if (board[i][col] == 'Q') return false;

    // Check diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q') return false;

    // Check anti-diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q') return false;

    return true;
}

void solveNQueens(vector<string>& board, int row, int n,
                  vector<vector<string>>& result) {
    if (row == n) {
        result.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            solveNQueens(board, row + 1, n, result);
            board[row][col] = '.'; // backtrack
        }
    }
}
// Time: O(n!), Space: O(n²)
```

### **5. Merge Sort:**

```cpp
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int i = 0; i < temp.size(); i++)
        arr[left + i] = temp[i];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
// Time: O(n log n), Space: O(n)
```

### **6. Quick Sort:**

```cpp
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
// Time: O(n log n) average, O(n²) worst, Space: O(log n)
```

### **7. Count Inversions (Using Merge Sort):**

```cpp
int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid + 1, count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            count += (mid - i + 1); // Count inversions
        }
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    for (int i = 0; i < temp.size(); i++)
        arr[left + i] = temp[i];

    return count;
}

int mergeSortAndCount(vector<int>& arr, int left, int right) {
    int count = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        count += mergeSortAndCount(arr, left, mid);
        count += mergeSortAndCount(arr, mid + 1, right);
        count += mergeAndCount(arr, left, mid, right);
    }
    return count;
}
// Time: O(n log n), Space: O(n)
```

---

## 🎓 Learning Path

### **Phase 1: Backtracking Fundamentals (Lectures 37-43)**

1. Understand backtracking concept
2. Practice subsets generation
3. Master permutations
4. Solve N-Queens
5. Implement Sudoku Solver
6. Practice maze problems
7. Solve combination problems

### **Phase 2: Advanced Sorting (Lectures 44, 46-47)**

8. Master Merge Sort
9. Implement Quick Sort
10. Solve Count Inversions
11. Compare sorting algorithms

### **Phase 3: Advanced Backtracking (Lecture 48)**

12. Knights Tour problem
13. Complex backtracking scenarios

---

## 📈 Complexity Analysis

### **Backtracking Problems:**

| Problem         | Time Complexity      | Space Complexity |
| --------------- | -------------------- | ---------------- |
| Subsets         | O(2^n)               | O(n)             |
| Permutations    | O(n!)                | O(n)             |
| N-Queens        | O(n!)                | O(n²)            |
| Sudoku Solver   | O(9^m) m=empty cells | O(1)             |
| Combination Sum | O(2^n)               | O(n)             |

### **Sorting Algorithms:**

| Algorithm  | Best       | Average    | Worst      | Space    | Stable |
| ---------- | ---------- | ---------- | ---------- | -------- | ------ |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n)     | Yes    |
| Quick Sort | O(n log n) | O(n log n) | O(n²)      | O(log n) | No     |

---

## 🔥 Pro Tips

### **Backtracking:**

- Always define base case clearly
- Make choice → Recurse → Undo choice
- Use pruning to optimize
- Draw decision tree for understanding
- Track visited states to avoid cycles

### **Sorting:**

- Merge Sort: Stable, guaranteed O(n log n)
- Quick Sort: In-place, average O(n log n)
- Use randomized pivot for Quick Sort
- Merge Sort better for linked lists
- Quick Sort better for arrays

---

## 🚀 Backtracking Decision Tree

```
Example: Subsets of [1,2,3]

                    []
           /         |         \
         [1]        [2]        [3]
        /   \        |
     [1,2] [1,3]   [2,3]
       |
    [1,2,3]

All paths from root to any node = All subsets
```

---

## 💡 When to Use Backtracking?

✅ Generate all possible solutions  
✅ Find all combinations/permutations  
✅ Constraint satisfaction problems  
✅ Puzzle solving (Sudoku, N-Queens)  
✅ Path finding with constraints

❌ When greedy works  
❌ When DP is more efficient  
❌ When simple iteration suffices

---

## 🎯 Interview Tips

### **For Backtracking:**

1. Draw decision tree
2. Identify choices at each step
3. Define base case
4. Explain backtracking step
5. Discuss time complexity (often exponential)

### **For Sorting:**

1. Know all sorting algorithms
2. Explain stability concept
3. Discuss space complexity
4. Compare different approaches
5. Mention real-world applications

---

**Happy Learning! 🎉✨**
