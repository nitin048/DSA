# 🎯 Pointers & References - Quick Reference

**Essential for C++ interviews!** 💪

---

## 📋 What are Pointers?

### **Definition:**

A pointer is a **variable that stores the memory address** of another variable. Pointers allow direct memory manipulation and are fundamental to C++.

### **Why Use Pointers?**

- ✅ **Dynamic memory allocation** - Create variables at runtime
- ✅ **Efficient parameter passing** - Pass large objects without copying
- ✅ **Data structures** - Linked lists, trees, graphs
- ✅ **Polymorphism** - Base class pointers to derived objects
- ✅ **Low-level programming** - Direct memory access

### **Memory Address:**

```
Memory:
┌─────────┬─────────┬─────────┬─────────┐
│ Address │ 0x1000  │ 0x1004  │ 0x1008  │
├─────────┼─────────┼─────────┼─────────┤
│ Value   │   10    │   20    │   30    │
└─────────┴─────────┴─────────┴─────────┘

int x = 10;        // x is at address 0x1000
int* ptr = &x;     // ptr stores 0x1000
```

---

## 📋 Pointers Basics

### **Declaration and Initialization:**

```cpp
int x = 10;
int* ptr = &x;      // Pointer to x
int** pptr = &ptr;  // Pointer to pointer

// Pointer operations
cout << x;          // 10 (value of x)
cout << &x;         // 0x1000 (address of x)
cout << ptr;        // 0x1000 (address stored in ptr)
cout << *ptr;       // 10 (value at address)
```

### **Operators:**

```cpp
int* ptr = &x;      // & = Address-of operator
int value = *ptr;   // * = Dereference operator
ptr = nullptr;      // Null pointer (C++11)
```

### **Visualization:**

```
int x = 10;
int* ptr = &x;

Memory:
┌──────────┬──────────┐
│ Variable │  Value   │
├──────────┼──────────┤
│ x        │    10    │ ← Address: 0x1000
│ ptr      │  0x1000  │ ← Stores address of x
└──────────┴──────────┘

*ptr = 20;  // Changes x to 20
```

---

## 🎯 Pointer Arithmetic

### **Theory:**

Pointers can be incremented/decremented to navigate through memory.

```cpp
int arr[] = {1, 2, 3, 4, 5};
int* ptr = arr;     // Points to arr[0]

ptr++;              // Move to next element (arr[1])
ptr--;              // Move to previous element (arr[0])
ptr += 2;           // Move 2 elements forward (arr[2])
int diff = ptr2 - ptr1;  // Distance between pointers
```

### **How It Works:**

```
Array: [1, 2, 3, 4, 5]
       ↑
       ptr (address 0x1000)

ptr++:
Array: [1, 2, 3, 4, 5]
          ↑
          ptr (address 0x1004)

Note: Increments by sizeof(int) = 4 bytes
```

### **Array and Pointer Relationship:**

```cpp
int arr[5] = {1, 2, 3, 4, 5};
int* ptr = arr;

// These are equivalent:
arr[i]  ≡  *(arr + i)  ≡  *(ptr + i)  ≡  ptr[i]

// Example:
arr[2]  ≡  *(arr + 2)  // Both give 3
```

---

## 🔗 References

### **Definition:**

A reference is an **alias** (another name) for an existing variable. Once initialized, it cannot be changed to refer to another variable.

### **Declaration:**

```cpp
int x = 10;
int& ref = x;       // Reference to x (alias)
ref = 20;           // x is now 20
```

### **Visualization:**

```
int x = 10;
int& ref = x;

Memory:
┌──────────┬──────────┐
│ Variable │  Value   │
├──────────┼──────────┤
│ x        │    10    │ ← Address: 0x1000
│ ref      │  (alias) │ ← Same address: 0x1000
└──────────┴──────────┘

ref and x are the SAME variable!
```

---

## 🎯 Pointers vs References

### **Key Differences:**

| Feature           | Pointer         | Reference        |
| ----------------- | --------------- | ---------------- |
| Can be null       | Yes (`nullptr`) | No               |
| Can be reassigned | Yes             | No               |
| Syntax            | `*ptr`          | `ref`            |
| Memory            | Has own address | Same as original |
| Initialization    | Optional        | Required         |
| Arithmetic        | Yes             | No               |

### **Example:**

```cpp
int x = 10, y = 20;

// Pointer
int* ptr = &x;      // Points to x
*ptr = 15;          // x = 15
ptr = &y;           // Now points to y (reassigned)
*ptr = 25;          // y = 25

// Reference
int& ref = x;       // Alias for x
ref = 15;           // x = 15
ref = y;            // x = 20 (copies value, doesn't rebind!)
```

**Important:** References cannot be rebound!

```cpp
int x = 10, y = 20;
int& ref = x;
ref = y;  // This copies y's value to x, doesn't rebind ref!
```

---

## 💡 Common Patterns

### **1. Pass by Pointer:**

```cpp
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int x = 5, y = 10;
swap(&x, &y);  // x=10, y=5
```

### **2. Pass by Reference:**

```cpp
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int x = 5, y = 10;
swap(x, y);  // x=10, y=5
```

### **3. Return by Reference:**

```cpp
int& getElement(vector<int>& arr, int index) {
    return arr[index];
}

vector<int> v = {1, 2, 3};
getElement(v, 0) = 10;  // v[0] = 10
```

### **4. Const Pointers:**

```cpp
const int* ptr1;        // Pointer to const int
int* const ptr2;        // Const pointer to int
const int* const ptr3;  // Const pointer to const int
```

---

## 🎯 Dynamic Memory

### **Allocation:**

```cpp
// Single variable
int* ptr = new int;
int* ptr = new int(10);

// Array
int* arr = new int[5];
int* arr = new int[5]{1, 2, 3, 4, 5};

// Deallocation
delete ptr;
delete[] arr;
```

### **Memory Leaks:**

```cpp
// ❌ Memory leak
void leak() {
    int* ptr = new int(10);
    // Forgot to delete!
}

// ✅ Proper cleanup
void noLeak() {
    int* ptr = new int(10);
    delete ptr;
}
```

---

## 🔥 Smart Pointers (C++11)

### **unique_ptr:**

```cpp
#include <memory>

unique_ptr<int> ptr = make_unique<int>(10);
// Automatically deleted when out of scope
// Cannot be copied, only moved
```

### **shared_ptr:**

```cpp
shared_ptr<int> ptr1 = make_shared<int>(10);
shared_ptr<int> ptr2 = ptr1;  // Reference count = 2
// Deleted when last reference goes out of scope
```

### **weak_ptr:**

```cpp
shared_ptr<int> sptr = make_shared<int>(10);
weak_ptr<int> wptr = sptr;  // Doesn't increase ref count
// Used to break circular references
```

---

## 💡 Interview Questions

### **Q1: Pointer vs Reference?**

- **Pointer:** Can be null, reassignable, needs dereferencing
- **Reference:** Cannot be null, cannot be reassigned, cleaner syntax

### **Q2: When to use pointers?**

- Dynamic memory allocation
- Polymorphism (base class pointers)
- Optional parameters (can be null)
- Need to reassign

### **Q3: When to use references?**

- Function parameters (avoid copying)
- Return values (avoid copying)
- Operator overloading
- Cleaner syntax

### **Q4: What is nullptr?**

```cpp
int* ptr = nullptr;  // C++11 null pointer
// Better than NULL or 0
```

### **Q5: Dangling pointer?**

```cpp
int* ptr = new int(10);
delete ptr;
// ptr is now dangling (points to freed memory)
ptr = nullptr;  // Good practice
```

---

## 🎯 Common Mistakes

### **1. Uninitialized Pointer:**

```cpp
// ❌ Bad
int* ptr;
*ptr = 10;  // Undefined behavior!

// ✅ Good
int* ptr = nullptr;
if (ptr) *ptr = 10;
```

### **2. Memory Leak:**

```cpp
// ❌ Bad
int* ptr = new int(10);
ptr = new int(20);  // Lost reference to first allocation!

// ✅ Good
int* ptr = new int(10);
delete ptr;
ptr = new int(20);
```

### **3. Double Delete:**

```cpp
// ❌ Bad
int* ptr = new int(10);
delete ptr;
delete ptr;  // Undefined behavior!

// ✅ Good
int* ptr = new int(10);
delete ptr;
ptr = nullptr;
```

### **4. Returning Local Address:**

```cpp
// ❌ Bad
int* getPointer() {
    int x = 10;
    return &x;  // x destroyed after function!
}

// ✅ Good
int* getPointer() {
    return new int(10);  // Heap allocation
}
```

---

## 🔥 Must Remember

1. **Always initialize pointers** (nullptr if nothing else)
2. **Delete what you new** (or use smart pointers)
3. **Set to nullptr after delete**
4. **Use references for function parameters**
5. **Prefer smart pointers over raw pointers**

---

**Next:** [OOP →](04-OOP.md)
