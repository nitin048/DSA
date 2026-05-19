# C++ Input/Output - Complete Guide

This document covers everything about input and output operations in C++ including cin, cout, file I/O, and formatting.

---

## 📚 Table of Contents

1. [Introduction to I/O](#introduction-to-io)
2. [Standard Output (cout)](#standard-output-cout)
3. [Standard Input (cin)](#standard-input-cin)
4. [Input/Output Manipulators](#inputoutput-manipulators)
5. [String Input](#string-input)
6. [Character Input](#character-input)
7. [Formatted Output](#formatted-output)
8. [File Input/Output](#file-inputoutput)
9. [Error Handling](#error-handling)
10. [Best Practices](#best-practices)

---

## 1. Introduction to I/O

C++ uses **streams** for input and output operations.

### Standard Streams

| Stream | Object | Description | Header |
|--------|--------|-------------|--------|
| Standard Input | `cin` | Reads from keyboard | `<iostream>` |
| Standard Output | `cout` | Writes to console | `<iostream>` |
| Standard Error | `cerr` | Writes error messages (unbuffered) | `<iostream>` |
| Standard Log | `clog` | Writes log messages (buffered) | `<iostream>` |

### Basic Example
```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;  // Output
    
    int age;
    cin >> age;  // Input
    
    return 0;
}
```

---

## 2. Standard Output (cout)

`cout` (character output) is used to display output on the screen.

### Basic Syntax
```cpp
cout << data;
```

### Simple Output
```cpp
cout << "Hello, World!";
cout << 42;
cout << 3.14;
cout << 'A';
cout << true;  // Output: 1
```

### Multiple Outputs (Chaining)
```cpp
cout << "Name: " << "John" << ", Age: " << 25;
// Output: Name: John, Age: 25
```

### New Line

**Method 1: Using `\n`**
```cpp
cout << "Line 1\n";
cout << "Line 2\n";
```

**Method 2: Using `endl`**
```cpp
cout << "Line 1" << endl;
cout << "Line 2" << endl;
```

**Difference between `\n` and `endl`:**
- `\n` - Just adds a new line
- `endl` - Adds new line AND flushes the buffer (slower but ensures immediate output)

```cpp
// Faster (for large outputs)
cout << "Line 1\n" << "Line 2\n" << "Line 3\n";

// Slower but ensures output is displayed immediately
cout << "Line 1" << endl << "Line 2" << endl << "Line 3" << endl;
```

### Escape Sequences

| Sequence | Description | Example |
|----------|-------------|---------|
| `\n` | New line | `cout << "Hello\nWorld";` |
| `\t` | Tab | `cout << "Name:\tJohn";` |
| `\\` | Backslash | `cout << "C:\\Users";` |
| `\"` | Double quote | `cout << "He said \"Hi\"";` |
| `\'` | Single quote | `cout << "It\'s okay";` |
| `\r` | Carriage return | `cout << "Hello\rWorld";` |
| `\b` | Backspace | `cout << "Hello\b\b";` |
| `\0` | Null character | String terminator |

### Example with Escape Sequences
```cpp
cout << "Name:\tJohn Doe\n";
cout << "Path:\tC:\\Users\\Documents\n";
cout << "Quote:\t\"Hello, World!\"\n";

// Output:
// Name:    John Doe
// Path:    C:\Users\Documents
// Quote:   "Hello, World!"
```

---

## 3. Standard Input (cin)

`cin` (character input) is used to read input from the keyboard.

### Basic Syntax
```cpp
cin >> variable;
```

### Reading Single Value
```cpp
int age;
cout << "Enter your age: ";
cin >> age;
cout << "You are " << age << " years old." << endl;
```

### Reading Multiple Values

**Method 1: Separate cin statements**
```cpp
int a, b;
cout << "Enter two numbers: ";
cin >> a;
cin >> b;
```

**Method 2: Chaining (recommended)**
```cpp
int a, b;
cout << "Enter two numbers: ";
cin >> a >> b;  // User enters: 10 20
```

### Reading Different Data Types
```cpp
string name;
int age;
double salary;
char grade;

cout << "Enter name, age, salary, grade: ";
cin >> name >> age >> salary >> grade;

cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Salary: " << salary << endl;
cout << "Grade: " << grade << endl;
```

### How cin Works

`cin` reads input until it encounters:
- Whitespace (space, tab, newline)
- End of input

```cpp
// User input: "John 25"
string name;
int age;
cin >> name >> age;  // name = "John", age = 25
```

---

## 4. Input/Output Manipulators

Manipulators are used to format input/output.

### Common Manipulators

| Manipulator | Header | Description | Example |
|-------------|--------|-------------|---------|
| `endl` | `<iostream>` | New line + flush buffer | `cout << "Hi" << endl;` |
| `setw(n)` | `<iomanip>` | Set field width | `cout << setw(10) << 42;` |
| `setprecision(n)` | `<iomanip>` | Set decimal precision | `cout << setprecision(2) << 3.14159;` |
| `fixed` | `<iomanip>` | Fixed-point notation | `cout << fixed << 3.14;` |
| `scientific` | `<iomanip>` | Scientific notation | `cout << scientific << 1234.5;` |
| `left` | `<iomanip>` | Left-align output | `cout << left << setw(10) << "Hi";` |
| `right` | `<iomanip>` | Right-align output | `cout << right << setw(10) << "Hi";` |
| `boolalpha` | `<iostream>` | Print bool as true/false | `cout << boolalpha << true;` |
| `noboolalpha` | `<iostream>` | Print bool as 1/0 | `cout << noboolalpha << true;` |
| `hex` | `<iostream>` | Hexadecimal output | `cout << hex << 255;` |
| `oct` | `<iostream>` | Octal output | `cout << oct << 8;` |
| `dec` | `<iostream>` | Decimal output (default) | `cout << dec << 10;` |

### Using setw() - Set Width
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << "Name" << setw(10) << "Age" << endl;
    cout << setw(10) << "John" << setw(10) << 25 << endl;
    cout << setw(10) << "Alice" << setw(10) << 30 << endl;
    
    // Output:
    //       Name       Age
    //       John        25
    //      Alice        30
    
    return 0;
}
```

### Using setprecision() - Decimal Precision
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 3.14159265359;
    
    cout << pi << endl;                          // Output: 3.14159
    cout << setprecision(2) << pi << endl;       // Output: 3.1
    cout << setprecision(4) << pi << endl;       // Output: 3.142
    cout << fixed << setprecision(2) << pi << endl;  // Output: 3.14
    
    return 0;
}
```

### Using fixed and scientific
```cpp
double num = 1234.56789;

cout << num << endl;                    // Output: 1234.57
cout << fixed << num << endl;           // Output: 1234.567890
cout << scientific << num << endl;      // Output: 1.234568e+03
cout << fixed << setprecision(2) << num << endl;  // Output: 1234.57
```

### Using left and right Alignment
```cpp
cout << left << setw(10) << "Left" << endl;
cout << right << setw(10) << "Right" << endl;

// Output:
// Left      
//      Right
```

### Using boolalpha
```cpp
bool flag = true;

cout << flag << endl;              // Output: 1
cout << boolalpha << flag << endl; // Output: true
cout << noboolalpha << flag << endl; // Output: 1
```

### Number Base Conversion
```cpp
int num = 255;

cout << "Decimal: " << dec << num << endl;      // Output: 255
cout << "Hexadecimal: " << hex << num << endl;  // Output: ff
cout << "Octal: " << oct << num << endl;        // Output: 377
```

---

## 5. String Input

### Using cin (reads until whitespace)
```cpp
string name;
cout << "Enter your name: ";
cin >> name;  // Reads only first word

// Input: "John Doe"
// name = "John" (only first word)
```

### Using getline() (reads entire line)
```cpp
string fullName;
cout << "Enter your full name: ";
getline(cin, fullName);  // Reads entire line including spaces

// Input: "John Doe"
// fullName = "John Doe" (entire line)
```

### Mixing cin and getline()

**Problem:**
```cpp
int age;
string name;

cout << "Enter age: ";
cin >> age;  // Leaves newline in buffer

cout << "Enter name: ";
getline(cin, name);  // Reads the leftover newline (empty string)
```

**Solution: Use cin.ignore()**
```cpp
int age;
string name;

cout << "Enter age: ";
cin >> age;

cin.ignore();  // Ignore the newline left by cin

cout << "Enter name: ";
getline(cin, name);  // Now works correctly
```

### Reading with Delimiter
```cpp
string input;
getline(cin, input, ',');  // Read until comma

// Input: "John,Doe"
// input = "John"
```

---

## 6. Character Input

### Using cin
```cpp
char ch;
cout << "Enter a character: ";
cin >> ch;  // Skips whitespace
```

### Using cin.get()
```cpp
char ch;
cout << "Enter a character: ";
ch = cin.get();  // Reads any character including whitespace
```

### Reading Multiple Characters
```cpp
char ch1, ch2, ch3;

// Method 1
cin >> ch1 >> ch2 >> ch3;  // Skips whitespace

// Method 2
ch1 = cin.get();
ch2 = cin.get();
ch3 = cin.get();  // Reads all characters including spaces
```

---

## 7. Formatted Output

### Creating Tables
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left << setw(15) << "Name" 
         << setw(10) << "Age" 
         << setw(10) << "Salary" << endl;
    cout << string(35, '-') << endl;  // Separator line
    
    cout << left << setw(15) << "John Doe" 
         << setw(10) << 25 
         << setw(10) << fixed << setprecision(2) << 50000.50 << endl;
    
    cout << left << setw(15) << "Jane Smith" 
         << setw(10) << 30 
         << setw(10) << fixed << setprecision(2) << 60000.75 << endl;
    
    return 0;
}

// Output:
// Name           Age       Salary    
// -----------------------------------
// John Doe       25        50000.50  
// Jane Smith     30        60000.75  
```

### Formatting Currency
```cpp
double price = 1234.5;
cout << "$" << fixed << setprecision(2) << price << endl;
// Output: $1234.50
```

### Formatting Percentages
```cpp
double percentage = 0.856;
cout << fixed << setprecision(2) << (percentage * 100) << "%" << endl;
// Output: 85.60%
```

---

## 8. File Input/Output

### Writing to a File

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create and open file for writing
    ofstream outFile("output.txt");
    
    // Check if file opened successfully
    if(!outFile)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    // Write to file
    outFile << "Hello, File!" << endl;
    outFile << "This is line 2" << endl;
    
    // Close file
    outFile.close();
    
    return 0;
}
```

### Reading from a File

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Open file for reading
    ifstream inFile("input.txt");
    
    // Check if file opened successfully
    if(!inFile)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    string line;
    
    // Read line by line
    while(getline(inFile, line))
    {
        cout << line << endl;
    }
    
    // Close file
    inFile.close();
    
    return 0;
}
```

### Reading Numbers from File

```cpp
ifstream inFile("numbers.txt");

int num;
while(inFile >> num)
{
    cout << num << endl;
}

inFile.close();
```

### Appending to a File

```cpp
// Open in append mode
ofstream outFile("log.txt", ios::app);

outFile << "New log entry" << endl;

outFile.close();
```

### File Open Modes

| Mode | Description |
|------|-------------|
| `ios::in` | Open for reading (default for ifstream) |
| `ios::out` | Open for writing (default for ofstream) |
| `ios::app` | Append to end of file |
| `ios::ate` | Open and seek to end |
| `ios::trunc` | Truncate file if exists |
| `ios::binary` | Open in binary mode |

```cpp
// Multiple modes
ofstream file("data.txt", ios::out | ios::app);
```

---

## 9. Error Handling

### Checking Input Validity

```cpp
int age;
cout << "Enter your age: ";
cin >> age;

if(cin.fail())
{
    cout << "Invalid input!" << endl;
    cin.clear();  // Clear error flags
    cin.ignore(1000, '\n');  // Ignore invalid input
}
```

### Complete Input Validation Example

```cpp
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int number;
    
    while(true)
    {
        cout << "Enter a number: ";
        cin >> number;
        
        if(cin.fail())
        {
            cout << "Invalid input! Please enter a number." << endl;
            cin.clear();  // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard extra input
            break;  // Valid input received
        }
    }
    
    cout << "You entered: " << number << endl;
    
    return 0;
}
```

### Checking File Operations

```cpp
ifstream inFile("data.txt");

if(!inFile.is_open())
{
    cerr << "Error: Could not open file!" << endl;
    return 1;
}

// Check for end of file
if(inFile.eof())
{
    cout << "End of file reached" << endl;
}

// Check for read errors
if(inFile.fail())
{
    cerr << "Error reading file!" << endl;
}
```

---

## 10. Best Practices

### 1. Always Validate Input

```cpp
// Bad
int age;
cin >> age;  // What if user enters "abc"?

// Good
int age;
while(!(cin >> age))
{
    cout << "Invalid input. Enter a number: ";
    cin.clear();
    cin.ignore(1000, '\n');
}
```

### 2. Use getline() for String Input with Spaces

```cpp
// Bad
string fullName;
cin >> fullName;  // Only reads first word

// Good
string fullName;
getline(cin, fullName);  // Reads entire line
```

### 3. Clear Input Buffer When Mixing cin and getline()

```cpp
int age;
string name;

cin >> age;
cin.ignore();  // Important!
getline(cin, name);
```

### 4. Use Meaningful Prompts

```cpp
// Bad
cout << "Enter: ";

// Good
cout << "Enter your age (0-120): ";
```

### 5. Check File Operations

```cpp
// Bad
ofstream file("data.txt");
file << "data";  // What if file didn't open?

// Good
ofstream file("data.txt");
if(!file)
{
    cerr << "Error opening file!" << endl;
    return 1;
}
file << "data";
file.close();
```

### 6. Use cerr for Error Messages

```cpp
// Bad
cout << "Error: File not found!" << endl;

// Good
cerr << "Error: File not found!" << endl;  // Unbuffered, immediate output
```

### 7. Close Files After Use

```cpp
ofstream file("data.txt");
// ... operations ...
file.close();  // Always close
```

### 8. Use '\n' Instead of endl for Performance

```cpp
// Slower (flushes buffer every time)
for(int i = 0; i < 1000000; i++)
    cout << i << endl;

// Faster
for(int i = 0; i < 1000000; i++)
    cout << i << '\n';
```

---

## 🎯 Common Mistakes to Avoid

### 1. Not Clearing Input Buffer
```cpp
int num;
string text;
cin >> num;
getline(cin, text);  // Reads empty line!
// Fix: Add cin.ignore() after cin >> num;
```

### 2. Not Checking cin.fail()
```cpp
int age;
cin >> age;  // User enters "abc"
// age has undefined value!
```

### 3. Using cin for Strings with Spaces
```cpp
string name;
cin >> name;  // Only reads first word
// Use getline(cin, name) instead
```

### 4. Not Checking File Open Status
```cpp
ifstream file("nonexistent.txt");
string line;
getline(file, line);  // Undefined behavior if file didn't open
```

### 5. Forgetting to Close Files
```cpp
ofstream file("data.txt");
file << "data";
// File not closed - may not write properly
```

---

## 📝 Practice Problems

1. Write a program to read name, age, and GPA, then display them formatted
2. Create a program that reads numbers until user enters -1, then displays sum
3. Write a program to read a file and count the number of words
4. Create a program that validates email input (must contain @)
5. Write a program to create a formatted table of student records
6. Create a program that reads integers and handles invalid input gracefully
7. Write a program to copy contents from one file to another

---

## 🔗 Related Topics

- [Variables](../Variables/README.md)
- [Operators](../Operators/README.md)
- Strings and String Manipulation
- File Handling Advanced
- Stream Manipulators

---

**Happy Learning! 🚀**
