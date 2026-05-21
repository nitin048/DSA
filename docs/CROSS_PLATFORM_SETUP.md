# 🌍 Cross-Platform Setup Guide

This repository works on **ALL operating systems** with universal setup scripts! 🎉

---

## 🚀 Quick Start (Any OS)

### **Option 1: Python Script** (Recommended - Works Everywhere! 🐍)

```bash
python scripts/setup.py
```

or

```bash
python3 scripts/setup.py
```

**Why Python?**

- ✅ Works on Windows, macOS, Linux
- ✅ No additional dependencies
- ✅ Beautiful colored output
- ✅ Automatic OS detection

---

### **Option 2: Shell Script** (macOS/Linux 🍎🐧)

```bash
./scripts/setup.sh
```

---

### **Option 3: Batch File** (Windows 🪟)

```cmd
scripts\setup.bat
```

**Double-click** `scripts/setup.bat` or run in Command Prompt.

---

## 📊 Platform Support

| Platform          | Script                    | Status  | Notes                       |
| ----------------- | ------------------------- | ------- | --------------------------- |
| **Windows 10/11** | `setup.bat` or `setup.py` | ✅ Full | Requires Git Bash           |
| **macOS**         | `setup.sh` or `setup.py`  | ✅ Full | Native support              |
| **Linux**         | `setup.sh` or `setup.py`  | ✅ Full | Native support              |
| **WSL**           | `setup.sh` or `setup.py`  | ✅ Full | Windows Subsystem for Linux |
| **Git Bash**      | `setup.sh` or `setup.py`  | ✅ Full | On Windows                  |

---

## 🎯 What Gets Installed

All setup scripts install the same things:

### **1. Development Tools** 🛠️

- ✅ clangd (IntelliSense)
- ✅ clang-format (Code formatting)
- ✅ LLVM tools

### **2. Git Hooks** 🎣

- ✅ Pre-commit hook (checks for executables)
- ✅ Post-commit hook (beautiful messages)

### **3. Configuration** ⚙️

- ✅ Makes all scripts executable
- ✅ Sets up IDE configuration
- ✅ Configures formatting rules

---

## 🪟 Windows Setup

### **Method 1: Using Python** (Easiest!)

1. **Install Python** (if not installed):
   - Download from: https://www.python.org/downloads/
   - Check "Add Python to PATH" during installation

2. **Run setup:**
   ```cmd
   python scripts/setup.py
   ```

---

### **Method 2: Using Batch File**

1. **Install Git for Windows**:
   - Download from: https://git-scm.com/download/win
   - Install with default options (includes Git Bash)

2. **Run setup:**

   ```cmd
   scripts\setup.bat
   ```

   Or navigate to `scripts/` folder and **double-click** `setup.bat`

---

### **Method 3: Using WSL** (Windows Subsystem for Linux)

1. **Install WSL**:

   ```powershell
   # Run in PowerShell as Administrator
   wsl --install
   ```

2. **Restart your computer**

3. **Open Ubuntu** and run:
   ```bash
   cd /mnt/c/path/to/DSA
   ./setup.sh
   ```

---

## 🍎 macOS Setup

### **Method 1: Using Python** (Pre-installed!)

```bash
python3 scripts/setup.py
```

---

### **Method 2: Using Shell Script**

```bash
./setup.sh
```

---

### **Prerequisites:**

macOS needs Xcode Command Line Tools:

```bash
xcode-select --install
```

---

## 🐧 Linux Setup

### **Method 1: Using Python**

```bash
python3 scripts/setup.py
```

---

### **Method 2: Using Shell Script**

```bash
./setup.sh
```

---

### **Prerequisites:**

Install g++ if not present:

```bash
# Ubuntu/Debian
sudo apt update
sudo apt install g++ make

# Fedora
sudo dnf install gcc-c++ make

# Arch
sudo pacman -S gcc make
```

---

## 🎨 Setup Process

All scripts follow the same process:

```
🚀 DSA Repository Setup
   ↓
🖥️  Detect Operating System
   ↓
📦 Step 1: Install Development Tools
   ├─ clangd
   ├─ clang-format
   └─ LLVM
   ↓
🎣 Step 2: Install Git Hooks
   ├─ pre-commit
   └─ post-commit
   ↓
🎨 Step 3: Format Code (Optional)
   └─ Format all C++ files
   ↓
✅ Setup Complete!
```

---

## 🧪 Testing Your Setup

After running setup, test it:

### **Test 1: Compile and Run**

```bash
# Windows (Git Bash)
bash scripts/cpp C++/01_Basics/FirstCode.cpp

# macOS/Linux
./scripts/cpp C++/01_Basics/FirstCode.cpp
```

**Expected:** Program compiles and runs ✅

---

### **Test 2: Git Hooks**

```bash
# Make a change
echo "// test" >> test.cpp

# Commit
git add .
git commit -m "Test"
```

**Expected:** Beautiful commit message with emojis ✅

---

### **Test 3: Code Formatting**

```bash
# Windows (Git Bash)
bash scripts/format.sh

# macOS/Linux
./scripts/format.sh
```

**Expected:** All files formatted ✅

---

## 🔧 Troubleshooting

### **Windows: "bash: command not found"**

**Solution:** Install Git for Windows

- Download: https://git-scm.com/download/win
- Includes Git Bash

---

### **Windows: "python: command not found"**

**Solution:** Install Python

- Download: https://www.python.org/downloads/
- Check "Add Python to PATH"

---

### **macOS: "clang: command not found"**

**Solution:** Install Xcode Command Line Tools

```bash
xcode-select --install
```

---

### **Linux: "g++: command not found"**

**Solution:** Install g++

```bash
# Ubuntu/Debian
sudo apt install g++

# Fedora
sudo dnf install gcc-c++
```

---

### **Permission Denied**

**Solution:** Make scripts executable

```bash
chmod +x setup.sh setup.py
chmod +x scripts/*.sh
```

---

## 📋 Manual Setup (If Scripts Fail)

If automated setup fails, you can install manually:

### **1. Install Tools**

**macOS:**

```bash
brew install llvm
```

**Linux:**

```bash
sudo apt install clangd clang-format  # Ubuntu/Debian
sudo dnf install clang-tools-extra     # Fedora
```

**Windows:**

- Install LLVM from: https://releases.llvm.org/

---

### **2. Install Git Hooks**

```bash
cp hooks/pre-commit .git/hooks/pre-commit
cp hooks/post-commit .git/hooks/post-commit
chmod +x .git/hooks/pre-commit .git/hooks/post-commit
```

---

### **3. Make Scripts Executable**

```bash
chmod +x scripts/*.sh
chmod +x hooks/*
```

---

## 🎯 Platform-Specific Notes

### **Windows** 🪟

- **Git Bash** is required for shell scripts
- **Python** works without Git Bash
- Scripts use `bash` command internally
- Paths use forward slashes in Git Bash

### **macOS** 🍎

- Xcode Command Line Tools required
- Homebrew recommended for easy installation
- Native bash support
- All scripts work out of the box

### **Linux** 🐧

- g++ usually pre-installed
- Package manager varies by distro
- Native bash support
- All scripts work out of the box

### **WSL** (Windows Subsystem for Linux)

- Full Linux environment on Windows
- Access Windows files via `/mnt/c/`
- All Linux commands work
- Best of both worlds!

---

## 🌟 Recommended Setup by Platform

| Platform    | Recommended Method | Why                |
| ----------- | ------------------ | ------------------ |
| **Windows** | `setup.py`         | No Git Bash needed |
| **macOS**   | `setup.sh`         | Native bash        |
| **Linux**   | `setup.sh`         | Native bash        |
| **WSL**     | `setup.sh`         | Full Linux         |

---

## 📚 Additional Resources

- **Windows Git Bash:** https://git-scm.com/download/win
- **Python:** https://www.python.org/downloads/
- **WSL:** https://docs.microsoft.com/en-us/windows/wsl/install
- **Homebrew (macOS):** https://brew.sh/

---

## ✅ Success Checklist

After setup, verify:

- [ ] Scripts are executable
- [ ] Can compile C++ files
- [ ] Git hooks are installed
- [ ] Code formatting works
- [ ] IDE recognizes configuration

---

## 🎊 Summary

**Three ways to set up:**

1. **🐍 Python:** `python scripts/setup.py` (Works everywhere!)
2. **🐚 Shell:** `./setup.sh` (macOS/Linux)
3. **🪟 Batch:** `setup.bat` (Windows)

**All methods:**

- ✅ Install development tools
- ✅ Set up git hooks
- ✅ Configure formatting
- ✅ Make scripts executable

**Result:** Universal, cross-platform C++ development environment! 🌍

---

**Choose your platform and get started!** 🚀
