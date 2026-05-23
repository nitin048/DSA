# 🏗️ Object-Oriented Programming - Quick Reference

**OOP concepts for interviews!** 🎯

---

## 📋 What is OOP?

### **Definition:**

Object-Oriented Programming (OOP) is a programming paradigm based on the concept of **"objects"** which contain **data** (attributes) and **code** (methods). OOP organizes software design around data and objects rather than functions and logic.

### **Why Use OOP?**

- ✅ **Modularity** - Code organized into self-contained objects
- ✅ **Reusability** - Objects can be reused across programs
- ✅ **Maintainability** - Easier to modify and debug
- ✅ **Scalability** - Better for large, complex systems
- ✅ **Real-world modeling** - Maps to real-world entities

### **Key Concepts:**

- **Class** - Blueprint/template for objects
- **Object** - Instance of a class
- **Attributes** - Data members (variables)
- **Methods** - Member functions (behavior)

---

## 📋 Four Pillars of OOP

### **1. Encapsulation** 📦

**Theory:**
Bundling data and methods that operate on that data within a single unit (class), and restricting direct access to some components.

**Benefits:**

- Data hiding (security)
- Controlled access via getters/setters
- Internal implementation can change without affecting users

```cpp
class BankAccount {
private:
    double balance;  // Hidden from outside
    string accountNumber;

public:
    // Controlled access
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    double getBalance() const {
        return balance;
    }

    // Can't directly access balance from outside
};

// Usage
BankAccount acc;
// acc.balance = 1000000;  // ❌ Error! Private
acc.deposit(1000);         // ✅ Controlled access
```

**Why Encapsulation?**

```
Without Encapsulation:
acc.balance = -1000;  // Invalid state!

With Encapsulation:
acc.deposit(-1000);   // Validation prevents invalid state
```

---

### **2. Inheritance** 🌳

**Theory:**
Mechanism where a new class (derived/child) inherits properties and behavior from an existing class (base/parent).

**Benefits:**

- Code reuse
- Hierarchical classification
- Extensibility

```cpp
// Base class
class Animal {
protected:
    string name;
public:
    Animal(string n) : name(n) {}

    void eat() {
        cout << name << " is eating..." << endl;
    }

    virtual void makeSound() {
        cout << "Some generic sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}

    void bark() {
        cout << name << " says Woof!" << endl;
    }

    // Override base class method
    void makeSound() override {
        cout << "Woof! Woof!" << endl;
    }
};

// Usage
Dog d("Buddy");
d.eat();        // Inherited from Animal
d.bark();       // Own method
d.makeSound();  // Overridden method
```

**Inheritance Hierarchy:**

```
        Animal
       /      \
     Dog      Cat
    /   \
  Puppy  Bulldog
```

---

### **3. Polymorphism** 🎭

**Theory:**
Ability of objects to take multiple forms. Same interface, different implementations.

**Types:**

1. **Compile-time (Static)** - Function/Operator overloading
2. **Runtime (Dynamic)** - Virtual functions

**Compile-time Polymorphism:**

```cpp
class Math {
public:
    // Function overloading
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

Math m;
m.add(1, 2);        // Calls int version
m.add(1.5, 2.5);    // Calls double version
m.add(1, 2, 3);     // Calls 3-parameter version
```

**Runtime Polymorphism:**

```cpp
class Shape {
public:
    virtual double area() = 0;  // Pure virtual
    virtual void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }

    void draw() override {
        cout << "Drawing circle" << endl;
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        return width * height;
    }

    void draw() override {
        cout << "Drawing rectangle" << endl;
    }
};

// Usage - Polymorphism in action!
Shape* shapes[2];
shapes[0] = new Circle(5);
shapes[1] = new Rectangle(4, 6);

for (int i = 0; i < 2; i++) {
    shapes[i]->draw();    // Calls appropriate draw()
    cout << "Area: " << shapes[i]->area() << endl;
}
```

**Why Polymorphism?**

```
Without polymorphism:
if (type == CIRCLE) circle.draw();
else if (type == RECTANGLE) rectangle.draw();
// Need to modify code for each new shape!

With polymorphism:
shape->draw();  // Works for any shape!
// No code changes needed for new shapes
```

---

### **4. Abstraction** 🎨

**Theory:**
Hiding complex implementation details and showing only essential features.

**Benefits:**

- Reduces complexity
- Focuses on what object does, not how
- Easier to understand and use

```cpp
// Abstract class (interface)
class Database {
public:
    virtual void connect() = 0;
    virtual void query(string sql) = 0;
    virtual void disconnect() = 0;
};

// Concrete implementation
class MySQL : public Database {
public:
    void connect() override {
        // MySQL-specific connection code
        cout << "Connecting to MySQL..." << endl;
    }

    void query(string sql) override {
        // MySQL-specific query execution
        cout << "Executing MySQL query: " << sql << endl;
    }

    void disconnect() override {
        cout << "Disconnecting from MySQL..." << endl;
    }
};

class MongoDB : public Database {
public:
    void connect() override {
        // MongoDB-specific connection code
        cout << "Connecting to MongoDB..." << endl;
    }

    void query(string sql) override {
        // MongoDB-specific query execution
        cout << "Executing MongoDB query: " << sql << endl;
    }

    void disconnect() override {
        cout << "Disconnecting from MongoDB..." << endl;
    }
};

// Usage - User doesn't need to know implementation details
void performDatabaseOperations(Database* db) {
    db->connect();
    db->query("SELECT * FROM users");
    db->disconnect();
}

// Works with any database!
Database* db1 = new MySQL();
Database* db2 = new MongoDB();
performDatabaseOperations(db1);
performDatabaseOperations(db2);
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

## 📊 Complexity Analysis

### **Virtual Function Call:**

```cpp
// Direct call: O(1)
obj.method();

// Virtual call: O(1) but slightly slower
// Uses vtable lookup
basePtr->virtualMethod();
```

### **Memory:**

- **Object size:** Sum of all member variables + vtable pointer (if has virtual functions)
- **Vtable:** One per class with virtual functions

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Virtual destructor** for base classes with virtual functions
2. **Pure virtual** function makes class abstract
3. **Override** keyword for clarity and safety
4. **Initialization lists** for efficiency
5. **Rule of three/five** for resource management

### **Common Mistakes:**

- ❌ Forgetting virtual destructor in base class
- ❌ Slicing (assigning derived to base by value)
- ❌ Not using override keyword
- ❌ Calling virtual functions in constructor/destructor
- ❌ Multiple inheritance without virtual inheritance (diamond problem)

### **Best Practices:**

- ✅ Use virtual destructor in polymorphic base classes
- ✅ Prefer composition over inheritance
- ✅ Use override keyword
- ✅ Make interfaces (abstract classes) with pure virtual functions
- ✅ Follow SOLID principles

---

## 🎓 SOLID Principles

### **S - Single Responsibility:**

A class should have only one reason to change.

### **O - Open/Closed:**

Open for extension, closed for modification.

### **L - Liskov Substitution:**

Derived classes must be substitutable for base classes.

### **I - Interface Segregation:**

Many specific interfaces better than one general interface.

### **D - Dependency Inversion:**

Depend on abstractions, not concretions.

---

**Next:** [STL →](05-STL.md)
