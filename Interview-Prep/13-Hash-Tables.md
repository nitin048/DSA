# 🗂️ Hash Tables - Quick Reference

**O(1) lookups!** 🎯

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
