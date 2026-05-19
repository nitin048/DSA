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

## 🔀 Control Structures

### `if` - If Statement
```cpp
if(condition)
{
    // cursor here
}
```

### `ifelse` - If-Else Statement
```cpp
if(condition)
{
    // true block
}
else
{
    // false block
}
```

### `ifelif` - If-Else If-Else Statement
```cpp
if(condition1)
{
    // block 1
}
else if(condition2)
{
    // block 2
}
else
{
    // else block
}
```

### `ternary` - Ternary Operator
```cpp
variable = (condition) ? trueValue : falseValue;
```

### `switch` - Switch Statement
```cpp
switch(expression)
{
    case value1:
        // code
        break;
    
    case value2:
        // code
        break;
    
    default:
        // default code
        break;
}
```

---

## 🔁 Advanced Loops

### `for` - Standard For Loop
```cpp
for(int i = 0; i < n; i++)
{
    // cursor here
}
```

### `forr` - Reverse For Loop
```cpp
for(int i = n - 1; i >= 0; i--)
{
    // cursor here
}
```

### `foreach` - Range-based For Loop
```cpp
for(auto item : container)
{
    // cursor here
}
```

### `foreachref` - Range-based For Loop (Reference)
```cpp
for(auto& item : container)
{
    // cursor here
}
```

### `foreachconst` - Range-based For Loop (Const Reference)
```cpp
for(const auto& item : container)
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

### `dowhile` - Do-While Loop
```cpp
do
{
    // cursor here
} while(condition);
```

### `forfor` - Nested For Loop
```cpp
for(int i = 0; i < rows; i++)
{
    for(int j = 0; j < cols; j++)
    {
        // cursor here
    }
}
```

---

## 🛑 Loop Control

### `break` - Break Statement
```cpp
break;
```

### `continue` - Continue Statement
```cpp
continue;
```

---

## ⚠️ Exception Handling

### `try` - Try-Catch Block
```cpp
try
{
    // code that may throw
}
catch(const std::exception& e)
{
    // handle exception
    cerr << e.what() << endl;
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
| `if` | If statement | Control Flow |
| `ifelse` | If-else statement | Control Flow |
| `ifelif` | If-else if-else | Control Flow |
| `ternary` | Ternary operator | Control Flow |
| `switch` | Switch statement | Control Flow |
| `for` | For loop | Loop |
| `forr` | Reverse for loop | Loop |
| `foreach` | Range-based for | Loop |
| `foreachref` | Range-based for (ref) | Loop |
| `foreachconst` | Range-based for (const) | Loop |
| `while` | While loop | Loop |
| `dowhile` | Do-while loop | Loop |
| `forfor` | Nested for loop | Loop |
| `break` | Break statement | Loop Control |
| `continue` | Continue statement | Loop Control |
| `cin` | Input | I/O |
| `cout` | Output | I/O |
| `func` | Function | Function |
| `binsearch` | Binary search | Algorithm |
| `try` | Try-catch block | Exception |
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
