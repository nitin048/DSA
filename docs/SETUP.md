# 🚀 Complete Setup Guide

This is the **complete setup guide** for the DSA repository. Works on **Windows 🪟, macOS 🍎, and Linux 🐧**!

---

## 📋 Table of Contents

1. [Quick Start](#-quick-start)
2. [Universal Setup](#-universal-setup)
3. [Platform-Specific Instructions](#-platform-specific-instructions)
4. [IDE Configuration](#-ide-configuration)
5. [Testing Your Setup](#-testing-your-setup)
6. [Troubleshooting](#-troubleshooting)

---

## ⚡ Quick Start

### **Step 1: Clone Repository**

```bash
git clone https://github.com/nitin048/DSA.git
cd DSA
```

### **Step 2: Run Setup** (Choose ONE method)

**🐍 Python (Recommended - Works Everywhere!)**

```bash
python scripts/setup.py
```

**🐚 Shell (macOS/Linux)**

```bash
./scripts/setup.sh
```

**🪟 Batch (Windows)**

```cmd
scripts\setup.bat
```

Or navigate to `scripts/` folder and double-click `setup.bat`!

### **Step 3: Test It Works**

```bash
./scripts/cpp C++/01_Basics/FirstCode.cpp
```

**That's it!** ✅ You're ready to code! 🎉

---

## 🌍 Universal Setup

### **What Gets Installed:**

All setup scripts install:

- ✅ **clangd** - IntelliSense (auto-completion, error detection)
- ✅ **clang-format** - Code formatting
- ✅ **Git hooks** - Beautiful commit messages with emojis 🎉
- ✅ **IDE configuration** - All settings
- ✅ **Scripts** - All made executable

### **Setup Process:**

```
🚀 Start Setup
   ↓
🖥️  Detect Operating System
   ↓
📦 Install Development Tools
   ├─ clangd (IntelliSense)
   ├─ clang-format (formatting)
   └─ LLVM tools
   ↓
🎣 Install Git Hooks
   ├─ Pre-commit hook
   └─ Post-commit hook
   ↓
🎨 Format Code (Optional)
   └─ Format all C++ files
   ↓
✅ Setup Complete!
```

---

## 🖥️ Platform-Specific Instructions

### **Windows 🪟**

#### **Method 1: Python (Easiest!)**

1. **Install Python** (if not installed):
   - Download: https://www.python.org/downloads/
   - Check "Add Python to PATH" during installation

2. **Run setup:**
   ```cmd
   python scripts/setup.py
   ```

#### **Method 2: Batch File**

1. **Install Git for Windows**:
   - Download: https://git-scm.com/download/win
   - Install with default options (includes Git Bash)

2. **Run setup:**
   ```cmd
   scripts\setup.bat
   ```

#### **Method 3: WSL (Windows Subsystem for Linux)**

1. **Install WSL:**

   ```powershell
   # Run in PowerShell as Administrator
   wsl --install
   ```

2. **Restart computer**

3. **Open Ubuntu and run:**
   ```bash
   cd /mnt/c/path/to/DSA
   ./scripts/setup.sh
   ```

---

### **macOS 🍎**

#### **Prerequisites:**

Install Xcode Command Line Tools:

```bash
xcode-select --install
```

#### **Setup:**

**Option 1: Python (Pre-installed)**

```bash
python3 scripts/setup.py
```

**Option 2: Shell Script**

```bash
./scripts/setup.sh
```

---

### **Linux 🐧**

#### **Prerequisites:**

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

#### **Setup:**

**Option 1: Python**

```bash
python3 scripts/setup.py
```

**Option 2: Shell Script**

```bash
./scripts/setup.sh
```

---

## 💻 IDE Configuration

### **Kiro IDE** (Recommended)

Kiro IDE is fully configured out of the box! Just open the repository:

```bash
kiro .
```

**Features:**

- ✅ IntelliSense (auto-completion)
- ✅ Format on save
- ✅ Error detection
- ✅ Code snippets (30+)
- ✅ One-click run

**After setup:**

1. Open any `.cpp` file
2. Type `std::` - see auto-completion ✅
3. Press Cmd/Ctrl + S - auto-format ✅
4. Click ▶️ or press Ctrl + Alt + N to run ✅

---

### **VS Code**

#### **Install Extensions:**

The repository includes recommended extensions. VS Code will prompt you to install them.

**Manual installation:**

```bash
code --install-extension llvm-vs-code-extensions.vscode-clangd
code --install-extension xaver.clang-format
```

#### **Configuration:**

All settings are in `.vscode/settings.json` (already configured):

- ✅ IntelliSense via clangd
- ✅ Format on save
- ✅ Auto-completion
- ✅ Error detection

#### **Code Snippets:**

Type shortcuts and press Tab:

- `cpp` → Full C++ boilerplate
- `for` → For loop
- `if` → If statement
- `vec` → Vector declaration

See all: [.vscode/SNIPPETS.md](../.vscode/SNIPPETS.md)

---

### **Other IDEs**

#### **CLion:**

1. Open project folder
2. CLion auto-detects CMake/Makefile
3. Configure toolchain (Settings → Build → Toolchains)

#### **Vim/Neovim:**

Use clangd LSP:

```vim
" Add to your config
Plug 'neoclide/coc.nvim'
" Install clangd: :CocInstall coc-clangd
```

#### **Emacs:**

Use lsp-mode with clangd:

```elisp
(use-package lsp-mode
  :hook (c++-mode . lsp))
```

---

## 🧪 Testing Your Setup

### **Test 1: Compile and Run**

```bash
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
git commit -m "Test commit"
```

**Expected:** Beautiful commit message with emojis ✅

---

### **Test 3: Code Formatting**

```bash
./scripts/format.sh
```

**Expected:** All files formatted ✅

---

### **Test 4: IntelliSense (In IDE)**

1. Open any `.cpp` file
2. Type `std::`
3. Should see auto-completion suggestions

**Expected:** Auto-completion works ✅

---

### **Test 5: Format on Save (In IDE)**

1. Open any `.cpp` file
2. Make it messy (remove indentation)
3. Press Cmd/Ctrl + S to save

**Expected:** Code auto-formats ✅

---

## 🆘 Troubleshooting

### **Issue: "python: command not found"**

**Solution:**

- Try `python3 scripts/setup.py` instead
- Or install Python: https://www.python.org/

---

### **Issue: "bash: command not found" (Windows)**

**Solution:**

- Install Git for Windows: https://git-scm.com/download/win
- Or use `python scripts/setup.py` instead

---

### **Issue: "Permission denied"**

**Solution:**

```bash
chmod +x scripts/setup.sh scripts/setup.py
chmod +x scripts/*.sh
```

---

### **Issue: "g++: command not found"**

**Solution:**

- **macOS:** `xcode-select --install`
- **Linux:** `sudo apt install g++`
- **Windows:** Install MinGW or use WSL

---

### **Issue: "clangd not found"**

**Solution:**

The setup script will try to install it. If it fails:

- **macOS:** `brew install llvm`
- **Linux:** `sudo apt install clangd`
- **Windows:** Download from https://releases.llvm.org/

---

### **Issue: IntelliSense not working**

**Solution:**

1. Make sure clangd is installed: `clangd --version`
2. Restart your IDE
3. Check `.vscode/settings.json` exists
4. Run setup again: `python scripts/setup.py`

---

### **Issue: Format on save not working**

**Solution:**

1. Make sure clang-format is installed: `clang-format --version`
2. Check IDE settings for "Format on Save"
3. Verify `.clang-format` file exists in root

---

### **Issue: Git hooks not working**

**Solution:**

```bash
# Reinstall hooks
./scripts/install_hooks.sh

# Verify hooks exist
ls -la .git/hooks/pre-commit .git/hooks/post-commit

# Make them executable
chmod +x .git/hooks/pre-commit .git/hooks/post-commit
```

---

## ✅ Success Checklist

After setup, verify:

- [ ] Can compile and run: `./scripts/cpp C++/01_Basics/FirstCode.cpp`
- [ ] Git hooks installed: `ls -la .git/hooks/`
- [ ] Scripts executable: `ls -la scripts/`
- [ ] IntelliSense works (type `std::` in IDE)
- [ ] Format on save works (Cmd/Ctrl + S)
- [ ] Git commit shows beautiful messages

---

## 🎯 What You Can Do Now

### **Quick Commands:**

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

### **Start Learning:**

1. Read [C++/01_Basics/README.md](../C++/01_Basics/README.md)
2. Try examples in each folder
3. Practice with loop problems
4. Create your own patterns

### **Make a Commit:**

```bash
git add .
git commit -m "Your message"
```

See beautiful commit messages with emojis! 🎉

---

## 📚 Additional Resources

- 🎣 [Git Hooks Guide](GIT_HOOKS_GUIDE.md) - Beautiful commit messages
- ⚡ [Quick Run Guide](QUICK_RUN_GUIDE.md) - Compile & run methods
- 🎨 [Formatting Guide](FORMATTING.md) - Code formatting
- 🔧 [Troubleshooting](TROUBLESHOOTING.md) - Common issues
- 📖 [Quick Reference](QUICK_REFERENCE.md) - Command cheat sheet

---

## 🎊 Summary

**Three ways to set up:**

1. **🐍 Python:** `python scripts/setup.py` (Works everywhere!)
2. **🐚 Shell:** `./scripts/setup.sh` (macOS/Linux)
3. **🪟 Batch:** `scripts\setup.bat` (Windows)

**All methods install:**

- ✅ Development tools (clangd, clang-format)
- ✅ Git hooks (beautiful messages)
- ✅ IDE configuration
- ✅ Scripts (all executable)

**Result:** Complete C++ development environment! 🌍

---

**Happy Coding!** 🚀💪
