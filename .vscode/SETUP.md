# VS Code C++ Setup Guide

This document explains the C++ development environment configuration for this repository.

---

## 📁 Configuration Files

### 1. `c_cpp_properties.json`
Configures IntelliSense and compile-time error detection.

**Features:**
- ✅ Real-time error detection
- ✅ Code completion
- ✅ Syntax highlighting
- ✅ C++17 standard
- ✅ Compiler warnings enabled

**Compiler Flags:**
- `-Wall` - Enable all warnings
- `-Wextra` - Enable extra warnings
- `-Wpedantic` - Strict ISO C++ compliance

### 2. `settings.json`
Workspace-specific VS Code settings.

**Features:**
- ✅ Error squiggles enabled
- ✅ IntelliSense engine configured
- ✅ Code Runner integration
- ✅ Auto-hide compiled files (.o, .out, .exe)

### 3. `cpp.code-snippets`
Custom code snippets for quick C++ development.

See [SNIPPETS.md](SNIPPETS.md) for complete list of shortcuts.

---

## 🔧 Prerequisites

### macOS (Current Setup)

1. **Install Xcode Command Line Tools**
   ```bash
   xcode-select --install
   ```

2. **Verify Compiler Installation**
   ```bash
   clang++ --version
   ```
   
   Should output something like:
   ```
   Apple clang version 14.0.0 (clang-1400.0.29.202)
   ```

3. **Install VS Code Extensions**
   - **C/C++** (Microsoft) - Required
   - **C/C++ Extension Pack** (Microsoft) - Recommended
   - **Code Runner** - Optional (for quick testing)

---

## ✅ Features Enabled

### 1. Real-Time Error Detection

Errors and warnings appear as you type:

```cpp
int main()
{
    int x = "hello";  // ❌ Error: cannot initialize int with string
    cout << x;        // ❌ Error: cout not declared (missing #include)
    return 0;
}
```

### 2. Compiler Warnings

Common issues are highlighted:

```cpp
int main()
{
    int x;           // ⚠️ Warning: variable 'x' is uninitialized
    cout << x;
    
    int y = 10;      // ⚠️ Warning: unused variable 'y'
    
    return 0;
}
```

### 3. IntelliSense

- Auto-completion for functions, variables, and types
- Parameter hints
- Quick info on hover
- Go to definition (Cmd + Click)

### 4. Code Runner Integration

Run C++ files quickly:
- Click the ▶️ button in top-right
- Or press `Ctrl + Alt + N`
- Or right-click → "Run Code"

Compiles with: `g++ -std=c++17 -Wall -Wextra file.cpp -o output`

---

## 🎯 Compiler Standards

### C++ Standard: C++17

Features available:
- Structured bindings
- `if` with initializer
- Inline variables
- `std::optional`, `std::variant`, `std::any`
- Fold expressions
- Class template argument deduction

### Upgrade to C++20 (Optional)

To use C++20 features, update both files:

**c_cpp_properties.json:**
```json
"cppStandard": "c++20"
```

**settings.json:**
```json
"C_Cpp.default.cppStandard": "c++20",
"C_Cpp.default.compilerArgs": [
    "-Wall",
    "-Wextra",
    "-Wpedantic",
    "-std=c++20"
]
```

---

## 🔍 Troubleshooting

### Error Squiggles Not Showing

1. **Check if C/C++ extension is installed**
   - Open Extensions (Cmd + Shift + X)
   - Search for "C/C++"
   - Install if not present

2. **Reload VS Code**
   - Cmd + Shift + P
   - Type "Reload Window"
   - Press Enter

3. **Check compiler path**
   ```bash
   which clang++
   ```
   
   Update `compilerPath` in `c_cpp_properties.json` if different.

### IntelliSense Not Working

1. **Check IntelliSense status**
   - Look at bottom-right status bar
   - Should show "C/C++: Ready"

2. **Reset IntelliSense**
   - Cmd + Shift + P
   - Type "C/C++: Reset IntelliSense Database"
   - Press Enter

3. **Check configuration**
   - Cmd + Shift + P
   - Type "C/C++: Edit Configurations (UI)"
   - Verify settings

### Code Runner Not Working

1. **Install Code Runner extension**
   - Extensions → Search "Code Runner"
   - Install by Jun Han

2. **Check terminal settings**
   - Ensure `"code-runner.runInTerminal": true` in settings.json

3. **Verify compiler**
   ```bash
   g++ --version
   ```

---

## 📝 Compiler Warning Flags Explained

| Flag | Description |
|------|-------------|
| `-Wall` | Enables most warning messages |
| `-Wextra` | Enables additional warnings not covered by -Wall |
| `-Wpedantic` | Issues warnings for code that doesn't conform to ISO C++ |
| `-std=c++17` | Use C++17 standard |
| `-Werror` | Treat all warnings as errors (optional, not enabled) |

### Common Warnings Detected

```cpp
// Uninitialized variable
int x;
cout << x;  // ⚠️ Warning: 'x' is used uninitialized

// Unused variable
int y = 10;  // ⚠️ Warning: unused variable 'y'

// Comparison between signed and unsigned
int a = -1;
unsigned int b = 5;
if(a < b) { }  // ⚠️ Warning: comparison between signed and unsigned

// Missing return statement
int getNumber()
{
    int x = 10;
    // ⚠️ Warning: control reaches end of non-void function
}

// Implicit conversion with data loss
double d = 3.14;
int i = d;  // ⚠️ Warning: implicit conversion loses precision
```

---

## 🚀 Quick Start

1. **Open any .cpp file**
2. **Start typing** - IntelliSense will suggest completions
3. **See errors in real-time** - Red squiggles for errors, yellow for warnings
4. **Hover over errors** - See detailed error messages
5. **Run code** - Click ▶️ or use Code Runner

---

## 🎨 Customization

### Disable Specific Warnings

Add to `compilerArgs` in settings.json:

```json
"-Wno-unused-variable",    // Disable unused variable warnings
"-Wno-sign-compare",       // Disable signed/unsigned comparison warnings
```

### Enable More Warnings

```json
"-Wshadow",                // Warn about variable shadowing
"-Wconversion",            // Warn about implicit conversions
"-Wfloat-equal",           // Warn about floating-point equality comparisons
```

### Change C++ Standard

For older code (C++11):
```json
"cppStandard": "c++11",
"-std=c++11"
```

For newer features (C++20):
```json
"cppStandard": "c++20",
"-std=c++20"
```

---

## 📚 Additional Resources

- [VS Code C++ Documentation](https://code.visualstudio.com/docs/languages/cpp)
- [C++ Reference](https://en.cppreference.com/)
- [GCC Warning Options](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
- [Clang Compiler Flags](https://clang.llvm.org/docs/ClangCommandLineReference.html)

---

## 🔗 Related Files

- [SNIPPETS.md](SNIPPETS.md) - Code snippets documentation
- [c_cpp_properties.json](c_cpp_properties.json) - IntelliSense configuration
- [settings.json](settings.json) - Workspace settings

---

**Happy Coding! 🚀**
