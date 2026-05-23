# 🏗️ Object-Oriented Programming - Quick Reference

**OOP concepts for interviews!** 🎯

---

## 📋 Four Pillars of OOP

### **1. Encapsulation** 📦

```cpp
class BankAccount {
private:
    double balance;  // Hidden from outside

public:
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    double getBalance() {
        return balance;
    }
};
```

### **2. Inheritance** 🌳

```cpp
class Animal {
public:
    void eat() { cout << "Eating..."; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Woof!"; }
};

Dog d;
d.eat();   // Inherited
d.bark();  // Own method
```

### **3. Polymorphism** 🎭

```cpp
class Shape {
public:
    virtual double area() = 0;  // Pure virtual
};

class Circle : public Shape {
    double radius;
public:
    double area() override {
        return 3.14 * radius * radius;
    }
};

Shape* s = new Circle();
s->area();  // Calls Circle's area()
```

### **4. Abstraction** 🎨

```cpp
class Database {
public:
    virtual void connect() = 0;
    virtual void query(string sql) = 0;
};

class MySQL : public Database {
public:
    void connect() override { /* MySQL specific */ }
    void query(string sql) override { /* MySQL specific */ }
};
```

---

## 🎯 Class Basics

### **Class Definition:**

```cpp
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Destructor
    ~Person() { cout << "Destroyed"; }

    // Getter
    string getName() { return name; }

    // Setter
    void setAge(int a) { age = a; }
};
```

### **Access Specifiers:**

```cpp
class Example {
private:    // Only accessible within class
    int x;

protected:  // Accessible in derived classes
    int y;

public:     // Accessible everywhere
    int z;
};
```

---

## 🔄 Constructors & Destructors

### **Types of Constructors:**

```cpp
class MyClass {
public:
    // Default constructor
    MyClass() {}

    // Parameterized constructor
    MyClass(int x) : value(x) {}

    // Copy constructor
    MyClass(const MyClass& other) : value(other.value) {}

    // Move constructor (C++11)
    MyClass(MyClass&& other) : value(other.value) {
        other.value = 0;
    }

private:
    int value;
};
```

### **Destructor:**

```cpp
class Resource {
public:
    Resource() {
        data = new int[100];
    }

    ~Resource() {
        delete[] data;  // Cleanup
    }

private:
    int* data;
};
```

---

## 🌳 Inheritance

### **Types:**

```cpp
// Public inheritance
class Derived : public Base {};

// Protected inheritance
class Derived : protected Base {};

// Private inheritance
class Derived : private Base {};
```

### **Multiple Inheritance:**

```cpp
class A {
public:
    void funcA() {}
};

class B {
public:
    void funcB() {}
};

class C : public A, public B {
public:
    void funcC() {
        funcA();  // From A
        funcB();  // From B
    }
};
```

---

## 🎭 Polymorphism

### **Compile-time (Function Overloading):**

```cpp
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};
```

### **Runtime (Virtual Functions):**

```cpp
class Base {
public:
    virtual void show() {
        cout << "Base";
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived";
    }
};

Base* ptr = new Derived();
ptr->show();  // Output: "Derived"
```

### **Pure Virtual Functions:**

```cpp
class Interface {
public:
    virtual void method() = 0;  // Pure virtual
};

class Implementation : public Interface {
public:
    void method() override {
        // Must implement
    }
};
```

---

## 💡 Interview Questions

### **Q1: What is virtual destructor?**

```cpp
class Base {
public:
    virtual ~Base() {}  // Virtual destructor
};

class Derived : public Base {
public:
    ~Derived() {}
};

Base* ptr = new Derived();
delete ptr;  // Calls both destructors
```

### **Q2: What is abstract class?**

```cpp
// Class with at least one pure virtual function
class Abstract {
public:
    virtual void pureVirtual() = 0;
    void concrete() {}
};

// Cannot instantiate:
// Abstract a;  // Error!
```

### **Q3: Constructor in inheritance order?**

```cpp
class Base {
public:
    Base() { cout << "Base "; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived "; }
};

Derived d;  // Output: "Base Derived"
```

### **Q4: What is diamond problem?**

```cpp
class A { public: void func() {} };
class B : public A {};
class C : public A {};
class D : public B, public C {};

D d;
// d.func();  // Ambiguous!

// Solution: Virtual inheritance
class B : virtual public A {};
class C : virtual public A {};
```

---

## 🔥 Best Practices

### **1. Use Initialization Lists:**

```cpp
// ✅ Good
class MyClass {
public:
    MyClass(int x) : value(x) {}
private:
    int value;
};

// ❌ Bad
class MyClass {
public:
    MyClass(int x) { value = x; }
private:
    int value;
};
```

### **2. Rule of Three/Five:**

```cpp
class MyClass {
public:
    // If you define one, define all three:
    MyClass(const MyClass&);           // Copy constructor
    MyClass& operator=(const MyClass&); // Copy assignment
    ~MyClass();                         // Destructor

    // C++11: Rule of Five adds:
    MyClass(MyClass&&);                 // Move constructor
    MyClass& operator=(MyClass&&);      // Move assignment
};
```

### **3. Use override keyword:**

```cpp
class Base {
public:
    virtual void func() {}
};

class Derived : public Base {
public:
    void func() override {}  // Explicit override
};
```

---

## 🎯 Common Patterns

### **Singleton:**

```cpp
class Singleton {
private:
    static Singleton* instance;
    Singleton() {}  // Private constructor

public:
    static Singleton* getInstance() {
        if (!instance)
            instance = new Singleton();
        return instance;
    }
};
```

### **Factory:**

```cpp
class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {}
};

class ShapeFactory {
public:
    static Shape* createShape(string type) {
        if (type == "circle")
            return new Circle();
        return nullptr;
    }
};
```

---

## 🔥 Must Remember

1. **Virtual destructor** for base classes
2. **Pure virtual** = abstract class
3. **Override** keyword for clarity
4. **Initialization lists** for efficiency
5. **Rule of three/five** for resource management

---

**Next:** [STL →](05-STL.md)
