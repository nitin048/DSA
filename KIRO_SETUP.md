# Kiro IDE Setup Guide

You're using Kiro IDE (not VS Code). Here's how to get IntelliSense and formatting working.

---

## 🎯 Understanding Kiro

Kiro is built on VS Code but is a separate IDE. The configuration is similar but not identical.

---

## ✅ What's Already Configured

I've set up:

- ✅ `.vscode/settings.json` - Editor settings
- ✅ `.vscode/c_cpp_properties.json` - C++ IntelliSense config
- ✅ `.vscode/extensions.json` - Recommended extensions
- ✅ `.clang-format` - Formatting rules
- ✅ clang-format installed on your system

---

## 🔧 Fix IntelliSense in Kiro

### Step 1: Check if C/C++ Extension is Available

Kiro might not have the Microsoft C/C++ extension by default.

**Check:**

1. Look for an Extensions panel in Kiro
2. Search for "C/C++"
3. If available, install it

**If not available:**
Kiro might use a different IntelliSense system. Check Kiro's documentation for C++ support.

---

### Step 2: Alternative - Use clangd

If Microsoft C/C++ extension isn't available, use clangd:

1. **Install clangd:**

   ```bash
   brew install llvm
   ```

2. **Create `.vscode/settings.json` with clangd:**

   ```json
   {
   	"clangd.path": "/opt/homebrew/opt/llvm/bin/clangd",
   	"clangd.arguments": [
   		"--background-index",
   		"--clang-tidy",
   		"--completion-style=detailed",
   		"--header-insertion=iwyu"
   	]
   }
   ```

3. **Restart Kiro**

---

## 🎨 Fix Formatting in Kiro

### Option 1: Use clang-format directly

Since clang-format is installed, you can format files manually:

**Format current file:**

```bash
clang-format -i C++/Conditional_Stmt/if_else_if.cpp
```

**Format all C++ files:**

```bash
find C++ -name "*.cpp" -exec clang-format -i {} \;
```

---

### Option 2: Create a Format Script

I'll create a script you can run to format your code:

**Create `format.sh`:**

```bash
#!/bin/bash
# Format all C++ files in the project
find . -name "*.cpp" -o -name "*.h" -o -name "*.hpp" | xargs clang-format -i
echo "✅ All files formatted!"
```

**Make it executable:**

```bash
chmod +x format.sh
```

**Run it:**

```bash
./format.sh
```

---

### Option 3: Check Kiro's Built-in Formatter

Kiro might have its own formatting system:

1. **Check Kiro's settings/preferences**
2. Look for "Format" or "Code Style" options
3. Enable "Format on Save" if available

---

## 🔍 Troubleshooting IntelliSense

### Issue: No Auto-completion

**Possible causes:**

1. **Kiro doesn't have C++ language support built-in**
   - Check Kiro documentation
   - Look for C++ extension in Kiro's extension marketplace

2. **Compiler not detected**
   - Verify: `clang++ --version`
   - Make sure Xcode Command Line Tools are installed

3. **Configuration not loaded**
   - Check if `.vscode/c_cpp_properties.json` is being read
   - Kiro might use a different config location

---

### Issue: No Error Detection

**Try:**

1. **Check if Kiro has a Problems panel**
   - Look for errors/warnings panel
   - Might be under View menu

2. **Compile manually to see errors:**
   ```bash
   clang++ -std=c++17 -Wall -Wextra C++/Conditional_Stmt/if_else_if.cpp
   ```

---

## 🎯 Recommended Workflow for Kiro

Since IntelliSense might not work perfectly in Kiro, here's a practical workflow:

### 1. Write Code in Kiro

- Use the editor normally
- Use code snippets (if available)

### 2. Format Before Saving

```bash
# Format current file
clang-format -i path/to/file.cpp
```

### 3. Check for Errors

```bash
# Compile to check for errors
clang++ -std=c++17 -Wall -Wextra -fsyntax-only file.cpp
```

### 4. Run Code

```bash
# Compile and run
clang++ -std=c++17 file.cpp -o output && ./output
```

---

## 🛠️ Create Helper Scripts

Let me create some helper scripts for you:

### `check.sh` - Check for errors without compiling

```bash
#!/bin/bash
clang++ -std=c++17 -Wall -Wextra -fsyntax-only "$1"
```

### `format.sh` - Format a file

```bash
#!/bin/bash
clang-format -i "$1"
echo "✅ Formatted: $1"
```

### `run.sh` - Compile and run

```bash
#!/bin/bash
FILE="$1"
OUTPUT="${FILE%.cpp}"
clang++ -std=c++17 -Wall -Wextra "$FILE" -o "$OUTPUT" && "./$OUTPUT"
```

**Usage:**

```bash
chmod +x check.sh format.sh run.sh

./format.sh C++/Conditional_Stmt/if_else_if.cpp
./check.sh C++/Conditional_Stmt/if_else_if.cpp
./run.sh C++/Conditional_Stmt/if_else_if.cpp
```

---

## 📚 What to Check in Kiro

1. **Kiro Settings/Preferences**
   - Look for C++ language support settings
   - Check if there's a "Format on Save" option
   - Look for compiler path configuration

2. **Kiro Extensions/Plugins**
   - Check if Kiro has an extension marketplace
   - Look for C++ or clangd extensions

3. **Kiro Documentation**
   - Check Kiro's official docs for C++ setup
   - Look for IntelliSense configuration guide

---

## 🎯 Quick Test

Let's test what works:

### Test 1: Formatting (Manual)

```bash
cd ~/Learning/DSA
clang-format -i C++/Conditional_Stmt/if_else_if.cpp
```

**Expected:** File gets formatted with proper indentation.

### Test 2: Syntax Checking

```bash
clang++ -std=c++17 -Wall -Wextra -fsyntax-only C++/Conditional_Stmt/if_else_if.cpp
```

**Expected:** Shows any syntax errors, or nothing if code is correct.

### Test 3: Compilation

```bash
clang++ -std=c++17 C++/Conditional_Stmt/if_else_if.cpp -o test && ./test
```

**Expected:** Compiles and runs the program.

---

## 💡 Alternative: Use VS Code for C++ Development

If Kiro doesn't have good C++ support, consider:

1. **Use VS Code for C++ files**
   - All the configuration I created will work perfectly
   - IntelliSense, formatting, everything works

2. **Use Kiro for other tasks**
   - Keep using Kiro for what it's good at

3. **Or use both:**
   - Edit in Kiro
   - Format/check in VS Code
   - Best of both worlds

---

## 🔗 Resources

- **Kiro Documentation**: Check for C++ language support
- **clang-format**: Already installed and working
- **clangd**: Alternative IntelliSense engine

---

## ✅ What Definitely Works

Even without IntelliSense in Kiro, you have:

- ✅ **Manual formatting**: `clang-format -i file.cpp`
- ✅ **Syntax checking**: `clang++ -fsyntax-only file.cpp`
- ✅ **Compilation**: `clang++ file.cpp -o output`
- ✅ **All configuration files** ready for when/if Kiro supports them

---

## 🎯 Next Steps

1. **Check Kiro's documentation** for C++ support
2. **Look for C++ extensions** in Kiro
3. **Try the manual formatting** command to format your files
4. **Consider using VS Code** for C++ development (all config is ready)

---

**Let me know what you find in Kiro's settings/extensions, and I can help configure it properly!** 🚀
