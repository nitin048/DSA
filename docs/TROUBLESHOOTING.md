# IntelliSense Troubleshooting Guide

If IntelliSense is not working, follow these steps:

---

## ✅ Step 1: Verify C/C++ Extension is Installed

1. Open Extensions panel: **Cmd + Shift + X**
2. Search for "C/C++"
3. Look for **"C/C++" by Microsoft**
4. If not installed, click **Install**
5. If installed, check if it needs an update

---

## ✅ Step 2: Reload VS Code Window

After installing or updating the extension:

1. Press **Cmd + Shift + P**
2. Type: `Developer: Reload Window`
3. Press **Enter**

---

## ✅ Step 3: Check IntelliSense Status

Look at the **bottom-right corner** of VS Code:

- ✅ Should show: **"C/C++: Ready"** or a flame icon 🔥
- ❌ If it shows an error or warning, click it for details

---

## ✅ Step 4: Select Configuration

1. Open any `.cpp` file
2. Look at bottom-right status bar
3. Click on the configuration name (should show "macos-clang-arm64")
4. If not, select it from the dropdown

---

## ✅ Step 5: Reset IntelliSense Database

If IntelliSense is still not working:

1. Press **Cmd + Shift + P**
2. Type: `C/C++: Reset IntelliSense Database`
3. Press **Enter**
4. Wait for it to rebuild (may take a minute)

---

## ✅ Step 6: Check Compiler Path

1. Press **Cmd + Shift + P**
2. Type: `C/C++: Edit Configurations (UI)`
3. Press **Enter**
4. Check **Compiler path**: Should be `/usr/bin/clang++`
5. Check **IntelliSense mode**: Should be `macos-clang-arm64`
6. Check **C++ standard**: Should be `c++17`

---

## ✅ Step 7: Verify Compiler Installation

Open Terminal and run:

```bash
clang++ --version
```

Should output something like:
```
Apple clang version 16.0.0 (clang-1600.0.26.6)
```

If not found, install Xcode Command Line Tools:
```bash
xcode-select --install
```

---

## ✅ Step 8: Check Output Panel

1. Press **Cmd + Shift + U** (or View → Output)
2. Select **"C/C++"** from the dropdown
3. Look for any error messages
4. Common issues will be shown here

---

## ✅ Step 9: Enable Logging

Temporarily enable detailed logging:

1. Open `.vscode/settings.json`
2. Find: `"C_Cpp.loggingLevel": "Information"`
3. Change to: `"C_Cpp.loggingLevel": "Debug"`
4. Reload window
5. Check Output panel for detailed logs
6. Change back to "Information" after troubleshooting

---

## ✅ Step 10: Test IntelliSense Features

Open `calculator.cpp` and test:

### 1. Auto-completion
- Type `std::` and wait
- Should show suggestions like `cout`, `cin`, `vector`, etc.

### 2. Parameter Hints
- Type `cout <<` and wait
- Should show parameter information

### 3. Hover Information
- Hover over `cout`
- Should show: `std::ostream cout`

### 4. Go to Definition
- **Cmd + Click** on `cout`
- Should jump to definition (or show in peek window)

### 5. Error Detection
- Type: `int x = "hello";`
- Should show red squiggle with error message

---

## 🔧 Common Issues and Solutions

### Issue 1: "IntelliSense engine is unavailable"

**Solution:**
1. Check if C/C++ extension is installed
2. Reload VS Code window
3. Check Output panel for errors

### Issue 2: "No IntelliSense suggestions"

**Solution:**
1. Make sure file is saved with `.cpp` extension
2. Check if configuration is selected (bottom-right)
3. Reset IntelliSense database (Step 5)

### Issue 3: "Compiler path not found"

**Solution:**
1. Install Xcode Command Line Tools:
   ```bash
   xcode-select --install
   ```
2. Update compiler path in `c_cpp_properties.json`

### Issue 4: "Include errors detected"

**Solution:**
1. Check `includePath` in `c_cpp_properties.json`
2. Make sure paths exist:
   ```bash
   ls /Library/Developer/CommandLineTools/usr/include/c++/v1
   ```

### Issue 5: "IntelliSense is slow"

**Solution:**
1. Reduce `includePath` scope
2. Add folders to `excludeSearch` in settings
3. Close other heavy applications

---

## 🎯 Quick Test

Create a new file `test.cpp`:

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Type 'std::' here and wait for suggestions
    
    // Type 'cout' and hover over it
    
    // Type 'int x = "hello";' to see error
    
    return 0;
}
```

**Expected Results:**
- ✅ `std::` shows suggestions
- ✅ Hovering over `cout` shows type info
- ✅ `int x = "hello";` shows red squiggle

---

## 📊 IntelliSense Status Indicators

| Indicator | Meaning |
|-----------|---------|
| 🔥 Flame icon | IntelliSense is active and working |
| ⚙️ Gear icon | IntelliSense is processing/indexing |
| ❌ Red X | IntelliSense has an error |
| 💤 No icon | IntelliSense is not active |

---

## 🆘 Still Not Working?

If IntelliSense still doesn't work after all steps:

1. **Uninstall and Reinstall C/C++ Extension**
   - Extensions → C/C++ → Uninstall
   - Reload VS Code
   - Reinstall C/C++ extension
   - Reload VS Code again

2. **Check VS Code Version**
   - Code → About Visual Studio Code
   - Make sure you're on a recent version
   - Update if needed

3. **Try Alternative: clangd Extension**
   - Install "clangd" extension
   - Disable Microsoft C/C++ extension
   - Reload window

4. **Check System Resources**
   - Close other applications
   - Restart VS Code
   - Restart computer if needed

---

## 📝 Verification Checklist

- [ ] C/C++ extension installed
- [ ] VS Code window reloaded
- [ ] Compiler path is correct (`/usr/bin/clang++`)
- [ ] Configuration selected (macos-clang-arm64)
- [ ] IntelliSense database reset
- [ ] Output panel checked for errors
- [ ] Test file shows auto-completion
- [ ] Hover shows type information
- [ ] Errors are detected with red squiggles

---

## 💡 Pro Tips

1. **Use Cmd + Space** to manually trigger IntelliSense
2. **Use Cmd + .** for quick fixes
3. **Use F12** to go to definition
4. **Use Shift + F12** to find all references
5. **Use Cmd + K, Cmd + I** to show hover info

---

**If all else fails, create a new workspace and copy your files there!**
