# 🚀 Setup Quick Reference Card

## One-Command Setup for Any OS! 🌍

---

## 📋 Quick Commands

### **Clone Repository**

```bash
git clone https://github.com/nitin048/DSA.git
cd DSA
```

---

### **Run Setup** (Choose ONE)

| Your OS        | Command           | Notes                      |
| -------------- | ----------------- | -------------------------- |
| **Any OS** 🌍  | `python scripts/setup.py` | **Recommended!**           |
| **macOS** 🍎   | `./setup.sh`      | Native bash                |
| **Linux** 🐧   | `./setup.sh`      | Native bash                |
| **Windows** 🪟 | `setup.bat`       | Double-click or run in CMD |

---

### **Test It Works**

```bash
./scripts/cpp C++/01_Basics/FirstCode.cpp
```

---

## 🎯 What Gets Installed

- ✅ **clangd** - IntelliSense
- ✅ **clang-format** - Auto-formatting
- ✅ **Git hooks** - Beautiful commit messages 🎉
- ✅ **Scripts** - Quick compile & run

---

## ⚡ Quick Commands After Setup

```bash
# Compile and run (shortest way)
./scripts/cpp file.cpp

# Detailed run with status messages
./scripts/run.sh file.cpp

# Using Makefile
make run FILE=file.cpp

# Format all code
./scripts/format.sh

# Check for executables
./scripts/check_executables.sh
```

---

## 🧪 Test Your Setup

```bash
# Test 1: Compile and run
./scripts/cpp C++/01_Basics/FirstCode.cpp

# Test 2: Git hooks
git commit -m "Test"

# Test 3: Formatting
./scripts/format.sh

# Test 4: IntelliSense (in IDE)
# Open any .cpp file and type "std::"
```

---

## 📚 Full Documentation

- 📖 [Universal Setup Summary](docs/UNIVERSAL_SETUP_SUMMARY.md)
- 📖 [Cross-Platform Setup Guide](docs/CROSS_PLATFORM_SETUP.md)
- 📖 [Clone and Test Guide](docs/CLONE_AND_TEST.md)
- 📖 [Main README](README.md)

---

## 🆘 Troubleshooting

| Issue                       | Solution                                  |
| --------------------------- | ----------------------------------------- |
| `python: command not found` | Try `python3 scripts/setup.py`                    |
| `bash: command not found`   | Install Git Bash or use `python scripts/setup.py` |
| `Permission denied`         | Run `chmod +x setup.sh setup.py`          |
| `g++: command not found`    | Install g++ compiler                      |

---

## 🎊 That's It!

**Three simple steps:**

1. Clone: `git clone https://github.com/nitin048/DSA.git`
2. Setup: `python scripts/setup.py`
3. Code: `./scripts/cpp file.cpp`

**Happy Coding!** 🚀💪
