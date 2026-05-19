# 🚀 C++ Basics - Your First Program

Welcome to C++ programming! This folder contains your first C++ program and explains the fundamental structure of a C++ program.

---

## 📝 What You'll Learn

- Structure of a C++ program
- How to write "Hello World"
- Understanding `#include` directives
- The `main()` function
- Basic output with `cout`
- Compiling and running C++ programs

---

## 🎯 Your First C++ Program

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "hello world" << "\n";
    return 0;
}
```

---

## 🔍 Breaking Down the Code

### 1. **`#include <iostream>`**

```cpp
#include <iostream>
```

- **What it does:** Includes the Input/Output Stream library
- **Why we need it:** Provides `cout` (console output) and `cin` (console input)
- **Think of it as:** Importing tools you need for your program

**Other common includes:**

```cpp
#include <string>    // For string operations
#include <vector>    // For dynamic arrays
#include <cmath>     // For mathematical functions
```

---

### 2. **`using namespace std;`**

```cpp
using namespace std;
```

- **What it does:** Tells the compiler to use the standard namespace
- **Why we need it:** Allows us to write `cout` instead of `std::cout`
- **Alternative:** You can skip this and use `std::` prefix

**With namespace:**

```cpp
using namespace std;
cout << "Hello";
```

**Without namespace:**

```cpp
std::cout << "Hello";
```

---

### 3. **`int main()`**

```cpp
int main()
{
    // Your code here
    return 0;
}
```

- **What it is:** The entry point of every C++ program
- **`int`:** The function returns an integer
- **`main`:** The name of the function (required)
- **`return 0;`:** Indicates successful program execution

**Key Points:**

- Every C++ program MUST have a `main()` function
- Program execution starts from `main()`
- `return 0;` means "no errors"
- Non-zero return values indicate errors

---

### 4. **`cout` - Console Output**

```cpp
cout << "hello world" << "\n";
```

- **`cout`:** Console Output (prints to screen)
- **`<<`:** Insertion operator (sends data to cout)
- **`"hello world"`:** String literal to print
- **`"\n"`:** Newline character (moves to next line)

**Examples:**

```cpp
// Print text
cout << "Hello World";

// Print with newline
cout << "Hello World" << endl;
cout << "Hello World\n";

// Print multiple things
cout << "Hello" << " " << "World" << endl;

// Print numbers
cout << 42 << endl;
cout << 3.14 << endl;

// Print variables
int age = 25;
cout << "Age: " << age << endl;
```

---

## 🛠️ Compiling and Running

### Method 1: Using g++ (Command Line)

```bash
# Compile
g++ FirstCode.cpp -o FirstCode

# Run
./FirstCode
```

### Method 2: Compile and Run in One Command

```bash
g++ FirstCode.cpp && ./a.out
```

### Method 3: Using clang++

```bash
# Compile
clang++ FirstCode.cpp -o FirstCode

# Run
./FirstCode
```

### Method 4: In Kiro/VS Code

1. **Click the Run button** (▶️) in the top-right corner
2. Or press **Ctrl + Alt + N** (Code Runner extension)
3. Or use **F5** (with debugger)

---

## 📊 Program Flow

```
Start
  ↓
Include libraries (#include <iostream>)
  ↓
Define namespace (using namespace std;)
  ↓
main() function starts
  ↓
Execute statements (cout << "hello world")
  ↓
Return 0 (success)
  ↓
End
```

---

## 💡 Common Variations

### Variation 1: Without `using namespace std;`

```cpp
#include <iostream>

int main()
{
    std::cout << "hello world" << std::endl;
    return 0;
}
```

### Variation 2: With Multiple Outputs

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "Welcome to C++ Programming" << endl;
    cout << "Let's learn DSA!" << endl;
    return 0;
}
```

### Variation 3: With Variables

```cpp
#include <iostream>
using namespace std;

int main()
{
    string name = "Nitin";
    int age = 25;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}
```

---

## 🎨 Output Formatting

### Using `endl` vs `\n`

```cpp
// Using endl (flushes buffer)
cout << "Hello" << endl;

// Using \n (faster, doesn't flush)
cout << "Hello\n";

// Multiple lines
cout << "Line 1\nLine 2\nLine 3" << endl;
```

### Printing Special Characters

```cpp
cout << "Tab:\tHello" << endl;        // Tab
cout << "Quote: \"Hello\"" << endl;   // Quotes
cout << "Backslash: \\" << endl;      // Backslash
cout << "New line:\nHello" << endl;   // New line
```

---

## 🔧 Common Errors and Solutions

### Error 1: Missing Semicolon

```cpp
// ❌ Wrong
cout << "Hello"

// ✅ Correct
cout << "Hello";
```

### Error 2: Missing `#include`

```cpp
// ❌ Wrong (cout not defined)
int main() {
    cout << "Hello";
}

// ✅ Correct
#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
}
```

### Error 3: Wrong `main()` Syntax

```cpp
// ❌ Wrong
void main() { }

// ✅ Correct
int main() {
    return 0;
}
```

### Error 4: Missing `return 0;`

```cpp
// ⚠️ Warning (works but not recommended)
int main() {
    cout << "Hello";
}

// ✅ Correct
int main() {
    cout << "Hello";
    return 0;
}
```

---

## 📚 Key Takeaways

1. **Every C++ program needs:**
   - `#include <iostream>` for input/output
   - `int main()` function
   - `return 0;` to indicate success

2. **`cout` is used for output:**
   - `cout << "text";` prints text
   - `cout << variable;` prints variable value
   - `cout << "text" << variable << endl;` chains multiple outputs

3. **Compilation process:**
   - Write code → Compile → Run
   - `g++ file.cpp` creates executable
   - `./a.out` runs the program

4. **Good practices:**
   - Always include necessary headers
   - Use meaningful variable names
   - Add comments to explain your code
   - End statements with semicolons

---

## 🎯 Practice Exercises

### Exercise 1: Modify the Output

Change the program to print your name and age.

**Expected Output:**

```
Name: Your Name
Age: Your Age
```

### Exercise 2: Multiple Lines

Print 5 different lines of text.

### Exercise 3: ASCII Art

Create a simple ASCII art using `cout`.

**Example:**

```
  *
 ***
*****
 ***
  *
```

### Exercise 4: Print Numbers

Print numbers from 1 to 5 (without loops, just 5 cout statements).

---

## 🔗 Next Steps

After mastering the basics, move on to:

1. **[02_Variables](../02_Variables/)** - Learn about data types and variables
2. **[03_Operators](../03_Operators/)** - Arithmetic, logical, and relational operators
3. **[04_InputOutput](../04_InputOutput/)** - Taking user input with `cin`

---

## 📖 Additional Resources

- **C++ Documentation:** https://en.cppreference.com/
- **Learn C++:** https://www.learncpp.com/
- **C++ Tutorial:** https://www.cplusplus.com/doc/tutorial/

---

**Congratulations on writing your first C++ program! 🎉**

Keep practicing and move on to the next topic when you're ready!
