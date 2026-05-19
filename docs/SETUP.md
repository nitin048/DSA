# DSA Repository - Quick Setup Guide

Welcome! This repository is fully configured for C++ development. Follow these simple steps to get started.

---

## 🚀 Quick Start (3 Steps)

### Step 1: Clone the Repository

```bash
git clone https://github.com/nitin048/DSA.git
cd DSA
```

### Step 2: Run Setup Script

```bash
./setup.sh
```

This will automatically:

- ✅ Install clangd (IntelliSense)
- ✅ Install clang-format (Code formatting)
- ✅ Install Kiro extensions
- ✅ Verify everything is working

### Step 3: Open in Kiro

```bash
kiro .
```

**That's it! Everything will work automatically!** 🎉

---

## ✨ What You Get:

### IntelliSense (Auto-completion)

- Type `std::` and see suggestions
- Hover over code for documentation
- Real-time error detection

### Auto-Formatting

- Press **Cmd + S** (Save) - code auto-formats
- Consistent code style
- Based on Google C++ Style Guide

### Code Snippets

- `cpp` + Tab → Full C++ boilerplate
- `if`, `for`, `while` + Tab → Control structures
- 30+ shortcuts available

### Error Detection

- Red squiggles for errors
- Warnings and suggestions
- Compile-time error checking

---

## 📋 Prerequisites

### macOS (Recommended)

- **Xcode Command Line Tools**

  ```bash
  xcode-select --install
  ```

- **Homebrew** (if not installed)

  ```bash
  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
  ```

- **Kiro IDE** (Download from [kiro.ai](https://kiro.ai))

### Linux

- **GCC/G++**

  ```bash
  sudo apt-get install build-essential  # Ubuntu/Debian
  sudo yum install gcc-c++              # CentOS/RHEL
  ```

- **LLVM/clangd**
  ```bash
  sudo apt-get install clangd-12  # Ubuntu/Debian
  ```

### Windows

- **MinGW-w64** or **MSVC**
- **LLVM** (Download from [llvm.org](https://llvm.org))

---

## 🔧 Manual Setup (If Script Fails)

### 1. Install LLVM/clangd

```bash
# macOS
brew install llvm

# Linux
sudo apt-get install clangd-12

# Windows
# Download from https://llvm.org
```

### 2. Install clang-format

```bash
# macOS
brew install clang-format

# Linux
sudo apt-get install clang-format

# Windows
# Included with LLVM
```

### 3. Install Kiro Extensions

```bash
kiro --install-extension llvm-vs-code-extensions.vscode-clangd
```

### 4. Restart Kiro

```bash
# Quit Kiro (Cmd + Q)
# Reopen Kiro
kiro .
```

---

## ✅ Verify Setup

After setup, test these features:

### Test 1: IntelliSense

1. Open any `.cpp` file
2. Type `std::`
3. ✅ Should see auto-completion suggestions

### Test 2: Formatting

1. Make code messy: `int main(){int x=10;return 0;}`
2. Press **Cmd + S** (Save)
3. ✅ Should auto-format

### Test 3: Error Detection

1. Type: `int x = "hello";`
2. ✅ Should see red squiggle

### Test 4: Code Snippets

1. Type `cpp` and press **Tab**
2. ✅ Should generate C++ boilerplate

---

## 📚 Documentation

- **[SNIPPETS.md](.vscode/SNIPPETS.md)** - All code snippets (30+)
- **[KIRO_FINAL_SETUP.md](KIRO_FINAL_SETUP.md)** - Detailed Kiro setup
- **[Variables Guide](C++/Variables/README.md)** - Learn about variables
- **[Operators Guide](C++/Operators/README.md)** - All C++ operators
- **[Input/Output Guide](C++/Inputs/README.md)** - I/O operations
- **[Conditional Statements](C++/Conditional_Stmt/README.md)** - If, switch, etc.

---

## 🎯 Keyboard Shortcuts

| Action                 | Shortcut                       |
| ---------------------- | ------------------------------ |
| **Auto-complete**      | Type and wait, or Ctrl + Space |
| **Format Document**    | Shift + Option + F             |
| **Save (auto-format)** | Cmd + S                        |
| **Go to Definition**   | Cmd + Click or F12             |
| **Find References**    | Shift + F12                    |
| **Rename Symbol**      | F2                             |

---

## 🛠️ Troubleshooting

### Issue: IntelliSense not working

**Solution:**

1. Restart Kiro (Cmd + Q, then reopen)
2. Wait 10-20 seconds after opening file (clangd indexing)
3. Check Output panel (View → Output → Select "clangd")

### Issue: Format on save not working

**Solution:**

1. Verify clang-format is installed: `clang-format --version`
2. Check settings: `.vscode/settings.json` has `"editor.formatOnSave": true`
3. Restart Kiro

### Issue: Extensions not installed

**Solution:**

```bash
# List installed extensions
kiro --list-extensions

# Install clangd extension
kiro --install-extension llvm-vs-code-extensions.vscode-clangd
```

### Issue: Compiler not found

**Solution:**

```bash
# Verify compiler
clang++ --version  # macOS
g++ --version      # Linux

# Install if missing
xcode-select --install  # macOS
sudo apt-get install build-essential  # Linux
```

---

## 🎓 Learning Path

1. **Start with basics:**
   - [Variables](C++/Variables/README.md)
   - [Operators](C++/Operators/README.md)
   - [Input/Output](C++/Inputs/README.md)

2. **Control flow:**
   - [Conditional Statements](C++/Conditional_Stmt/README.md)
   - Loops (coming soon)

3. **Data structures:**
   - Arrays
   - Linked Lists
   - Trees
   - Graphs

4. **Algorithms:**
   - Sorting
   - Searching
   - Dynamic Programming

---

## 🤝 Contributing

Contributions are welcome! To contribute:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Format code: `./format.sh`
5. Submit a pull request

---

## 📝 Configuration Files

This repository includes:

- **`.vscode/settings.json`** - Editor and clangd configuration
- **`.vscode/c_cpp_properties.json`** - C++ IntelliSense settings
- **`.vscode/extensions.json`** - Recommended extensions
- **`.vscode/cpp.code-snippets`** - Custom code snippets
- **`.clang-format`** - Code formatting rules
- **`compile_commands.json`** - Build configuration for clangd

All these files are tracked in git, so they work automatically when you clone!

---

## 🎯 What Makes This Repo Special

✅ **Zero Configuration** - Clone and start coding  
✅ **IntelliSense** - Auto-completion out of the box  
✅ **Auto-Formatting** - Code formats on save  
✅ **30+ Snippets** - Quick code generation  
✅ **Comprehensive Guides** - Learn while coding  
✅ **Cross-Platform** - Works on macOS, Linux, Windows

---

## 🆘 Need Help?

1. Check [KIRO_FINAL_SETUP.md](KIRO_FINAL_SETUP.md) for detailed setup
2. Check [TROUBLESHOOTING.md](.vscode/TROUBLESHOOTING.md) for common issues
3. Open an issue on GitHub
4. Check Output panel in Kiro (View → Output → clangd)

---

## ✅ Success Checklist

- [ ] Repository cloned
- [ ] Setup script run (`./setup.sh`)
- [ ] Kiro opened
- [ ] IntelliSense working (`std::` shows suggestions)
- [ ] Format on save working (Cmd + S formats code)
- [ ] Snippets working (`cpp` + Tab generates code)
- [ ] Error detection working (red squiggles appear)

---

## 🎉 You're Ready!

Everything is configured. Just:

1. Clone the repo
2. Run `./setup.sh`
3. Open in Kiro
4. Start coding!

**Happy Learning! 🚀**

---

## 📊 Repository Stats

- **Language:** C++17
- **Compiler:** clang++ / g++
- **IDE:** Kiro (VS Code-based)
- **IntelliSense:** clangd
- **Formatter:** clang-format
- **Style:** Google C++ Style Guide (4-space indent)

---

**Made with ❤️ for DSA learners**
