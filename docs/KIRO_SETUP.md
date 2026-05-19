# 🎯 Kiro IDE Setup Guide for C++ Development

Complete guide to setting up IntelliSense, auto-formatting, and C++ development in Kiro IDE.

---

## ✅ What's Already Configured

This repository comes pre-configured with:

- ✅ `.vscode/settings.json` - clangd and editor settings
- ✅ `.vscode/c_cpp_properties.json` - C++ IntelliSense configuration
- ✅ `.vscode/extensions.json` - Recommended extensions
- ✅ `.clang-format` - Code formatting rules (Google Style)
- ✅ `compile_commands.json` - Build configuration for clangd
- ✅ `scripts/setup.sh` - Automated setup script
- ✅ `scripts/format.sh` - Manual formatting script

---

## 🚀 Quick Setup (Automated)

Run the setup script to install everything automatically:

```bash
cd ~/Learning/DSA
chmod +x scripts/setup.sh
./scripts/setup.sh
```

This will:

1. Install LLVM (includes clangd and clang-format)
2. Install clangd extension for Kiro
3. Verify installation
4. Provide next steps

**After running setup:**

1. **Quit Kiro completely** (Cmd + Q)
2. **Wait 3 seconds**
3. **Reopen Kiro**
4. **Open this project**

---

## 🔧 Manual Setup

If you prefer to install manually:

### Step 1: Install LLVM (clangd + clang-format)

```bash
brew install llvm
```

### Step 2: Install clangd Extension for Kiro

```bash
kiro --install-extension llvm-vs-code-extensions.vscode-clangd
```

### Step 3: Verify Installation

```bash
# Check clangd
/opt/homebrew/opt/llvm/bin/clangd --version

# Check clang-format
clang-format --version

# Check Kiro extension
kiro --list-extensions | grep clangd
```

### Step 4: Restart Kiro

**CRITICAL:** You MUST restart Kiro for changes to take effect:

1. Quit Kiro completely (Cmd + Q)
2. Wait 3 seconds
3. Reopen Kiro
4. Open this project

---

## 🧪 Test Your Setup

After restarting Kiro, test these features:

### Test 1: IntelliSense (Auto-completion)

1. Open any `.cpp` file
2. Type `std::`
3. **Should see suggestions!** (cout, cin, vector, etc.)

### Test 2: Error Detection

1. Type: `int x = "hello";`
2. **Should see red squiggle with error!**

### Test 3: Hover Information

1. Hover over `cout`
2. **Should see type information!**

### Test 4: Format on Save

1. Make code messy:
   ```cpp
   int main(){
   int x=10;
   return 0;}
   ```
2. Press **Cmd + S** (Save)
3. **Should auto-format!**

---

## 🎯 Features You'll Get

### ✨ IntelliSense

- **Auto-completion** as you type
- **Parameter hints** for functions
- **Error detection** in real-time
- **Hover documentation** for symbols
- **Go to definition** (Cmd + Click)
- **Find all references** (Shift + F12)

### 🎨 Auto-Formatting

- **Format on save** (Cmd + S)
- **Format on paste**
- **Consistent code style** (Google Style, 4-space indent)
- **Manual format** (Shift + Option + F)

### 🔍 Code Navigation

- **Go to definition** (F12)
- **Find references** (Shift + F12)
- **Symbol search** (Cmd + T)
- **Rename symbol** (F2)

---

## ⌨️ Keyboard Shortcuts

| Action                 | Shortcut                        |
| ---------------------- | ------------------------------- |
| **Auto-complete**      | Type and wait, or Ctrl + Space  |
| **Format Document**    | Shift + Option + F              |
| **Save (auto-format)** | Cmd + S                         |
| **Go to Definition**   | Cmd + Click or F12              |
| **Find References**    | Shift + F12                     |
| **Rename Symbol**      | F2                              |
| **Show Hover**         | Hover mouse or Cmd + K, Cmd + I |

---

## 🛠️ Manual Formatting

If you need to format files manually:

### Format Single File

```bash
clang-format -i path/to/file.cpp
```

### Format All C++ Files

```bash
./scripts/format.sh
```

Or manually:

```bash
find C++ -name "*.cpp" -o -name "*.h" -o -name "*.hpp" | xargs clang-format -i
```

---

## 🔍 Troubleshooting

### Issue: IntelliSense Not Working

**Solutions:**

1. **Check clangd is running:**
   - Look at bottom-right corner of Kiro
   - Should show "clangd" indicator

2. **Check Output panel:**
   - View → Output
   - Select "clangd" from dropdown
   - Look for error messages

3. **Wait for indexing:**
   - clangd needs 10-20 seconds to index files after opening

4. **Restart clangd:**
   - Command Palette (Cmd + Shift + P)
   - Type "clangd: Restart language server"

5. **Verify installation:**
   ```bash
   /opt/homebrew/opt/llvm/bin/clangd --version
   kiro --list-extensions | grep clangd
   ```

### Issue: Format on Save Not Working

**Solutions:**

1. **Check settings:**
   - Open `.vscode/settings.json`
   - Verify `"editor.formatOnSave": true`

2. **Check clangd extension:**
   - Make sure clangd extension is installed and enabled

3. **Manual format:**
   - Try Shift + Option + F
   - If this works, format on save should work too

4. **Restart Kiro:**
   - Quit completely (Cmd + Q)
   - Reopen

### Issue: Errors Not Showing

**Solutions:**

1. **Check compile_commands.json exists:**

   ```bash
   ls -la compile_commands.json
   ```

2. **Verify C++ standard:**
   - Open `.vscode/c_cpp_properties.json`
   - Check `"cppStandard": "c++17"`

3. **Check clangd output:**
   - View → Output → clangd
   - Look for parsing errors

---

## 📊 Verify Installation

Check that everything is installed correctly:

```bash
# Check clangd
/opt/homebrew/opt/llvm/bin/clangd --version
# Expected: Homebrew clangd version 22.x.x

# Check clang-format
clang-format --version
# Expected: clang-format version 22.x.x

# Check Kiro extension
kiro --list-extensions | grep clangd
# Expected: llvm-vs-code-extensions.vscode-clangd

# Test clangd on a file
/opt/homebrew/opt/llvm/bin/clangd --check=C++/01_Basics/FirstCode.cpp
# Expected: No errors
```

---

## 🎨 Formatting Configuration

The repository uses **Google Style** with these settings:

- **Indent:** 4 spaces
- **Column Limit:** 100 characters
- **Brace Style:** Attach (K&R style)
- **Pointer Alignment:** Left (`int* ptr`)

To customize, edit `.clang-format` in the root directory.

---

## 💡 Understanding Kiro

Kiro is built on VS Code but is a separate IDE. Key differences:

- **Extensions:** Kiro has its own extension marketplace
- **Configuration:** Uses same `.vscode/` folder structure
- **Language Support:** Requires clangd (Microsoft C/C++ extension not available)
- **Commands:** Uses `kiro` CLI instead of `code`

---

## 🔗 Alternative: Use VS Code

If you prefer VS Code, all configuration works there too:

1. Open this project in VS Code
2. Install recommended extensions (VS Code will prompt)
3. Everything works out of the box!

---

## ✅ Success Checklist

After setup, verify:

- [ ] Ran `scripts/setup.sh` or installed manually
- [ ] Restarted Kiro (Cmd + Q, then reopen)
- [ ] Opened a `.cpp` file
- [ ] Typed `std::` and saw suggestions
- [ ] Hover over `cout` shows information
- [ ] Pressed Cmd + S and code auto-formatted
- [ ] Typed `int x = "hello";` and saw red squiggle
- [ ] Bottom-right shows "clangd" indicator

---

## 🆘 Still Having Issues?

1. **Check Kiro version:**

   ```bash
   kiro --version
   ```

2. **Reinstall clangd extension:**

   ```bash
   kiro --uninstall-extension llvm-vs-code-extensions.vscode-clangd
   kiro --install-extension llvm-vs-code-extensions.vscode-clangd
   ```

3. **Check LLVM installation:**

   ```bash
   brew info llvm
   ```

4. **Try a different file:**
   - Sometimes clangd needs time to index
   - Try opening a different `.cpp` file

5. **Check for conflicts:**
   - Make sure no other C++ extensions are installed
   - Only clangd should be active

---

## 📚 Additional Resources

- **clangd Documentation:** https://clangd.llvm.org/
- **clang-format Documentation:** https://clang.llvm.org/docs/ClangFormat.html
- **LLVM Project:** https://llvm.org/

---

## 🎉 You're All Set!

Once setup is complete and Kiro is restarted, you'll have:

- ✅ Full IntelliSense support
- ✅ Auto-formatting on save
- ✅ Real-time error detection
- ✅ Code navigation
- ✅ Professional C++ development environment

**Happy Coding! 🚀**
