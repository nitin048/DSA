# ⚡ Quick Reference Card

Essential commands and shortcuts for working with this repository.

---

## 🚀 Setup (First Time)

### **Clone Repository**

```bash
git clone https://github.com/nitin048/DSA.git
cd DSA
```

### **Run Setup** (Choose ONE)

| Your OS        | Command                   | Notes            |
| -------------- | ------------------------- | ---------------- |
| **Any OS** 🌍  | `python scripts/setup.py` | **Recommended!** |
| **macOS** 🍎   | `./scripts/setup.sh`      | Native bash      |
| **Linux** 🐧   | `./scripts/setup.sh`      | Native bash      |
| **Windows** 🪟 | `scripts\setup.bat`       | Double-click OK  |

### **Test It Works**

```bash
./scripts/cpp C++/01_Basics/FirstCode.cpp
```

---

## 💻 Compile & Run

```bash
# Shortest way (13 chars + filename)
./scripts/cpp file.cpp

# Detailed output
./scripts/run.sh file.cpp

# Using make
make run FILE=file.cpp

# Traditional way
g++ file.cpp && ./a.out
```

---

## 🎨 Formatting

```bash
# Format all files
./scripts/format.sh

# Format single file
clang-format -i file.cpp

# Format on save
# Just press Cmd/Ctrl + S in Kiro/VS Code
```

---

## 🔍 Git Commands

```bash
# Check for untracked executables
./scripts/check_executables.sh

# Check if file is ignored
git check-ignore -v filename

# List all ignored files
git status --ignored

# Remove tracked executable
git rm --cached filename

# Commit (see beautiful messages!)
git add .
git commit -m "Your message"
```

---

## ⌨️ Keyboard Shortcuts (Kiro/VS Code)

| Action                 | Shortcut             |
| ---------------------- | -------------------- |
| **Run code**           | Ctrl + Alt + N       |
| **Format document**    | Shift + Alt + F      |
| **Save (auto-format)** | Cmd/Ctrl + S         |
| **Go to definition**   | F12                  |
| **Find references**    | Shift + F12          |
| **Rename symbol**      | F2                   |
| **Command palette**    | Cmd/Ctrl + Shift + P |

---

## 📁 File Structure

```
DSA/
├── C++/              # Learning content (numbered 01-08)
├── docs/             # All documentation
├── scripts/          # All scripts & setup
├── hooks/            # Git hooks
└── .vscode/          # IDE configuration
```

---

## 🎯 Common Tasks

### **Create New C++ File**

```bash
# Create file
touch C++/07_Loops/myLoop.cpp

# Edit and compile
./scripts/cpp C++/07_Loops/myLoop.cpp
```

### **Add to Git**

```bash
# Add source files only
git add C++/**/*.cpp C++/**/*.md

# Check status
git status

# Commit
git commit -m "Add new program"
```

### **Clean Compiled Files**

```bash
# Remove all a.out
find C++ -name "a.out" -delete

# Check executables first
./scripts/check_executables.sh
```

---

## 🎓 Learning Path

```
01_Basics → 02_Variables → 03_Operators → 04_InputOutput
    ↓
05_Typecasting → 06_Conditionals → 07_Loops → 08_Patterns
```

---

## 📚 Documentation

| Topic               | File                                             |
| ------------------- | ------------------------------------------------ |
| **Main README**     | [README.md](../README.md)                        |
| **Setup Guide**     | [SETUP.md](SETUP.md)                             |
| **Quick Run**       | [QUICK_RUN_GUIDE.md](QUICK_RUN_GUIDE.md)         |
| **Git Hooks**       | [GIT_HOOKS_GUIDE.md](GIT_HOOKS_GUIDE.md)         |
| **Gitignore**       | [GITIGNORE.md](GITIGNORE.md)                     |
| **Formatting**      | [FORMATTING.md](FORMATTING.md)                   |
| **Troubleshooting** | [TROUBLESHOOTING.md](TROUBLESHOOTING.md)         |
| **Code Snippets**   | [../.vscode/SNIPPETS.md](../.vscode/SNIPPETS.md) |

---

## 🆘 Quick Troubleshooting

| Problem                      | Solution                                  |
| ---------------------------- | ----------------------------------------- |
| **Permission denied**        | `chmod +x scripts/*.sh`                   |
| **g++ not found**            | Install: `xcode-select --install` (macOS) |
| **python not found**         | Try `python3 scripts/setup.py`            |
| **Executable tracked**       | `./scripts/check_executables.sh`          |
| **Format not working**       | Run `./scripts/setup.sh`                  |
| **IntelliSense not working** | Restart IDE after setup                   |

---

## 💡 Pro Tips

1. **Use tab completion** - Type `./scripts/` and press Tab
2. **Check before commit** - Run `./scripts/check_executables.sh`
3. **Format before commit** - Run `./scripts/format.sh`
4. **Read the README** - Each folder has a README.md
5. **Use code snippets** - Type `cpp` + Tab for boilerplate

---

## 🔗 External Resources

- **C++ Reference:** https://en.cppreference.com/
- **Learn C++:** https://www.learncpp.com/
- **Git Documentation:** https://git-scm.com/doc
- **DSA Practice:** https://leetcode.com/

---

**Print this page for quick reference! 📄**
