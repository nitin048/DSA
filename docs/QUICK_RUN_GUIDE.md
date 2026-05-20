# 🚀 Quick C++ Compile & Run Guide

Tired of typing `g++ file.cpp && ./a.out` every time? Here are easier ways!

---

## 🎯 Method 1: Use the Run Script (Easiest!)

We've created a script that compiles and runs your code in one command.

### Usage:

```bash
./scripts/run.sh C++/07_Loops/01_prblm.cpp
```

### What it does:

- ✅ Compiles your code with warnings enabled
- ✅ Shows compilation status
- ✅ Runs the program automatically
- ✅ Creates executable with same name as .cpp file

### Example:

```bash
./scripts/run.sh C++/07_Loops/whileLoop.cpp
```

**Output:**

```
🔨 Compiling C++/07_Loops/whileLoop.cpp...
✅ Compilation successful!
🚀 Running C++/07_Loops/whileLoop...
-----------------------------------
1 2 3 4 5 ... 500
-----------------------------------
✅ Program finished
```

---

## 🎯 Method 2: Super Quick Script (Shortest!)

For the absolute quickest way:

```bash
./scripts/cpp C++/07_Loops/01_prblm.cpp
```

This is the shortest command - just 13 characters + filename!

---

## 🎯 Method 3: Use Makefile

If you prefer `make` commands:

```bash
make run FILE=C++/07_Loops/01_prblm.cpp
```

### Clean compiled files:

```bash
make clean
```

---

## 🎯 Method 4: Shell Aliases (One-Time Setup)

Add these to your `~/.bashrc` or `~/.zshrc`:

```bash
# C++ Quick Run Aliases
alias cpprun='g++ -std=c++17 -Wall -Wextra $1 && ./a.out'
alias cpprunf='g++ -std=c++17 -Wall -Wextra $1 -o ${1%.cpp} && ./${1%.cpp}'
```

Then reload your shell:

```bash
source ~/.bashrc  # or source ~/.zshrc
```

### Usage after setup:

```bash
cpprun file.cpp    # Creates a.out
cpprunf file.cpp   # Creates file executable
```

### To see the aliases:

```bash
./scripts/setup_aliases.sh
```

---

## 🎯 Method 5: Kiro/VS Code (Click to Run!)

If you're using Kiro or VS Code:

### Option A: Run Button

1. Open your `.cpp` file
2. Click the **▶️ Run** button in top-right corner
3. Done!

### Option B: Keyboard Shortcut

- Press **Ctrl + Alt + N** (or Cmd + Option + N on Mac)

### Option C: Right-Click

1. Right-click in the editor
2. Select "Run Code"

---

## 📊 Comparison Table

| Method           | Command Length              | Setup Required | Best For         |
| ---------------- | --------------------------- | -------------- | ---------------- |
| **run.sh**       | `./scripts/run.sh file.cpp` | None           | Detailed output  |
| **cpp**          | `./scripts/cpp file.cpp`    | None           | Quickest typing  |
| **make**         | `make run FILE=file.cpp`    | None           | Makefile fans    |
| **alias**        | `cpprun file.cpp`           | One-time       | Shortest command |
| **Kiro/VS Code** | Click ▶️                    | None           | GUI users        |

---

## 🎨 Customization

### Add Your Own Flags

Edit `scripts/run.sh` to add custom compiler flags:

```bash
# Add optimization
g++ -std=c++17 -O2 -Wall -Wextra "$FILE" -o "$OUTPUT"

# Add debugging symbols
g++ -std=c++17 -g -Wall -Wextra "$FILE" -o "$OUTPUT"

# Add math library
g++ -std=c++17 -Wall -Wextra "$FILE" -o "$OUTPUT" -lm
```

---

## 💡 Pro Tips

### Tip 1: Create a Shorter Alias

Add to your shell config:

```bash
alias r='./scripts/cpp'
```

Then just type:

```bash
r file.cpp
```

### Tip 2: Run from Any Directory

Add the scripts folder to your PATH:

```bash
# Add to ~/.bashrc or ~/.zshrc
export PATH="$PATH:$HOME/Learning/DSA/scripts"
```

Then you can run from anywhere:

```bash
cpp file.cpp
run.sh file.cpp
```

### Tip 3: Auto-Clean Before Compile

Modify `scripts/run.sh` to clean old executables:

```bash
# Add before compilation
rm -f "$OUTPUT" a.out
```

### Tip 4: Add Input File Support

For programs that need input files:

```bash
./scripts/run.sh file.cpp < input.txt
```

Or redirect output:

```bash
./scripts/run.sh file.cpp > output.txt
```

---

## 🔧 Troubleshooting

### Issue: Permission Denied

**Solution:**

```bash
chmod +x scripts/run.sh
chmod +x scripts/cpp
```

### Issue: Script Not Found

**Solution:**

```bash
# Make sure you're in the DSA directory
cd ~/Learning/DSA

# Or use full path
~/Learning/DSA/scripts/run.sh file.cpp
```

### Issue: Compilation Errors

The scripts will show compilation errors clearly:

```
🔨 Compiling file.cpp...
file.cpp:5:5: error: expected ';' before 'return'
❌ Compilation failed!
```

---

## 📝 Examples

### Example 1: Run a Loop Problem

```bash
./scripts/run.sh C++/07_Loops/Loops_Problems/01_prblm.cpp
```

### Example 2: Run While Loop

```bash
./scripts/cpp C++/07_Loops/whileLoop.cpp
```

### Example 3: Run with Make

```bash
make run FILE=C++/06_Conditionals/ifElse.cpp
```

### Example 4: Run Multiple Files

```bash
./scripts/run.sh file1.cpp
./scripts/run.sh file2.cpp
./scripts/run.sh file3.cpp
```

### Example 5: Run with Input

```bash
echo "5" | ./scripts/cpp file.cpp
```

---

## 🎯 Recommended Workflow

### For Quick Testing:

```bash
./scripts/cpp file.cpp
```

### For Detailed Output:

```bash
./scripts/run.sh file.cpp
```

### For Production:

```bash
g++ -std=c++17 -O2 -Wall -Wextra file.cpp -o program
./program
```

---

## 🚀 Quick Reference Card

```bash
# Shortest command (13 chars + filename)
./scripts/cpp file.cpp

# Detailed output
./scripts/run.sh file.cpp

# Using make
make run FILE=file.cpp

# With alias (after setup)
cpprun file.cpp

# In Kiro/VS Code
Click ▶️ or Ctrl+Alt+N
```

---

## 📚 Related Documentation

- **Main Setup:** [docs/SETUP.md](SETUP.md)
- **Kiro Setup:** [docs/KIRO_SETUP.md](KIRO_SETUP.md)
- **Formatting:** [docs/FORMATTING.md](FORMATTING.md)

---

**Now you can compile and run C++ programs with ease! 🎉**

Choose the method that works best for you!
