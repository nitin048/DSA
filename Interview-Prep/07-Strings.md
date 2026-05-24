# 📝 Strings - Quick Reference

**String manipulation for interviews!** 🎯

---

## 📋 What is a String?

### **Definition:**

A string is a **sequence of characters** stored in contiguous memory. In C++, strings can be represented as **character arrays** (C-style) or **std::string** objects.

### **Key Characteristics:**

- **Mutable in C++** - Can modify characters
- **Null-terminated** - C-style strings end with '\0'
- **Dynamic size** - std::string can grow/shrink
- **Character access** - O(1) by index
- **Rich operations** - Many built-in methods

### **Memory Layout:**

```
string s = "HELLO";

C-style (char[]):
┌───┬───┬───┬───┬───┬────┐
│ H │ E │ L │ L │ O │ \0 │
└───┴───┴───┴───┴───┴────┘
 0   1   2   3   4   5

std::string (simplified):
┌─────────┬──────┬──────────┐
│ pointer │ size │ capacity │
└─────────┴──────┴──────────┘
     ↓
  [H][E][L][L][O]
```

### **Why Use Strings?**

- ✅ **Text processing** - Natural for text data
- ✅ **Pattern matching** - Search, replace
- ✅ **Parsing** - Extract information
- ✅ **Communication** - User I/O
- ✅ **Data representation** - JSON, XML

---

## 📋 String Basics

### **Declaration:**

```cpp
string s = "hello";
string s(5, 'a');        // "aaaaa"
char arr[] = "hello";
```

### **Common Operations:**

```cpp
s.length();              // O(1)
s.size();                // O(1)
s.empty();               // O(1)
s.clear();               // O(n)
s.push_back('x');        // O(1)
s.pop_back();            // O(1)
s.substr(pos, len);      // O(len)
s.find("sub");           // O(n*m)
s.compare(s2);           // O(n)
```

---

## 🎯 Common Patterns

### **1. Two Pointers**

```cpp
// Check palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}
// Time: O(n), Space: O(1)
```

### **2. Sliding Window**

```cpp
// Longest substring without repeating characters
int lengthOfLongestSubstring(string s) {
    unordered_set<char> seen;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        while (seen.count(s[right])) {
            seen.erase(s[left]);
            left++;
        }
        seen.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
// Time: O(n), Space: O(min(n, charset))
```

### **3. Hash Map**

```cpp
// Check anagram
bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, int> count;
    for (char c : s) count[c]++;
    for (char c : t) {
        if (--count[c] < 0) return false;
    }
    return true;
}
// Time: O(n), Space: O(1) - max 26 chars
```

### **4. String Builder Pattern**

```cpp
// Reverse words
string reverseWords(string s) {
    string result, word;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            word = s[i] + word;
        } else if (!word.empty()) {
            if (!result.empty()) result += " ";
            result += word;
            word = "";
        }
    }

    if (!word.empty()) {
        if (!result.empty()) result += " ";
        result += word;
    }

    return result;
}
// Time: O(n), Space: O(n)
```

---

## 💡 Common Problems

### **1. Valid Anagram**

```cpp
bool isAnagram(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}
// Time: O(n log n), Space: O(1)
```

### **2. Valid Parentheses**

```cpp
bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> pairs = {
        {')', '('}, {']', '['}, {'}', '{'}
    };

    for (char c : s) {
        if (pairs.count(c)) {
            if (st.empty() || st.top() != pairs[c])
                return false;
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}
// Time: O(n), Space: O(n)
```

### **3. Longest Palindromic Substring**

```cpp
string longestPalindrome(string s) {
    if (s.empty()) return "";
    int start = 0, maxLen = 1;

    auto expandAroundCenter = [&](int left, int right) {
        while (left >= 0 && right < s.length() &&
               s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    };

    for (int i = 0; i < s.length(); i++) {
        expandAroundCenter(i, i);      // Odd length
        expandAroundCenter(i, i + 1);  // Even length
    }

    return s.substr(start, maxLen);
}
// Time: O(n²), Space: O(1)
```

### **4. Group Anagrams**

```cpp
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;

    for (string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        groups[key].push_back(s);
    }

    vector<vector<string>> result;
    for (auto& [key, group] : groups) {
        result.push_back(group);
    }
    return result;
}
// Time: O(n * k log k), Space: O(n*k)
// n = number of strings, k = max length
```

---

## 🔥 String Manipulation

### **Conversion:**

```cpp
// String to int
int num = stoi("123");
int num = stoi("1010", nullptr, 2);  // Binary

// Int to string
string s = to_string(123);

// Char to int
int digit = c - '0';

// Int to char
char c = digit + '0';

// Lowercase/Uppercase
transform(s.begin(), s.end(), s.begin(), ::tolower);
transform(s.begin(), s.end(), s.begin(), ::toupper);
```

### **Splitting:**

```cpp
vector<string> split(string s, char delimiter) {
    vector<string> tokens;
    stringstream ss(s);
    string token;

    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}
```

### **Joining:**

```cpp
string join(vector<string>& words, string delimiter) {
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i < words.size() - 1)
            result += delimiter;
    }
    return result;
}
```

---

## 🎯 Interview Tips

### **Common Patterns:**

1. **Two pointers** - Palindrome, reverse
2. **Sliding window** - Substring problems
3. **Hash map** - Anagrams, character frequency
4. **Stack** - Parentheses, expression evaluation

### **Optimization:**

- Use `unordered_map` for O(1) lookups
- Use array[26] for lowercase letters only
- Avoid string concatenation in loops (use StringBuilder pattern)
- Consider in-place modification

### **Edge Cases:**

- Empty string
- Single character
- All same characters
- Special characters
- Case sensitivity

---

## 🔥 Must Remember

### **Time Complexities:**

- Access: O(1)
- Search: O(n)
- Concatenation: O(n)
- Substring: O(k) where k is length
- Compare: O(n)

### **Common Tricks:**

```cpp
// Reverse
reverse(s.begin(), s.end());

// Sort
sort(s.begin(), s.end());

// Remove spaces
s.erase(remove(s.begin(), s.end(), ' '), s.end());

// Check if all unique
unordered_set<char> chars(s.begin(), s.end());
bool allUnique = (chars.size() == s.length());

// Count frequency
unordered_map<char, int> freq;
for (char c : s) freq[c]++;
```

---

**Next:** [Linked Lists →](08-Linked-Lists.md)
