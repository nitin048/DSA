# VS Code Setup for DSA Repository

Welcome! This repository is pre-configured for C++ development in VS Code. Follow these steps to get started.

---

## 🚀 Quick Start (3 Steps)

### Step 1: Clone the Repository
```bash
git clone https://github.com/nitin048/DSA.git
cd DSA
```

### Step 2: Open in VS Code
```bash
code .
```

### Step 3: Install Recommended Extensions

When you open the workspace, VS Code will show this notification:

```
┌─────────────────────────────────────────────┐
│ 📦 This workspace has extension             │
│    recommendations.                         │
│                                             │
│  [Install All]  [Show Recommendations]     │
└─────────────────────────────────────────────┘
```

**Click "Install All"** - This will install:
- ✅ C/C++ (Microsoft) - IntelliSense, debugging
- ✅ C/C++ Extension Pack - Additional tools
- ✅ Code Runner - Run code with one click

**Then reload VS Code** (Cmd/Ctrl + Shift + P → "Reload Window")

---

## ✅ Verify Everything Works

### Test 1: IntelliSense
1. Open `C++/Operators/Calculator/calculator.cpp`
2. Type `std::` and wait
3. ✅ Should see suggestions: `cout`, `cin`, `vector`, etc.

### Test 2: Error Detection
1. Type: `int x = "hello";`
2. ✅ Should see red squiggle with error message

### Test 3: Code Snippets
1. In any `.cpp` file, type: `cpp` and press Tab
2. ✅ Should generate C++ boilerplate code

### Test 4: Run Code
1. Open any `.cpp` file
2. Click ▶️ button in top-right (or press Ctrl + Alt + N)
3. ✅ Code should compile and run in terminal

---

## 📋 What's Pre-Configured

### ✨ IntelliSense Features
- **Auto-completion** - Type `std::` to see suggestions
- **Parameter hints** - See function signatures as you type
- **Hover information** - Hover over variables/functions for info
- **Go to definition** - Cmd/Ctrl + Click to jump to definition
- **Error detection** - Red squiggles for compile errors

### 🎯 Code Snippets (30+ shortcuts)

| Shortcut | Description |
|----------|-------------|
| `cpp` | Basic C++ boilerplate |
| `cppdsa` | DSA template with common includes |
| `if`, `ifelse`, `switch` | Control structures |
| `for`, `while`, `foreach` | Loops |
| `vec`, `vecn`, `vec2d` | Vector declarations |
| `func` | Function template |
| `try` | Try-catch block |

**See all snippets**: [.vscode/SNIPPETS.md](.vscode/SNIPPETS.md)

### ⚙️ Compiler Settings
- **Compiler**: clang++ (macOS) / g++ (Linux/Windows)
- **C++ Standard**: C++17
- **Warnings**: `-Wall -Wextra -Wpedantic`
- **Auto-compile on run**: Enabled

---

## 🖥️ Platform-Specific Setup

### macOS
✅ **Pre-configured!** Just install extensions.

**Requirements:**
- Xcode Command Line Tools
  ```bash
  xcode-select --install
  ```

### Linux
✅ **Pre-configured!** Just install extensions.

**Requirements:**
- GCC/G++ compiler
  ```bash
  sudo apt-get install build-essential  # Ubuntu/Debian
  sudo yum install gcc-c++              # CentOS/RHEL
  ```

### Windows
✅ **Pre-configured!** Just install extensions.

**Requirements:**
- MinGW-w64 or MSVC compiler
- See [.vscode/CROSS_PLATFORM_SETUP.md](.vscode/CROSS_PLATFORM_SETUP.md)

---

## 📚 Documentation

All documentation is in the `.vscode/` folder:

| File | Purpose |
|------|---------|
| [README.md](.vscode/README.md) | Overview of VS Code setup |
| [SNIPPETS.md](.vscode/SNIPPETS.md) | All code snippets with examples |
| [SETUP.md](.vscode/SETUP.md) | Detailed setup guide |
| [TROUBLESHOOTING.md](.vscode/TROUBLESHOOTING.md) | Fix IntelliSense issues |
| [CROSS_PLATFORM_SETUP.md](.vscode/CROSS_PLATFORM_SETUP.md) | Platform-specific guides |

---

## 🐛 Troubleshooting

### Issue: Extensions not installing

**Solution:**
1. Press `Cmd/Ctrl + Shift + X` (Extensions)
2. Search: **C/C++**
3. Manually install **"C/C++"** by Microsoft
4. Reload VS Code

### Issue: IntelliSense not working

**Solution:**
1. Check bottom-right corner - should show 🔥 or "C/C++: Ready"
2. Press `Cmd/Ctrl + Shift + P`
3. Type: **C/C++: Reset IntelliSense Database**
4. Wait 30 seconds

**Full troubleshooting guide**: [.vscode/TROUBLESHOOTING.md](.vscode/TROUBLESHOOTING.md)

### Issue: Code won't compile

**Solution:**
1. Check if compiler is installed:
   ```bash
   clang++ --version  # macOS
   g++ --version      # Linux/Windows
   ```
2. If not installed, see platform-specific setup above

### Issue: Snippets not working

**Solution:**
1. Make sure file is saved with `.cpp` extension
2. Type snippet prefix (e.g., `cpp`) and press **Tab** (not Enter)
3. Check [SNIPPETS.md](.vscode/SNIPPETS.md) for correct prefixes

---

## 🎓 Learning Resources

This repository includes comprehensive guides for:

- **Variables**: [C++/Variables/README.md](C++/Variables/README.md)
- **Operators**: [C++/Operators/README.md](C++/Operators/README.md)
- **Input/Output**: [C++/Inputs/README.md](C++/Inputs/README.md)
- **Type Casting**: [C++/Typecasting/README.md](C++/Typecasting/README.md)

---

## 🤝 Contributing

When adding new C++ files:

1. Use the provided snippets for consistency
2. Follow the existing folder structure
3. Add README.md for new topics
4. Test that IntelliSense works on your code

---

## ✅ Setup Checklist

- [ ] Repository cloned
- [ ] Opened in VS Code
- [ ] Extensions installed (C/C++, Code Runner)
- [ ] VS Code reloaded
- [ ] IntelliSense tested (`std::` shows suggestions)
- [ ] Snippets tested (`cpp` + Tab works)
- [ ] Code Runner tested (▶️ button works)
- [ ] Compiler verified (clang++/g++ installed)

---

## 🎯 Expected Experience

After setup, you should have:

✅ **Auto-completion** - IntelliSense suggests as you type  
✅ **Error detection** - Mistakes highlighted in real-time  
✅ **Quick coding** - 30+ snippets for common patterns  
✅ **One-click run** - Compile and execute with ▶️ button  
✅ **Consistent setup** - Same experience across all platforms  

---

## 💡 Pro Tips

1. **Use Cmd/Ctrl + Space** to manually trigger IntelliSense
2. **Use Tab** to navigate through snippet placeholders
3. **Use Cmd/Ctrl + /** to toggle comments
4. **Use F12** to go to definition
5. **Use Shift + F12** to find all references

---

## 🆘 Need Help?

1. Check [TROUBLESHOOTING.md](.vscode/TROUBLESHOOTING.md)
2. Check [SETUP.md](.vscode/SETUP.md)
3. Open an issue on GitHub
4. Check VS Code Output panel (Cmd/Ctrl + Shift + U → Select "C/C++")

---

## 🎉 You're Ready!

Everything is configured. Just:
1. Install the extensions
2. Reload VS Code
3. Start coding!

**Happy Learning! 🚀**

---

## 📝 Notes

- All configuration files are in `.vscode/` folder
- Configuration works on macOS, Linux, and Windows
- Compiler must be installed separately (not included)
- Extensions are recommended, not bundled
- First-time indexing may take 30-60 seconds
