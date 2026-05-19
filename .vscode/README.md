# VS Code Workspace Configuration

This folder contains VS Code configuration for C++ development.

---

## 🎯 What Happens When You Open This Workspace?

VS Code will automatically show a notification:

```
📦 This workspace has extension recommendations.
   
   [Install All]  [Show Recommendations]  [Ignore]
```

**Click "Install All"** and VS Code will install:

1. ✅ **C/C++** (Microsoft) - IntelliSense, debugging, code browsing
2. ✅ **C/C++ Extension Pack** (Microsoft) - Additional C++ tools
3. ✅ **Code Runner** - Run C++ code with one click

---

## 📁 Configuration Files

| File | Purpose |
|------|---------|
| `extensions.json` | Recommends C++ extensions to install |
| `c_cpp_properties.json` | IntelliSense configuration |
| `settings.json` | Workspace settings |
| `cpp.code-snippets` | Custom C++ code snippets |
| `SNIPPETS.md` | Documentation for all snippets |
| `SETUP.md` | Complete setup guide |
| `TROUBLESHOOTING.md` | Fix IntelliSense issues |

---

## 🚀 Quick Start

1. **Open this workspace in VS Code**
2. **Click "Install All"** when prompted for extensions
3. **Reload VS Code** (Cmd + Shift + P → "Reload Window")
4. **Open any .cpp file**
5. **Start coding!** IntelliSense will work automatically

---

## ✨ Features You'll Get

### IntelliSense
- Auto-completion (`std::` shows suggestions)
- Parameter hints (function signatures)
- Hover information (type info)
- Go to definition (Cmd + Click)
- Error detection (red squiggles)

### Code Snippets
- `cpp` → Basic C++ boilerplate
- `cppdsa` → DSA template
- `if`, `ifelse`, `switch` → Control structures
- `for`, `while`, `foreach` → Loops
- And 30+ more! (See SNIPPETS.md)

### Code Runner
- Click ▶️ button to compile and run
- Or press `Ctrl + Alt + N`
- Output shows in terminal

---

## 🔧 Manual Installation (If Prompt Doesn't Show)

If VS Code doesn't show the extension prompt:

1. Press `Cmd + Shift + X` (Extensions)
2. Search: **C/C++**
3. Install **"C/C++"** by Microsoft
4. Install **"Code Runner"** by Jun Han
5. Reload VS Code

---

## 📝 Verify Installation

After installing extensions:

1. Open `C++/Operators/Calculator/calculator.cpp`
2. Type `std::` and wait
3. Should see suggestions: `cout`, `cin`, `vector`, etc.
4. ✅ IntelliSense is working!

---

## 🎯 Compiler Configuration

- **Compiler**: clang++ (Apple Clang 16.0.0)
- **C++ Standard**: C++17
- **Warnings**: `-Wall -Wextra -Wpedantic`
- **Platform**: macOS ARM64 (Apple Silicon)

---

## 📚 Documentation

- **All Snippets**: [SNIPPETS.md](SNIPPETS.md)
- **Setup Guide**: [SETUP.md](SETUP.md)
- **Troubleshooting**: [TROUBLESHOOTING.md](TROUBLESHOOTING.md)
- **Test Instructions**: [test-intellisense.md](test-intellisense.md)

---

## 🤝 For Team Members

When you clone this repo:

1. Open in VS Code
2. Install recommended extensions (click "Install All")
3. Reload VS Code
4. Everything will work automatically!

All team members will have:
- ✅ Same IntelliSense configuration
- ✅ Same code snippets
- ✅ Same compiler settings
- ✅ Same coding experience

---

**Happy Coding! 🚀**
