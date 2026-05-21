# 🚫 Git Ignore Guide for C++ Projects

This guide explains what files are ignored and why.

---

## 🚫 What Gets Ignored

### 1. **Compiled Executables**

All compiled files are automatically ignored:

```bash
# These are ignored:
a.out                    # Default g++ output
whileLoop               # Compiled from whileLoop.cpp
01_prblm                # Compiled from 01_prblm.cpp
calculator              # Compiled from calculator.cpp
```

### 2. **Temporary Files**

```bash
tempCodeRunnerFile.cpp   # Code Runner temp files
tempCodeRunnerFile.c     # C temp files
tempCodeRunnerFile.*     # Any temp runner files
```

### 3. **Object Files**

```bash
*.o                     # Object files
*.obj                   # Windows object files
```

### 3. **Output Files**

```bash
*.out                   # Output files
*.exe                   # Windows executables
*.app                   # macOS applications
```

### 4. **Build Artifacts**

```bash
*.gch                   # Precompiled headers
*.pch                   # Precompiled headers
*.dSYM/                 # Debug symbols (macOS)
```

### 5. **IDE and System Files**

```bash
.DS_Store               # macOS
Thumbs.db               # Windows
.cache/                 # Build cache
```

---

## 📝 What Gets Tracked

### ✅ Source Files

```bash
*.cpp                   # C++ source files
*.h                     # Header files
*.hpp                   # C++ header files
```

### ✅ Documentation

```bash
*.md                    # Markdown files
README.md               # Documentation
```

### ✅ Configuration

```bash
.vscode/                # IDE settings
.clang-format           # Formatting rules
compile_commands.json   # Build config
Makefile                # Build instructions
```

### ✅ Scripts

```bash
scripts/                # Utility scripts
*.sh                    # Shell scripts
```

---

## 🔍 How It Works

### Pattern Matching

The `.gitignore` file uses patterns to match files:

```gitignore
# Exact match
a.out                   # Ignores any file named "a.out"

# Extension match
*.out                   # Ignores all .out files

# Directory match
.cache/                 # Ignores entire .cache directory

# Recursive match
C++/**/a.out           # Ignores a.out in any C++ subdirectory

# Specific executables
C++/**/whileLoop       # Ignores whileLoop executable
C++/**/nestedLoop      # Ignores nestedLoop executable
C++/**/*_prblm         # Ignores files ending with _prblm
```

### Automatic Checking

Use our helper scripts to check for untracked executables:

```bash
# Check for untracked executables
./scripts/check_executables.sh

# Update .gitignore with all .cpp names
./scripts/update_gitignore.sh
```

---

## 🧪 Testing Gitignore

### Check if a File is Ignored

```bash
git check-ignore -v filename
```

**Example:**

```bash
git check-ignore -v C++/07_Loops/whileLoop
# Output: .gitignore:31:C++/**/whileLoop  C++/07_Loops/whileLoop
```

### List All Ignored Files

```bash
git status --ignored
```

### Check Specific Directory

```bash
git status --ignored C++/07_Loops/
```

---

## 🛠️ Common Scenarios

### Scenario 1: Compiled a Program

```bash
# Compile
g++ whileLoop.cpp -o whileLoop

# Check status
git status
# whileLoop is NOT shown (ignored ✅)
```

### Scenario 2: Created a.out

```bash
# Compile (creates a.out)
g++ whileLoop.cpp

# Check status
git status
# a.out is NOT shown (ignored ✅)
```

### Scenario 3: Added New .cpp File

```bash
# Create new file
touch newProgram.cpp

# Check status
git status
# newProgram.cpp IS shown (tracked ✅)
```

### Scenario 4: Compiled with Custom Name

```bash
# Compile with custom name
g++ program.cpp -o myprogram

# Check status
git status
# myprogram might be shown (not in ignore list)

# Add to .gitignore if needed
echo "myprogram" >> .gitignore
```

---

## 📋 Current Ignore Rules

### Executables Without Extension

These specific executables are ignored:

```gitignore
C++/**/whileLoop
C++/**/forLoop
C++/**/doWhileLoop
C++/**/ifElse
C++/**/if_else_if
C++/**/ternaryStmt
C++/**/calculator
C++/**/variables
C++/**/inputs
C++/**/arithmetic
C++/**/relational
C++/**/logical
C++/**/unary
C++/**/implicitTypeCasting
C++/**/explicitTypeCasting
C++/**/FirstCode
C++/**/*_prblm
C++/**/*_problem
C++/**/*_test
```

### Why These Specific Names?

These match the `.cpp` filenames in the repository. When you compile:

```bash
g++ whileLoop.cpp -o whileLoop
```

The executable `whileLoop` is automatically ignored.

---

## ➕ Adding New Ignore Rules

### For a Specific File

```bash
echo "myexecutable" >> .gitignore
```

### For a Pattern

```bash
echo "C++/**/*_solution" >> .gitignore
```

### For a Directory

```bash
echo "build/" >> .gitignore
```

---

## 🛠️ Helper Scripts

We've created helper scripts to manage executables:

### Check for Untracked Executables

```bash
./scripts/check_executables.sh
```

**What it does:**

- ✅ Scans C++ directory for untracked files
- ✅ Identifies executables without extensions
- ✅ Shows which files should be added to .gitignore
- ✅ Suggests the exact .gitignore entries

**Example output:**

```
🔍 Checking for untracked executable files...

⚠️  Found untracked executable files:
-----------------------------------
  ❌ C++/07_Loops/nestedLoop
     → Compiled from: C++/07_Loops/nestedLoop.cpp
-----------------------------------

💡 To ignore these files, add them to .gitignore:
   C++/**/nestedLoop
```

### Update Gitignore Automatically

```bash
./scripts/update_gitignore.sh
```

**What it does:**

- ✅ Finds all .cpp files in the repository
- ✅ Generates .gitignore entries for their executables
- ✅ Creates a temporary file with all entries
- ✅ Shows you what will be ignored

---

## 🔧 Troubleshooting

### Issue: Executable is Being Tracked

**Problem:**

```bash
git status
# Shows: modified: C++/07_Loops/whileLoop
```

**Solution 1: Check if it's already tracked**

```bash
git ls-files | grep whileLoop
```

If it shows up, it was tracked before. Remove it:

```bash
git rm --cached C++/07_Loops/whileLoop
git commit -m "Remove tracked executable"
```

**Solution 2: Add to .gitignore**

```bash
echo "C++/**/whileLoop" >> .gitignore
git add .gitignore
git commit -m "Ignore whileLoop executable"
```

---

### Issue: Source File is Being Ignored

**Problem:**

```bash
git add myfile.cpp
# The following paths are ignored by one of your .gitignore files
```

**Solution: Force add it**

```bash
git add -f myfile.cpp
```

Or check your `.gitignore` for overly broad patterns.

---

### Issue: Want to Track an Executable

**Problem:** Need to track a specific executable for some reason.

**Solution: Force add it**

```bash
git add -f path/to/executable
```

**Note:** This is generally not recommended for compiled files.

---

## 🎯 Best Practices

### ✅ DO:

1. **Ignore all compiled files**
   - Executables
   - Object files
   - Libraries

2. **Track source files**
   - `.cpp`, `.h`, `.hpp`
   - Documentation (`.md`)
   - Configuration files

3. **Ignore IDE-specific files**
   - `.DS_Store` (macOS)
   - `Thumbs.db` (Windows)
   - `.cache/`

4. **Track build scripts**
   - `Makefile`
   - `CMakeLists.txt`
   - Shell scripts

### ❌ DON'T:

1. **Don't track compiled files**
   - They're platform-specific
   - They can be regenerated
   - They bloat the repository

2. **Don't ignore source files**
   - Always track `.cpp`, `.h`, `.hpp`
   - Track documentation

3. **Don't ignore configuration**
   - `.vscode/settings.json` should be tracked
   - `.clang-format` should be tracked

---

## 📊 File Type Summary

| File Type         | Example                     | Tracked? | Why                |
| ----------------- | --------------------------- | -------- | ------------------ |
| **Source**        | `*.cpp`, `*.h`              | ✅ Yes   | Core code          |
| **Executable**    | `a.out`, `whileLoop`        | ❌ No    | Can be regenerated |
| **Object**        | `*.o`, `*.obj`              | ❌ No    | Intermediate files |
| **Documentation** | `*.md`                      | ✅ Yes   | Important info     |
| **Config**        | `.vscode/`, `.clang-format` | ✅ Yes   | Project settings   |
| **Scripts**       | `*.sh`                      | ✅ Yes   | Build automation   |
| **System**        | `.DS_Store`                 | ❌ No    | OS-specific        |

---

## 🔍 Verify Your Setup

Run these commands to verify everything is set up correctly:

```bash
# 1. Compile a program
g++ C++/07_Loops/whileLoop.cpp -o C++/07_Loops/whileLoop

# 2. Check git status
git status

# 3. Verify executable is ignored
git check-ignore -v C++/07_Loops/whileLoop

# 4. List all ignored files
git status --ignored | grep whileLoop
```

**Expected Result:**

- ✅ `whileLoop` executable is ignored
- ✅ `whileLoop.cpp` is tracked
- ✅ No compiled files in `git status`

---

## 📚 Related Documentation

- **Main README:** [README.md](../README.md)
- **Setup Guide:** [SETUP.md](SETUP.md)
- **Quick Run Guide:** [QUICK_RUN_GUIDE.md](QUICK_RUN_GUIDE.md)

---

## 🎓 Learn More

- **Git Documentation:** https://git-scm.com/docs/gitignore
- **GitHub Gitignore Templates:** https://github.com/github/gitignore
- **Interactive Gitignore:** https://www.toptal.com/developers/gitignore

---

**Your repository is configured to ignore all compiled files automatically! 🎉**

Just write code, compile, and commit - Git handles the rest!
