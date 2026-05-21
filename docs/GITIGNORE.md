# 🚫 Gitignore Guide

Complete guide to `.gitignore` configuration in this repository.

---

## 📋 Table of Contents

1. [Overview](#-overview)
2. [What's Ignored](#-whats-ignored)
3. [Executable Handling](#-executable-handling)
4. [How It Works](#-how-it-works)
5. [Troubleshooting](#-troubleshooting)

---

## 🎯 Overview

This repository has a **comprehensive `.gitignore`** that automatically ignores:

- ✅ Compiled executables (C++ binaries)
- ✅ Build artifacts (`.o`, `.out`, etc.)
- ✅ IDE files (VS Code, CLion, Xcode, etc.)
- ✅ OS files (`.DS_Store`, `Thumbs.db`, etc.)
- ✅ Temporary files
- ✅ 350+ patterns total!

**Result:** Clean git status, no accidental commits of binaries! 🎉

---

## 🚫 What's Ignored

### **1. C++ Compiled Files**

```gitignore
# Executables
*.exe
*.out
a.out

# Object files
*.o
*.obj

# Libraries
*.a
*.lib
*.so
*.dylib
*.dll
```

### **2. Pattern-Based Executables**

Smart patterns that ignore executables based on naming:

```gitignore
# Loop executables
C++/**/*Loop
C++/**/*loop

# Pattern executables
C++/**/*Pattern
C++/**/*pattern

# Problem executables
C++/**/*_prblm
C++/**/*prblm
```

**Example:**

- `whileLoop.cpp` → Tracked ✅
- `whileLoop` (compiled) → Ignored ✅
- `trianglePattern.cpp` → Tracked ✅
- `trianglePattern` (compiled) → Ignored ✅

### **3. Build Directories**

```gitignore
build/
bin/
obj/
out/
target/
dist/
.cache/
```

### **4. IDE Files**

```gitignore
# VS Code
.vscode/launch.json
.vscode/tasks.json
.vscode/.ropeproject

# CLion
.idea/
cmake-build-*/

# Xcode
*.xcodeproj
*.xcworkspace

# Visual Studio
*.suo
*.user
*.sln.docstates
```

### **5. OS Files**

```gitignore
# macOS
.DS_Store
.AppleDouble
.LSOverride

# Windows
Thumbs.db
Desktop.ini
$RECYCLE.BIN/

# Linux
*~
.directory
```

### **6. Temporary Files**

```gitignore
# Code Runner
tempCodeRunnerFile.*

# Vim
*.swp
*.swo
*~

# Emacs
*~
\#*\#
.\#*
```

---

## 🎯 Executable Handling

### **The Problem:**

C++ compiles to executables with **no extension**:

```bash
g++ whileLoop.cpp -o whileLoop
# Creates: whileLoop (executable, no extension)
```

Git would track this as a regular file! ❌

### **The Solution:**

**Pattern-based naming** + **Smart .gitignore**

#### **Step 1: Name files with patterns**

```
✅ Good naming:
- whileLoop.cpp → whileLoop (ignored)
- forLoop.cpp → forLoop (ignored)
- trianglePattern.cpp → trianglePattern (ignored)
- 01_prblm.cpp → 01_prblm (ignored)

❌ Bad naming:
- test.cpp → test (NOT ignored)
- main.cpp → main (NOT ignored)
```

#### **Step 2: .gitignore patterns**

```gitignore
# Ignore executables ending with "Loop"
C++/**/*Loop
C++/**/*loop

# Ignore executables ending with "Pattern"
C++/**/*Pattern
C++/**/*pattern

# Ignore executables ending with "_prblm"
C++/**/*_prblm
```

#### **Step 3: Git hooks (automatic check)**

Pre-commit hook checks for untracked executables:

```bash
# Automatically runs before commit
.git/hooks/pre-commit
```

If it finds executables, it **blocks the commit** and shows:

```
❌ ERROR: Found untracked executable files in C++ directory!

📁 Untracked executables:
   C++/07_Loops/test

💡 Solutions:
   1. Add to .gitignore
   2. Delete the file
   3. Rename to match pattern (*Loop, *Pattern, *_prblm)
```

---

## 🔧 How It Works

### **1. Compile Your Code**

```bash
g++ C++/07_Loops/whileLoop.cpp -o C++/07_Loops/whileLoop
```

Creates:

- `whileLoop.cpp` (source) → Tracked ✅
- `whileLoop` (executable) → Ignored ✅

### **2. Check Git Status**

```bash
git status
```

Shows:

```
modified:   C++/07_Loops/whileLoop.cpp
```

**Does NOT show:** `whileLoop` (executable) ✅

### **3. Commit Changes**

```bash
git add .
git commit -m "Updated while loop"
```

Pre-commit hook runs:

- ✅ Checks for untracked executables
- ✅ Blocks commit if found
- ✅ Shows helpful error message

### **4. Push to GitHub**

```bash
git push
```

Only source files are pushed! ✅

---

## 🛠️ Helper Scripts

### **Check for Executables**

```bash
./scripts/check_executables.sh
```

Shows all executables in `C++/` directory:

```
🔍 Checking for executable files in C++ directory...

📁 Found executables:
   C++/07_Loops/whileLoop
   C++/07_Loops/forLoop
   C++/08_Patterns/trianglePattern

✅ All executables are properly ignored by git!
```

### **Update .gitignore**

```bash
./scripts/update_gitignore.sh
```

Scans for new executable patterns and updates `.gitignore`.

---

## 🆘 Troubleshooting

### **Issue: Executable is tracked by git**

**Check:**

```bash
git status
```

If you see an executable file (no extension):

**Solution 1: Add to .gitignore**

```bash
echo "C++/path/to/executable" >> .gitignore
git rm --cached C++/path/to/executable
git commit -m "Remove executable from tracking"
```

**Solution 2: Rename to match pattern**

```bash
# Rename file to end with "Loop", "Pattern", or "_prblm"
mv test whileLoop
```

**Solution 3: Delete and recompile**

```bash
rm C++/path/to/executable
g++ C++/path/to/file.cpp -o C++/path/to/fileLoop
```

---

### **Issue: Pre-commit hook not working**

**Solution:**

```bash
# Reinstall hooks
./scripts/install_hooks.sh

# Make executable
chmod +x .git/hooks/pre-commit

# Test
git commit -m "Test"
```

---

### **Issue: Too many untracked files**

**Solution:**

```bash
# Clean all executables
find C++/ -type f -executable -delete

# Or clean specific patterns
find C++/ -type f -name "*Loop" -delete
find C++/ -type f -name "*Pattern" -delete
```

---

### **Issue: Want to track an executable**

**Solution:**

Add exception to `.gitignore`:

```gitignore
# Ignore all executables
C++/**/*Loop

# But track this specific one
!C++/special/myLoop
```

---

## 📊 Statistics

Our `.gitignore` has:

- **727 lines**
- **350+ patterns**
- **15+ categories**:
  - C++ files
  - Build systems
  - IDEs (10+)
  - Operating systems
  - Package managers
  - Testing frameworks
  - Security files
  - And more!

---

## ✅ Best Practices

### **1. Use Pattern-Based Naming**

```
✅ Good:
- whileLoop.cpp
- forLoop.cpp
- trianglePattern.cpp
- 01_prblm.cpp

❌ Bad:
- test.cpp
- main.cpp
- program.cpp
```

### **2. Check Before Committing**

```bash
# Always check status
git status

# Check for executables
./scripts/check_executables.sh

# Then commit
git add .
git commit -m "Your message"
```

### **3. Clean Build Artifacts**

```bash
# Clean executables
find C++/ -type f -executable -delete

# Clean object files
find C++/ -name "*.o" -delete

# Clean a.out files
find C++/ -name "a.out" -delete
```

### **4. Use Helper Scripts**

```bash
# Quick compile & run (auto-cleans)
./scripts/cpp file.cpp

# Detailed run (auto-cleans)
./scripts/run.sh file.cpp
```

---

## 🎯 Summary

**What's Ignored:**

- ✅ Compiled executables (pattern-based)
- ✅ Build artifacts (`.o`, `.out`, etc.)
- ✅ IDE files (VS Code, CLion, etc.)
- ✅ OS files (`.DS_Store`, etc.)
- ✅ Temporary files
- ✅ 350+ patterns total

**How It Works:**

1. Name files with patterns (`*Loop`, `*Pattern`, `*_prblm`)
2. `.gitignore` automatically ignores compiled versions
3. Pre-commit hook checks for untracked executables
4. Only source files are committed

**Result:** Clean repository, no binary files! 🎉

---

**For more help, see:** [TROUBLESHOOTING.md](TROUBLESHOOTING.md)
