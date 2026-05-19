# C++ Conditional Statements - Complete Guide

This document covers all conditional statements in C++ including if, if-else, if-else if-else, nested if, switch, and ternary operator.

---

## 📚 Table of Contents

1. [What are Conditional Statements?](#what-are-conditional-statements)
2. [If Statement](#if-statement)
3. [If-Else Statement](#if-else-statement)
4. [If-Else If-Else Statement](#if-else-if-else-statement)
5. [Nested If Statements](#nested-if-statements)
6. [Switch Statement](#switch-statement)
7. [Ternary Operator](#ternary-operator)
8. [Comparison: If vs Switch](#comparison-if-vs-switch)
9. [Best Practices](#best-practices)
10. [Common Mistakes](#common-mistakes)

---

## 1. What are Conditional Statements?

**Conditional statements** allow you to execute different code blocks based on certain conditions. They control the flow of program execution.

### Why Use Conditional Statements?

- Make decisions in your program
- Execute code only when certain conditions are met
- Create different paths of execution
- Validate user input
- Handle different scenarios

---

## 2. If Statement

Executes a block of code **only if** the condition is true.

### Syntax
```cpp
if(condition)
{
    // code to execute if condition is true
}
```

### Examples

#### Example 1: Simple If
```cpp
int age = 20;

if(age >= 18)
{
    cout << "You are an adult." << endl;
}
// Output: You are an adult.
```

#### Example 2: Multiple Statements
```cpp
int marks = 85;

if(marks >= 80)
{
    cout << "Excellent!" << endl;
    cout << "You got an A grade." << endl;
    cout << "Keep it up!" << endl;
}
```

#### Example 3: Without Braces (Single Statement)
```cpp
int x = 10;

if(x > 5)
    cout << "x is greater than 5" << endl;  // Only this line is part of if

// Not recommended - use braces for clarity
```

### Flowchart
```
    Start
      |
      v
  [Condition]
      |
   Yes|  No
      v    |
  [Code]   |
      |    |
      v    v
    End
```

---

## 3. If-Else Statement

Executes one block if condition is true, another block if condition is false.

### Syntax
```cpp
if(condition)
{
    // code if condition is true
}
else
{
    // code if condition is false
}
```

### Examples

#### Example 1: Even or Odd
```cpp
int num = 7;

if(num % 2 == 0)
{
    cout << num << " is even." << endl;
}
else
{
    cout << num << " is odd." << endl;
}
// Output: 7 is odd.
```

#### Example 2: Positive or Negative
```cpp
int number = -5;

if(number >= 0)
{
    cout << "Positive number" << endl;
}
else
{
    cout << "Negative number" << endl;
}
// Output: Negative number
```

#### Example 3: Login Validation
```cpp
string password = "secret123";
string input;

cout << "Enter password: ";
cin >> input;

if(input == password)
{
    cout << "Access granted!" << endl;
}
else
{
    cout << "Access denied!" << endl;
}
```

### Flowchart
```
    Start
      |
      v
  [Condition]
      |
   Yes|  No
      v    v
  [Code1] [Code2]
      |    |
      v    v
    End
```

---

## 4. If-Else If-Else Statement

Tests multiple conditions in sequence. Executes the first true condition's block.

### Syntax
```cpp
if(condition1)
{
    // code if condition1 is true
}
else if(condition2)
{
    // code if condition2 is true
}
else if(condition3)
{
    // code if condition3 is true
}
else
{
    // code if all conditions are false
}
```

### Examples

#### Example 1: Grade Calculator
```cpp
int marks = 75;

if(marks >= 90)
{
    cout << "Grade: A+" << endl;
}
else if(marks >= 80)
{
    cout << "Grade: A" << endl;
}
else if(marks >= 70)
{
    cout << "Grade: B" << endl;
}
else if(marks >= 60)
{
    cout << "Grade: C" << endl;
}
else if(marks >= 50)
{
    cout << "Grade: D" << endl;
}
else
{
    cout << "Grade: F (Fail)" << endl;
}
// Output: Grade: B
```

#### Example 2: Age Category
```cpp
int age = 25;

if(age < 13)
{
    cout << "Child" << endl;
}
else if(age < 20)
{
    cout << "Teenager" << endl;
}
else if(age < 60)
{
    cout << "Adult" << endl;
}
else
{
    cout << "Senior" << endl;
}
// Output: Adult
```

#### Example 3: Temperature Check
```cpp
int temp = 30;

if(temp < 0)
{
    cout << "Freezing!" << endl;
}
else if(temp < 15)
{
    cout << "Cold" << endl;
}
else if(temp < 25)
{
    cout << "Pleasant" << endl;
}
else if(temp < 35)
{
    cout << "Hot" << endl;
}
else
{
    cout << "Very Hot!" << endl;
}
// Output: Hot
```

### Important Notes

1. **Order matters** - First true condition executes
2. **Only one block executes** - Even if multiple conditions are true
3. **else is optional** - Can have if-else if without final else

```cpp
int x = 15;

// Only first true condition executes
if(x > 10)
{
    cout << "x > 10" << endl;  // This executes
}
else if(x > 5)
{
    cout << "x > 5" << endl;   // This is skipped (even though true)
}
```

---

## 5. Nested If Statements

An if statement inside another if statement.

### Syntax
```cpp
if(condition1)
{
    if(condition2)
    {
        // code if both conditions are true
    }
}
```

### Examples

#### Example 1: Eligibility Check
```cpp
int age = 25;
bool hasLicense = true;

if(age >= 18)
{
    if(hasLicense)
    {
        cout << "You can drive!" << endl;
    }
    else
    {
        cout << "You need a license." << endl;
    }
}
else
{
    cout << "You are too young to drive." << endl;
}
```

#### Example 2: Number Classification
```cpp
int num = 15;

if(num > 0)
{
    if(num % 2 == 0)
    {
        cout << "Positive even number" << endl;
    }
    else
    {
        cout << "Positive odd number" << endl;
    }
}
else if(num < 0)
{
    if(num % 2 == 0)
    {
        cout << "Negative even number" << endl;
    }
    else
    {
        cout << "Negative odd number" << endl;
    }
}
else
{
    cout << "Zero" << endl;
}
```

#### Example 3: Login System
```cpp
string username = "admin";
string password = "pass123";

string inputUser, inputPass;
cin >> inputUser >> inputPass;

if(inputUser == username)
{
    if(inputPass == password)
    {
        cout << "Login successful!" << endl;
    }
    else
    {
        cout << "Wrong password!" << endl;
    }
}
else
{
    cout << "User not found!" << endl;
}
```

### Alternative: Using Logical Operators

Instead of nesting, you can use `&&` (AND):

```cpp
// Nested if
if(age >= 18)
{
    if(hasLicense)
    {
        cout << "Can drive" << endl;
    }
}

// Better: Using &&
if(age >= 18 && hasLicense)
{
    cout << "Can drive" << endl;
}
```

---

## 6. Switch Statement

Executes different code blocks based on the value of a variable. Good for multiple specific values.

### Syntax
```cpp
switch(expression)
{
    case value1:
        // code
        break;
    
    case value2:
        // code
        break;
    
    case value3:
        // code
        break;
    
    default:
        // code if no case matches
        break;
}
```

### Examples

#### Example 1: Day of Week
```cpp
int day = 3;

switch(day)
{
    case 1:
        cout << "Monday" << endl;
        break;
    
    case 2:
        cout << "Tuesday" << endl;
        break;
    
    case 3:
        cout << "Wednesday" << endl;
        break;
    
    case 4:
        cout << "Thursday" << endl;
        break;
    
    case 5:
        cout << "Friday" << endl;
        break;
    
    case 6:
        cout << "Saturday" << endl;
        break;
    
    case 7:
        cout << "Sunday" << endl;
        break;
    
    default:
        cout << "Invalid day!" << endl;
        break;
}
// Output: Wednesday
```

#### Example 2: Calculator
```cpp
char operation;
double num1, num2;

cout << "Enter operation (+, -, *, /): ";
cin >> operation;
cout << "Enter two numbers: ";
cin >> num1 >> num2;

switch(operation)
{
    case '+':
        cout << "Result: " << (num1 + num2) << endl;
        break;
    
    case '-':
        cout << "Result: " << (num1 - num2) << endl;
        break;
    
    case '*':
        cout << "Result: " << (num1 * num2) << endl;
        break;
    
    case '/':
        if(num2 != 0)
            cout << "Result: " << (num1 / num2) << endl;
        else
            cout << "Error: Division by zero!" << endl;
        break;
    
    default:
        cout << "Invalid operation!" << endl;
        break;
}
```

#### Example 3: Grade to Description
```cpp
char grade;
cout << "Enter your grade (A-F): ";
cin >> grade;

switch(grade)
{
    case 'A':
    case 'a':
        cout << "Excellent!" << endl;
        break;
    
    case 'B':
    case 'b':
        cout << "Good!" << endl;
        break;
    
    case 'C':
    case 'c':
        cout << "Fair" << endl;
        break;
    
    case 'D':
    case 'd':
        cout << "Poor" << endl;
        break;
    
    case 'F':
    case 'f':
        cout << "Fail" << endl;
        break;
    
    default:
        cout << "Invalid grade!" << endl;
        break;
}
```

#### Example 4: Fall-Through (Without break)
```cpp
int month = 2;

switch(month)
{
    case 12:
    case 1:
    case 2:
        cout << "Winter" << endl;
        break;
    
    case 3:
    case 4:
    case 5:
        cout << "Spring" << endl;
        break;
    
    case 6:
    case 7:
    case 8:
        cout << "Summer" << endl;
        break;
    
    case 9:
    case 10:
    case 11:
        cout << "Fall" << endl;
        break;
    
    default:
        cout << "Invalid month!" << endl;
        break;
}
// Output: Winter
```

### Important Notes

1. **break is crucial** - Without it, execution "falls through" to next case
2. **Works with**: int, char, enum (NOT float, double, string)
3. **default is optional** - But recommended for error handling
4. **Case values must be constants** - Cannot use variables

```cpp
// ❌ WRONG - Missing break
switch(x)
{
    case 1:
        cout << "One" << endl;  // Falls through to case 2!
    case 2:
        cout << "Two" << endl;
}

// ✅ CORRECT - With break
switch(x)
{
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
}
```

---

## 7. Ternary Operator

A shorthand for simple if-else statements. Returns a value based on condition.

### Syntax
```cpp
condition ? value_if_true : value_if_false;
```

### Examples

#### Example 1: Find Maximum
```cpp
int a = 10, b = 20;
int max = (a > b) ? a : b;
cout << "Maximum: " << max << endl;
// Output: Maximum: 20
```

#### Example 2: Even or Odd
```cpp
int num = 7;
string result = (num % 2 == 0) ? "Even" : "Odd";
cout << num << " is " << result << endl;
// Output: 7 is Odd
```

#### Example 3: Pass or Fail
```cpp
int marks = 65;
cout << "Result: " << ((marks >= 50) ? "Pass" : "Fail") << endl;
// Output: Result: Pass
```

#### Example 4: Nested Ternary (Not Recommended)
```cpp
int marks = 85;
string grade = (marks >= 90) ? "A" :
               (marks >= 80) ? "B" :
               (marks >= 70) ? "C" :
               (marks >= 60) ? "D" : "F";
cout << "Grade: " << grade << endl;
// Output: Grade: B

// Better to use if-else if for readability
```

#### Example 5: Absolute Value
```cpp
int num = -15;
int absolute = (num < 0) ? -num : num;
cout << "Absolute value: " << absolute << endl;
// Output: Absolute value: 15
```

### When to Use Ternary

✅ **Good for:**
- Simple conditions
- Assigning values
- One-liners

❌ **Avoid for:**
- Complex conditions
- Multiple statements
- Nested ternary (hard to read)

---

## 8. Comparison: If vs Switch

| Feature | If-Else | Switch |
|---------|---------|--------|
| **Conditions** | Any boolean expression | Only equality checks |
| **Data Types** | Any type | int, char, enum only |
| **Ranges** | Can check ranges (x > 10) | Cannot check ranges |
| **Multiple Conditions** | Can use &&, \|\| | Must use fall-through |
| **Readability** | Good for few conditions | Better for many values |
| **Performance** | Slower for many conditions | Faster for many values |

### When to Use If-Else

```cpp
// Range checking
if(age < 18)
    cout << "Minor" << endl;
else if(age < 60)
    cout << "Adult" << endl;
else
    cout << "Senior" << endl;

// Complex conditions
if(age >= 18 && hasLicense && !isSuspended)
    cout << "Can drive" << endl;

// String comparison
if(name == "John")
    cout << "Hello John!" << endl;
```

### When to Use Switch

```cpp
// Multiple specific values
switch(dayOfWeek)
{
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    // ... more cases
}

// Menu selection
switch(choice)
{
    case 1: addItem(); break;
    case 2: deleteItem(); break;
    case 3: viewItems(); break;
}

// Character/enum values
switch(grade)
{
    case 'A': cout << "Excellent"; break;
    case 'B': cout << "Good"; break;
}
```

---

## 9. Best Practices

### 1. Always Use Braces

```cpp
// ❌ BAD - Easy to make mistakes
if(x > 0)
    cout << "Positive" << endl;
    cout << "Number" << endl;  // Always executes!

// ✅ GOOD - Clear and safe
if(x > 0)
{
    cout << "Positive" << endl;
    cout << "Number" << endl;
}
```

### 2. Avoid Deep Nesting

```cpp
// ❌ BAD - Hard to read
if(a)
{
    if(b)
    {
        if(c)
        {
            if(d)
            {
                // code
            }
        }
    }
}

// ✅ GOOD - Use logical operators
if(a && b && c && d)
{
    // code
}

// ✅ GOOD - Early return
if(!a) return;
if(!b) return;
if(!c) return;
if(!d) return;
// code
```

### 3. Use Meaningful Conditions

```cpp
// ❌ BAD - Magic numbers
if(status == 1)
    cout << "Active" << endl;

// ✅ GOOD - Named constants
const int ACTIVE = 1;
if(status == ACTIVE)
    cout << "Active" << endl;

// ✅ BETTER - Enum
enum Status { INACTIVE, ACTIVE, SUSPENDED };
if(status == ACTIVE)
    cout << "Active" << endl;
```

### 4. Handle All Cases

```cpp
// ❌ BAD - Missing else
if(x > 0)
    cout << "Positive" << endl;
// What if x <= 0?

// ✅ GOOD - Complete handling
if(x > 0)
    cout << "Positive" << endl;
else if(x < 0)
    cout << "Negative" << endl;
else
    cout << "Zero" << endl;
```

### 5. Use Switch for Multiple Values

```cpp
// ❌ BAD - Long if-else chain
if(day == 1)
    cout << "Monday";
else if(day == 2)
    cout << "Tuesday";
else if(day == 3)
    cout << "Wednesday";
// ... etc

// ✅ GOOD - Switch statement
switch(day)
{
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    // ... etc
}
```

### 6. Don't Forget break in Switch

```cpp
// ❌ BAD - Missing break
switch(x)
{
    case 1:
        cout << "One" << endl;  // Falls through!
    case 2:
        cout << "Two" << endl;
}

// ✅ GOOD - With break
switch(x)
{
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
}
```

---

## 10. Common Mistakes

### Mistake 1: Assignment Instead of Comparison

```cpp
// ❌ WRONG - Assignment (always true)
if(x = 5)
    cout << "x is 5" << endl;

// ✅ CORRECT - Comparison
if(x == 5)
    cout << "x is 5" << endl;
```

### Mistake 2: Semicolon After If

```cpp
// ❌ WRONG - Semicolon ends the if statement
if(x > 0);
{
    cout << "Positive" << endl;  // Always executes!
}

// ✅ CORRECT - No semicolon
if(x > 0)
{
    cout << "Positive" << endl;
}
```

### Mistake 3: Floating Point Comparison

```cpp
// ❌ WRONG - Floating point precision issues
double x = 0.1 + 0.2;
if(x == 0.3)
    cout << "Equal" << endl;  // May not execute!

// ✅ CORRECT - Use epsilon comparison
const double EPSILON = 0.0001;
if(abs(x - 0.3) < EPSILON)
    cout << "Equal" << endl;
```

### Mistake 4: Wrong Logical Operator

```cpp
// ❌ WRONG - Using && instead of ||
if(age < 18 && age > 60)  // Impossible!
    cout << "Discount" << endl;

// ✅ CORRECT - Using ||
if(age < 18 || age > 60)
    cout << "Discount" << endl;
```

### Mistake 5: Missing Braces in Nested If

```cpp
// ❌ WRONG - Confusing without braces
if(x > 0)
    if(y > 0)
        cout << "Both positive" << endl;
else
    cout << "x is not positive" << endl;  // Wrong! else belongs to inner if

// ✅ CORRECT - With braces
if(x > 0)
{
    if(y > 0)
    {
        cout << "Both positive" << endl;
    }
}
else
{
    cout << "x is not positive" << endl;
}
```

---

## 📝 Practice Problems

1. Write a program to check if a number is positive, negative, or zero
2. Create a calculator using switch statement
3. Check if a year is a leap year
4. Find the largest of three numbers
5. Create a grade calculator (marks to grade conversion)
6. Check if a character is vowel or consonant
7. Create a simple menu-driven program
8. Check if a triangle is valid (sum of two sides > third side)
9. Determine if a person is eligible to vote (age >= 18)
10. Create a traffic light simulator (Red, Yellow, Green)

---

## 🎯 Quick Reference

### If Statement
```cpp
if(condition) { /* code */ }
```

### If-Else
```cpp
if(condition) { /* code1 */ }
else { /* code2 */ }
```

### If-Else If-Else
```cpp
if(cond1) { /* code1 */ }
else if(cond2) { /* code2 */ }
else { /* code3 */ }
```

### Switch
```cpp
switch(var) {
    case val1: /* code */ break;
    case val2: /* code */ break;
    default: /* code */ break;
}
```

### Ternary
```cpp
result = (condition) ? value1 : value2;
```

---

## 🔗 Related Topics

- [Operators](../Operators/README.md)
- [Loops](../Loops/README.md)
- Variables and Data Types
- Functions

---

**Happy Learning! 🚀**
