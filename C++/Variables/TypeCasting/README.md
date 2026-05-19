# C++ Type Casting - Complete Guide

This document covers everything about type casting in C++ including implicit conversion, explicit casting, and all C++ casting operators.

---

## 📚 Table of Contents

1. [What is Type Casting?](#what-is-type-casting)
2. [Implicit Type Conversion](#implicit-type-conversion)
3. [Explicit Type Conversion](#explicit-type-conversion)
4. [C-Style Casting](#c-style-casting)
5. [C++ Style Casting Operators](#c-style-casting-operators)
6. [static_cast](#static_cast)
7. [dynamic_cast](#dynamic_cast)
8. [const_cast](#const_cast)
9. [reinterpret_cast](#reinterpret_cast)
10. [Type Promotion](#type-promotion)
11. [Narrowing vs Widening Conversion](#narrowing-vs-widening-conversion)
12. [Best Practices](#best-practices)

---

## 1. What is Type Casting?

**Type casting** is the process of converting a value from one data type to another.

### Why Type Casting?

- Perform operations between different data types
- Store values in different formats
- Interface with APIs requiring specific types
- Control precision in calculations

### Types of Type Casting

1. **Implicit Conversion** (Automatic) - Done by compiler
2. **Explicit Conversion** (Manual) - Done by programmer

---

## 2. Implicit Type Conversion

Also called **automatic type conversion** or **type coercion**. The compiler automatically converts one data type to another.

### Widening Conversion (Safe)

Converting smaller type to larger type - no data loss.

```cpp
int a = 10;
double b = a;  // int to double (automatic)
cout << b;     // Output: 10.0

char ch = 'A';
int ascii = ch;  // char to int (automatic)
cout << ascii;   // Output: 65

float f = 3.14f;
double d = f;    // float to double (automatic)
cout << d;       // Output: 3.14
```

### Conversion Hierarchy (Lower to Higher)

```
bool → char → short → int → long → long long → float → double → long double
```

### Examples of Implicit Conversion

```cpp
// Integer to floating-point
int x = 5;
double y = x;  // y = 5.0

// Character to integer
char ch = 'A';
int num = ch;  // num = 65 (ASCII value)

// Boolean to integer
bool flag = true;
int value = flag;  // value = 1

// Integer to boolean
int zero = 0;
bool b1 = zero;  // b1 = false
int nonZero = 5;
bool b2 = nonZero;  // b2 = true
```

### Implicit Conversion in Expressions

```cpp
int a = 10;
double b = 5.5;
double result = a + b;  // a converted to double, result = 15.5

char ch = 'A';  // ASCII 65
int x = ch + 1;  // ch converted to int, x = 66

float f = 3.14f;
int i = 2;
float res = f * i;  // i converted to float, res = 6.28
```

### Narrowing Conversion (Potentially Unsafe)

Converting larger type to smaller type - may lose data.

```cpp
double pi = 3.14159;
int x = pi;  // x = 3 (decimal part lost)

int large = 300;
char ch = large;  // Overflow! char range: -128 to 127

long long big = 9223372036854775807LL;
int small = big;  // Data loss! int can't hold this value
```

---

## 3. Explicit Type Conversion

Programmer manually converts one type to another using casting operators.

### Why Explicit Casting?

- Make intentions clear
- Avoid compiler warnings
- Control conversion behavior
- Ensure type safety

---

## 4. C-Style Casting

Traditional C-style casting using parentheses.

### Syntax
```cpp
(target_type) expression
```

### Examples

```cpp
// Float to int
double pi = 3.14159;
int x = (int)pi;  // x = 3

// Int to char
int ascii = 65;
char ch = (char)ascii;  // ch = 'A'

// Pointer casting
int* ptr = (int*)malloc(sizeof(int));

// Void pointer to specific type
void* voidPtr = &x;
int* intPtr = (int*)voidPtr;
```

### Problems with C-Style Casting

1. **Too powerful** - Can perform unsafe conversions
2. **Hard to search** - Difficult to find in code
3. **No compile-time checking** - Can cause runtime errors
4. **Unclear intent** - Doesn't show what kind of cast

```cpp
// Dangerous C-style cast
const int x = 10;
int* ptr = (int*)&x;  // Removes const (dangerous!)
*ptr = 20;  // Undefined behavior!
```

---

## 5. C++ Style Casting Operators

C++ provides four specific casting operators that are safer and more explicit.

| Operator | Purpose | Safety |
|----------|---------|--------|
| `static_cast` | Compile-time type conversion | Safe |
| `dynamic_cast` | Runtime polymorphic casting | Safe |
| `const_cast` | Add/remove const qualifier | Use carefully |
| `reinterpret_cast` | Low-level reinterpretation | Dangerous |

### Advantages of C++ Style Casts

1. **Easy to find** - Searchable in code
2. **Clear intent** - Shows what kind of conversion
3. **Compile-time checking** - Catches errors early
4. **Type safety** - Prevents dangerous conversions

---

## 6. static_cast

Most common casting operator. Used for well-defined conversions at compile time.

### Syntax
```cpp
static_cast<target_type>(expression)
```

### Use Cases

#### 1. Numeric Conversions

```cpp
// Float to int
double pi = 3.14159;
int x = static_cast<int>(pi);  // x = 3

// Int to float
int a = 5;
double b = static_cast<double>(a);  // b = 5.0

// Char to int
char ch = 'A';
int ascii = static_cast<int>(ch);  // ascii = 65
```

#### 2. Avoiding Integer Division

```cpp
int a = 5, b = 2;

// Integer division (wrong)
double result1 = a / b;  // result1 = 2.0 (not 2.5!)

// Correct way
double result2 = static_cast<double>(a) / b;  // result2 = 2.5
```

#### 3. Enum Conversions

```cpp
enum Color { RED, GREEN, BLUE };

// Enum to int
Color c = GREEN;
int value = static_cast<int>(c);  // value = 1

// Int to enum
int num = 2;
Color color = static_cast<Color>(num);  // color = BLUE
```

#### 4. Pointer Conversions (Related Classes)

```cpp
class Base {};
class Derived : public Base {};

Derived* derived = new Derived();
Base* base = static_cast<Base*>(derived);  // Upcast (safe)

// Downcast (use with caution)
Base* basePtr = new Derived();
Derived* derivedPtr = static_cast<Derived*>(basePtr);
```

#### 5. Void Pointer Conversions

```cpp
int x = 42;
void* voidPtr = &x;

// Convert void* back to int*
int* intPtr = static_cast<int*>(voidPtr);
cout << *intPtr;  // Output: 42
```

### What static_cast CANNOT Do

```cpp
// Cannot remove const
const int x = 10;
// int* ptr = static_cast<int*>(&x);  // ERROR!

// Cannot cast unrelated types
int x = 10;
// char* ptr = static_cast<char*>(&x);  // ERROR!
```

---

## 7. dynamic_cast

Used for safe downcasting in polymorphic class hierarchies. Works only with pointers and references to classes with virtual functions.

### Syntax
```cpp
dynamic_cast<target_type>(expression)
```

### Requirements

1. Source class must have at least one virtual function
2. Used with polymorphic types
3. Performs runtime type checking

### Use Cases

#### 1. Safe Downcasting

```cpp
class Base
{
public:
    virtual ~Base() {}  // Virtual function required
};

class Derived : public Base
{
public:
    void derivedMethod() { cout << "Derived method" << endl; }
};

int main()
{
    Base* basePtr = new Derived();
    
    // Safe downcast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    
    if(derivedPtr != nullptr)
    {
        derivedPtr->derivedMethod();  // Safe to call
    }
    else
    {
        cout << "Cast failed!" << endl;
    }
    
    return 0;
}
```

#### 2. Runtime Type Checking

```cpp
class Animal
{
public:
    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    void bark() { cout << "Woof!" << endl; }
};

class Cat : public Animal
{
public:
    void meow() { cout << "Meow!" << endl; }
};

void makeSound(Animal* animal)
{
    // Try to cast to Dog
    Dog* dog = dynamic_cast<Dog*>(animal);
    if(dog)
    {
        dog->bark();
        return;
    }
    
    // Try to cast to Cat
    Cat* cat = dynamic_cast<Cat*>(animal);
    if(cat)
    {
        cat->meow();
        return;
    }
}

int main()
{
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    
    makeSound(animal1);  // Output: Woof!
    makeSound(animal2);  // Output: Meow!
    
    return 0;
}
```

#### 3. Reference Casting

```cpp
try
{
    Base& baseRef = derivedObj;
    Derived& derivedRef = dynamic_cast<Derived&>(baseRef);
    // Use derivedRef
}
catch(std::bad_cast& e)
{
    cout << "Cast failed: " << e.what() << endl;
}
```

### Return Values

- **Pointer cast**: Returns `nullptr` if cast fails
- **Reference cast**: Throws `std::bad_cast` exception if cast fails

### Performance Note

`dynamic_cast` has runtime overhead due to type checking. Use only when necessary.

---

## 8. const_cast

Used to add or remove `const` or `volatile` qualifiers.

### Syntax
```cpp
const_cast<target_type>(expression)
```

### Use Cases

#### 1. Removing const (Use with Extreme Caution!)

```cpp
void modifyValue(const int* ptr)
{
    // Remove const to modify
    int* modifiablePtr = const_cast<int*>(ptr);
    *modifiablePtr = 100;
}

int main()
{
    int x = 50;
    const int* constPtr = &x;
    
    modifyValue(constPtr);
    cout << x;  // Output: 100
    
    return 0;
}
```

#### 2. Working with Legacy APIs

```cpp
// Legacy function that doesn't use const (but doesn't modify)
void legacyFunction(char* str)
{
    cout << str << endl;
}

int main()
{
    const char* message = "Hello";
    
    // Remove const to call legacy function
    legacyFunction(const_cast<char*>(message));
    
    return 0;
}
```

#### 3. Adding const

```cpp
int x = 10;
int* ptr = &x;

// Add const
const int* constPtr = const_cast<const int*>(ptr);
```

### ⚠️ Warning: Undefined Behavior

Modifying a truly const object leads to undefined behavior!

```cpp
const int x = 10;  // Truly const
int* ptr = const_cast<int*>(&x);
*ptr = 20;  // UNDEFINED BEHAVIOR! May crash or produce unexpected results
```

### When to Use const_cast

- Working with legacy code that doesn't use const correctly
- Overloading functions (const and non-const versions)
- **Never** to modify truly const objects

---

## 9. reinterpret_cast

Most dangerous cast. Reinterprets bit pattern of one type as another type.

### Syntax
```cpp
reinterpret_cast<target_type>(expression)
```

### Use Cases

#### 1. Pointer to Integer Conversion

```cpp
int x = 42;
int* ptr = &x;

// Convert pointer to integer
uintptr_t address = reinterpret_cast<uintptr_t>(ptr);
cout << "Address: " << address << endl;

// Convert back to pointer
int* newPtr = reinterpret_cast<int*>(address);
cout << *newPtr;  // Output: 42
```

#### 2. Unrelated Pointer Types

```cpp
int x = 65;
int* intPtr = &x;

// Reinterpret int* as char*
char* charPtr = reinterpret_cast<char*>(intPtr);
cout << *charPtr;  // Output: 'A' (ASCII 65)
```

#### 3. Function Pointer Casting

```cpp
void myFunction() { cout << "Hello!" << endl; }

int main()
{
    void (*funcPtr)() = myFunction;
    
    // Convert to void*
    void* voidPtr = reinterpret_cast<void*>(funcPtr);
    
    // Convert back
    void (*newFuncPtr)() = reinterpret_cast<void(*)()>(voidPtr);
    newFuncPtr();  // Output: Hello!
    
    return 0;
}
```

#### 4. Low-Level Memory Manipulation

```cpp
struct Data
{
    int a;
    int b;
};

Data data = {10, 20};

// Treat struct as byte array
unsigned char* bytes = reinterpret_cast<unsigned char*>(&data);

for(size_t i = 0; i < sizeof(Data); i++)
{
    cout << static_cast<int>(bytes[i]) << " ";
}
```

### ⚠️ Extreme Caution Required

- **Platform-dependent** - Results may vary across systems
- **No type safety** - Compiler can't check correctness
- **Undefined behavior** - Easy to cause crashes
- **Use only when absolutely necessary**

### When to Use reinterpret_cast

- Low-level system programming
- Hardware interfacing
- Network programming (byte order conversion)
- Memory-mapped I/O
- **Avoid in application-level code**

---

## 10. Type Promotion

Automatic conversion of smaller types to larger types in expressions.

### Integer Promotion

Types smaller than `int` are promoted to `int` in expressions.

```cpp
char a = 10;
char b = 20;
char c = a + b;  // a and b promoted to int, then result converted back to char

short x = 100;
short y = 200;
int z = x + y;  // x and y promoted to int
```

### Usual Arithmetic Conversions

When operands have different types, they're converted to a common type.

```cpp
int a = 5;
double b = 2.5;
double result = a + b;  // a promoted to double

float f = 3.14f;
int i = 2;
float res = f * i;  // i promoted to float

long long ll = 1000LL;
int x = 10;
long long result = ll + x;  // x promoted to long long
```

### Promotion Rules

```
1. If either operand is long double → convert both to long double
2. Else if either is double → convert both to double
3. Else if either is float → convert both to float
4. Else perform integer promotions
5. If either is unsigned long long → convert both to unsigned long long
6. ... (continues down the hierarchy)
```

---

## 11. Narrowing vs Widening Conversion

### Widening Conversion (Safe)

Converting from smaller to larger type - no data loss.

```cpp
// Safe conversions
int x = 100;
long long y = x;  // int → long long

float f = 3.14f;
double d = f;  // float → double

char ch = 'A';
int ascii = ch;  // char → int

short s = 1000;
int i = s;  // short → int
```

### Narrowing Conversion (Potentially Unsafe)

Converting from larger to smaller type - may lose data.

```cpp
// Potentially unsafe conversions
double pi = 3.14159;
int x = pi;  // x = 3 (decimal lost)

int large = 300;
char ch = large;  // Overflow! (char: -128 to 127)

long long big = 9223372036854775807LL;
int small = big;  // Data loss!

float f = 3.14159265359f;
int i = f;  // i = 3 (decimal lost)
```

### Detecting Narrowing

```cpp
// C++11 uniform initialization prevents narrowing
int x = 3.14;  // OK (implicit conversion)
int y{3.14};   // ERROR! Narrowing not allowed

double d = 1000.5;
int a = d;     // OK (with warning)
int b{d};      // ERROR! Narrowing not allowed
```

---

## 12. Best Practices

### 1. Prefer C++ Style Casts Over C-Style

```cpp
// Bad
int x = (int)3.14;

// Good
int x = static_cast<int>(3.14);
```

**Why?**
- Easier to search in code
- Clear intent
- Compile-time checking
- Type safety

### 2. Use static_cast for Most Conversions

```cpp
double pi = 3.14159;
int x = static_cast<int>(pi);

int a = 5, b = 2;
double result = static_cast<double>(a) / b;
```

### 3. Use dynamic_cast for Polymorphic Types

```cpp
Base* basePtr = getObject();
Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);

if(derivedPtr)
{
    // Safe to use derivedPtr
}
```

### 4. Avoid const_cast Unless Necessary

```cpp
// Bad - modifying const object
const int x = 10;
int* ptr = const_cast<int*>(&x);
*ptr = 20;  // UNDEFINED BEHAVIOR!

// OK - working with legacy API
void legacyFunc(char* str);
const char* message = "Hello";
legacyFunc(const_cast<char*>(message));  // If legacyFunc doesn't modify
```

### 5. Avoid reinterpret_cast in Application Code

```cpp
// Bad - unnecessary and dangerous
int x = 42;
char* ptr = reinterpret_cast<char*>(&x);

// Good - use appropriate cast
double d = 3.14;
int i = static_cast<int>(d);
```

### 6. Be Explicit About Narrowing Conversions

```cpp
// Implicit (may cause warnings)
double d = 3.14;
int x = d;

// Explicit (shows intent)
double d = 3.14;
int x = static_cast<int>(d);  // Clear that data loss is intentional
```

### 7. Check dynamic_cast Results

```cpp
// Bad
Derived* d = dynamic_cast<Derived*>(basePtr);
d->method();  // May crash if d is nullptr!

// Good
Derived* d = dynamic_cast<Derived*>(basePtr);
if(d)
{
    d->method();  // Safe
}
```

### 8. Use Uniform Initialization to Prevent Narrowing

```cpp
// May lose data silently
int x = 3.14;  // x = 3

// Prevents narrowing
int y{3.14};  // Compile error!
```

---

## 🎯 Comparison Table

| Cast Type | Safety | Speed | Use Case |
|-----------|--------|-------|----------|
| Implicit | Medium | Fast | Automatic conversions |
| C-style | Low | Fast | Legacy code (avoid) |
| `static_cast` | High | Fast | Most conversions |
| `dynamic_cast` | High | Slow | Polymorphic downcasting |
| `const_cast` | Low | Fast | Const manipulation |
| `reinterpret_cast` | Very Low | Fast | Low-level operations |

---

## 🎯 Quick Reference

### When to Use Which Cast?

```cpp
// Numeric conversions
int x = static_cast<int>(3.14);

// Polymorphic downcasting
Derived* d = dynamic_cast<Derived*>(basePtr);

// Remove const (rarely needed)
int* ptr = const_cast<int*>(constPtr);

// Low-level pointer manipulation (avoid)
char* bytes = reinterpret_cast<char*>(&data);
```

---

## 📝 Practice Problems

1. Convert a double to int and explain what happens to the decimal part
2. What's the difference between `static_cast` and `dynamic_cast`?
3. Why is `reinterpret_cast` dangerous?
4. Write code to safely downcast a base pointer to derived pointer
5. What happens when you cast a large int to a char?
6. Explain type promotion in the expression: `char a = 10; int b = a + 5;`
7. When should you use `const_cast`?
8. What's wrong with: `const int x = 10; int* p = (int*)&x; *p = 20;`?

---

## 🔗 Related Topics

- [Variables](../Variables/README.md)
- [Operators](../Operators/README.md)
- [Input/Output](../Inputs/README.md)
- Pointers and References
- Object-Oriented Programming
- Templates

---

**Happy Learning! 🚀**
