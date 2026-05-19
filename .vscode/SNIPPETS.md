# C++ Code Snippets Guide

This document lists all available code snippets for quick C++ development in this DSA repository.

## 🚀 How to Use

1. Open any `.cpp` file
2. Type the shortcut prefix
3. Press **Tab** or **Enter**
4. Use **Tab** to navigate between placeholders

---

## 📝 Basic Templates

### `cpp` - Basic C++ Boilerplate
```cpp
#include <iostream>
using namespace std;

int main()
{
    // cursor here
    return 0;
}
```

### `cppdsa` - DSA Template
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // cursor here
    return 0;
}
```

### `cppfast` - Competitive Programming Template
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) x.begin(), x.end()

void solve()
{
    // cursor here
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
```

---

## 🏗️ Classes & Structures

### `cppclass` - Class Template
```cpp
class ClassName
{
private:
    // private members

public:
    // Constructor
    ClassName()
    {
        // cursor here
    }
    
    // Destructor
    ~ClassName()
    {
        
    }
};
```

### `struct` - Struct Template
```cpp
struct StructName
{
    int data;
    // cursor here
};
```

---

## 📦 Data Structures

### `vec` - Vector Declaration
```cpp
vector<int> name;
```

### `vecn` - Vector with Size
```cpp
vector<int> name(size);
```

### `vec2d` - 2D Vector
```cpp
vector<vector<int>> name(rows, vector<int>(cols));
```

---

## 🔄 Loops

### `fori` - Standard For Loop
```cpp
for(int i = 0; i < n; i++)
{
    // cursor here
}
```

### `forr` - Range-based For Loop
```cpp
for(auto item : container)
{
    // cursor here
}
```

### `while` - While Loop
```cpp
while(condition)
{
    // cursor here
}
```

---

## 💬 Input/Output

### `cin` - Input Statement
```cpp
cin >> variable;
```

### `cout` - Output Statement
```cpp
cout << variable << endl;
```

---

## ⚙️ Functions

### `func` - Function Template
```cpp
void functionName(parameters)
{
    // cursor here
}
```

### `binsearch` - Binary Search Implementation
```cpp
int binarySearch(vector<int>& arr, int target)
{
    int left = 0, right = arr.size() - 1;
    
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1;
}
```

---

## 📄 Documentation

### `header` - File Header Comment
```cpp
/*
 * File: filename.cpp
 * Author: Your Name
 * Date: DD/MM/YYYY
 * Description: Description
 */
```

---

## 🎯 Quick Reference Table

| Shortcut | Description | Category |
|----------|-------------|----------|
| `cpp` | Basic boilerplate | Template |
| `cppdsa` | DSA template | Template |
| `cppfast` | Competitive programming | Template |
| `cppclass` | Class template | Structure |
| `struct` | Struct template | Structure |
| `vec` | Vector declaration | Data Structure |
| `vecn` | Vector with size | Data Structure |
| `vec2d` | 2D vector | Data Structure |
| `fori` | For loop | Loop |
| `forr` | Range-based for | Loop |
| `while` | While loop | Loop |
| `cin` | Input | I/O |
| `cout` | Output | I/O |
| `func` | Function | Function |
| `binsearch` | Binary search | Algorithm |
| `header` | File header | Documentation |

---

## 💡 Tips

1. **Tab Navigation**: After inserting a snippet, press Tab to jump to the next placeholder
2. **Customization**: Edit `.vscode/cpp.code-snippets` to add your own shortcuts
3. **Multiple Cursors**: Some snippets support multiple edit points - use Tab to cycle through them

---

## 🔧 Adding Your Own Snippets

To add custom snippets:
1. Open `.vscode/cpp.code-snippets`
2. Follow the JSON format
3. Add your snippet with a unique prefix
4. Save and start using it!

---

**Happy Coding! 🚀**
