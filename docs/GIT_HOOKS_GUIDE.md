# 🎣 Git Hooks Guide

This repository uses **automated git hooks** to enhance your development workflow with beautiful, informative messages.

---

## 🎯 What Are Git Hooks?

Git hooks are scripts that run automatically at specific points in the git workflow:

- **Pre-commit:** Runs BEFORE a commit is created
- **Post-commit:** Runs AFTER a commit is successfully created

---

## 🔧 Installed Hooks

### 1. **Pre-Commit Hook** (Quality Check)

**Location:** `.git/hooks/pre-commit`

**Purpose:** Prevents committing compiled executables

**What it does:**

- ✅ Scans C++ directory for untracked files
- ✅ Identifies executables without extensions
- ✅ Shows which files should be in `.gitignore`
- ✅ **Blocks commit** if executables are found
- ✅ Provides helpful fix suggestions

**Example Output:**

```
🔍 Checking for untracked executables...

╔════════════════════════════════════════════════════════════════╗
║  ⚠️  WARNING: Untracked Executables Found!                  ║
╚════════════════════════════════════════════════════════════════╝

The following executable files are not in .gitignore:
───────────────────────────────────────────────────
  ❌ C++/08_Patterns/squarePattern
     → Compiled from: C++/08_Patterns/squarePattern.cpp
───────────────────────────────────────────────────

💡 To fix this issue:

  Option 1: Add to .gitignore
    echo "C++/**/<filename>" >> .gitignore

  Option 2: Run helper script
    ./scripts/check_executables.sh

  Option 3: Update .gitignore automatically
    ./scripts/update_gitignore.sh

╔════════════════════════════════════════════════════════════════╗
║  🚫 COMMIT ABORTED                                           ║
║  Fix the issues above and try again                         ║
╚════════════════════════════════════════════════════════════════╝
```

---

### 2. **Post-Commit Hook** (Success Message)

**Location:** `.git/hooks/post-commit`

**Purpose:** Shows beautiful summary after successful commit

**What it displays:**

- ✅ Commit hash and branch
- ✅ Commit message and author
- ✅ Date and time
- ✅ Files changed statistics
- ✅ List of modified files with icons
- ✅ Random helpful tip
- ✅ Unpushed commits warning
- ✅ Success celebration message

**Example Output:**

```
╔════════════════════════════════════════════════════════════════╗
║  ✅ COMMIT SUCCESSFUL!                                        ║
╚════════════════════════════════════════════════════════════════╝

📝 Commit Details:
   Hash:    0468412
   Branch:  Feature/08-Patterns
   Message: patterns
   Author:  Nitin Pradhan
   Date:    2026-05-20 15:30:45

📊 Changes:
   6 file(s) changed
   +1368 insertion(s)
   -85 deletion(s)

📁 Modified Files:
   🚫  .gitignore
   📋  .vscode/launch.json
   📄  docs/COMPREHENSIVE_GITIGNORE.md
   🔵  C++/08_Patterns/squarePattern.cpp
   🔵  C++/08_Patterns/trianglePattern.cpp
   📄  C++/08_Patterns/README.md

💡 Tip: Use 'git push' to push your changes to remote

⚠️  You have 1 unpushed commit(s)
   Run: git push to push to remote

╔════════════════════════════════════════════════════════════════╗
║  🎉 Great work! Keep coding!                                 ║
╚════════════════════════════════════════════════════════════════╝
```

---

## 🎨 Features

### **Color-Coded Output**

- 🟢 **Green:** Success messages
- 🔵 **Cyan:** Information
- 🟡 **Yellow:** Warnings and tips
- 🔴 **Red:** Errors
- 🟣 **Magenta:** Branch names

### **File Type Icons**

| Icon | File Type          |
| ---- | ------------------ |
| 🔵   | `.cpp` files       |
| 🔷   | `.h`, `.hpp` files |
| 📄   | `.md` files        |
| ⚙️   | `.sh` scripts      |
| 📋   | `.json` files      |
| 🚫   | `.gitignore`       |
| 📝   | Other files        |

### **Random Tips**

The post-commit hook shows random helpful tips:

- "Use 'git log --oneline' to see commit history"
- "Use 'git diff HEAD~1' to see what changed"
- "Use './scripts/check_executables.sh' before committing"
- "Use './scripts/format.sh' to format all files"
- And more!

---

## 🚀 How It Works

### **Normal Workflow:**

```bash
# 1. Make changes
vim C++/08_Patterns/squarePattern.cpp

# 2. Stage changes
git add .

# 3. Commit
git commit -m "Add square pattern"

# Pre-commit hook runs:
🔍 Checking for untracked executables...
✅ No untracked files in C++ directory

# Commit succeeds

# Post-commit hook runs:
╔════════════════════════════════════════════════════════════════╗
║  ✅ COMMIT SUCCESSFUL!                                        ║
╚════════════════════════════════════════════════════════════════╝
[... beautiful summary ...]
```

---

### **When Executables Are Found:**

```bash
# 1. Compile code
./scripts/cpp C++/08_Patterns/newPattern.cpp

# 2. Try to commit
git commit -m "Add new pattern"

# Pre-commit hook runs:
🔍 Checking for untracked executables...

╔════════════════════════════════════════════════════════════════╗
║  ⚠️  WARNING: Untracked Executables Found!                  ║
╚════════════════════════════════════════════════════════════════╝

  ❌ C++/08_Patterns/newPattern

💡 To fix this issue:
  Option 1: Add to .gitignore
    echo "C++/**/newPattern" >> .gitignore

╔════════════════════════════════════════════════════════════════╗
║  🚫 COMMIT ABORTED                                           ║
╚════════════════════════════════════════════════════════════════╝

# 3. Fix the issue
echo "C++/**/newPattern" >> .gitignore

# 4. Try again
git commit -m "Add new pattern"

# Now it works! ✅
```

---

## 🔧 Customization

### **Modify Pre-Commit Hook**

Edit `.git/hooks/pre-commit` to:

- Change warning messages
- Add more checks
- Customize colors

### **Modify Post-Commit Hook**

Edit `.git/hooks/post-commit` to:

- Add more tips
- Change formatting
- Add custom statistics

---

## 🎯 Benefits

### **For You:**

- ✅ **Never commit executables** - Automatic protection
- ✅ **Beautiful feedback** - Know exactly what happened
- ✅ **Helpful tips** - Learn git commands
- ✅ **Statistics** - See your progress
- ✅ **Professional** - Industry-standard workflow

### **For Team:**

- ✅ **Consistent** - Everyone gets same checks
- ✅ **Educational** - Tips help everyone learn
- ✅ **Quality** - Prevents common mistakes
- ✅ **Motivation** - Celebration messages!

---

## 🧪 Testing the Hooks

### **Test Pre-Commit Hook:**

```bash
# Create a test executable
touch C++/08_Patterns/testExecutable
chmod +x C++/08_Patterns/testExecutable

# Try to commit
git add .
git commit -m "Test"

# Should be blocked! ✅
```

---

### **Test Post-Commit Hook:**

```bash
# Make a valid commit
echo "// test" >> C++/08_Patterns/test.cpp
git add .
git commit -m "Test commit"

# Should show beautiful summary! ✅
```

---

## 🛠️ Troubleshooting

### **Issue: Hooks Not Running**

**Solution 1: Check permissions**

```bash
chmod +x .git/hooks/pre-commit
chmod +x .git/hooks/post-commit
```

**Solution 2: Verify hooks exist**

```bash
ls -la .git/hooks/
```

**Solution 3: Test manually**

```bash
.git/hooks/pre-commit
.git/hooks/post-commit
```

---

### **Issue: Want to Bypass Pre-Commit**

**Not recommended, but possible:**

```bash
git commit --no-verify -m "Message"
```

**⚠️ Warning:** This skips all checks!

---

### **Issue: Colors Not Showing**

**Check terminal support:**

```bash
echo $TERM
```

**If colors don't work, edit hooks and remove color codes.**

---

## 📊 Hook Statistics

| Hook            | Lines | Features                                              |
| --------------- | ----- | ----------------------------------------------------- |
| **Pre-commit**  | ~70   | Executable check, colored output, helpful suggestions |
| **Post-commit** | ~120  | Commit summary, statistics, tips, warnings            |
| **Total**       | ~190  | Comprehensive workflow enhancement                    |

---

## 🎓 Learning from Hooks

The hooks teach you:

- ✅ Git commands (`git log`, `git diff`, `git push`)
- ✅ Best practices (don't commit executables)
- ✅ Repository structure
- ✅ Helper scripts available

---

## 🔗 Related Documentation

- **Main README:** [README.md](../README.md)
- **Gitignore Guide:** [GITIGNORE_GUIDE.md](GITIGNORE_GUIDE.md)
- **Quick Reference:** [QUICK_REFERENCE.md](QUICK_REFERENCE.md)

---

## ✅ Summary

**Git hooks provide:**

1. **Automatic quality checks** - Pre-commit hook
2. **Beautiful feedback** - Post-commit hook
3. **Helpful tips** - Random git tips
4. **Statistics** - See your changes
5. **Protection** - Prevent mistakes
6. **Motivation** - Celebration messages!

**Result:** Professional, automated, beautiful git workflow! 🎉

---

**Enjoy your enhanced git experience!** 🚀
