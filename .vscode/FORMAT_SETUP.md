# Format on Save - Setup Complete! ✅

clang-format has been installed and configured. Here's how to make it work:

---

## 🎯 Quick Fix - Reload VS Code

**The formatter is now installed, but VS Code needs to be reloaded to detect it.**

### Step 1: Reload VS Code Window

Press **Cmd + Shift + P** and type:

```
Developer: Reload Window
```

Or simply **close and reopen VS Code**.

---

## ✅ Verify It's Working

After reloading:

1. **Open any .cpp file** (like `C++/Conditional_Stmt/ifElse.cpp`)
2. **Make the code messy:**
   ```cpp
   int main(){
   int x=10;
   if(x>5){cout<<"hello";}
   return 0;}
   ```
3. **Press Cmd + S** (Save)
4. **Code should auto-format!** ✨

---

## 🧪 Test with Format Command

If auto-format on save doesn't work, try manual format first:

1. Open any .cpp file
2. Press **Shift + Option + F** (macOS) or **Shift + Alt + F** (Windows/Linux)
3. Should see: "Formatting..." in status bar
4. Code gets formatted!

If manual format works but auto-format doesn't:

- Check that `"editor.formatOnSave": true` is in settings
- Reload VS Code window

---

## 📁 What Was Installed

### 1. clang-format Tool

```bash
clang-format --version
# Output: clang-format version 22.1.5
```

### 2. Configuration Files

**`.clang-format`** (root directory)

- Defines formatting rules
- Based on Google Style
- 4-space indentation
- 100-character line limit

**`.vscode/settings.json`**

- `"editor.formatOnSave": true`
- `"C_Cpp.formatting": "clangFormat"`
- `"[cpp]": { "editor.defaultFormatter": "ms-vscode.cpptools" }`

---

## 🎨 Formatting Style

### Before:

```cpp
#include<iostream>
using namespace std;
int main(){
int x=10,y=20;
if(x>y){
cout<<"x is greater"<<endl;}
else{
cout<<"y is greater"<<endl;
}
return 0;}
```

### After (automatic on save):

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;
    if (x > y) {
        cout << "x is greater" << endl;
    } else {
        cout << "y is greater" << endl;
    }
    return 0;
}
```

---

## 🔧 Troubleshooting

### Issue 1: "Formatter not found"

**Solution:**

```bash
# Verify clang-format is installed
which clang-format
# Should output: /opt/homebrew/bin/clang-format

# If not found, install it:
brew install clang-format
```

### Issue 2: Format on Save Not Working

**Checklist:**

- [ ] clang-format installed (`clang-format --version`)
- [ ] VS Code reloaded after installation
- [ ] C/C++ extension installed
- [ ] File saved with `.cpp` extension
- [ ] `"editor.formatOnSave": true` in settings

**Try:**

1. Reload VS Code (Cmd + Shift + P → "Reload Window")
2. Try manual format first (Shift + Option + F)
3. Check Output panel (View → Output → Select "C/C++")

### Issue 3: Wrong Formatting Style

**Solution:**
Edit `.clang-format` file in root directory to customize style.

### Issue 4: Formatting Breaks Code

**Cause:** Code has syntax errors

**Solution:**

1. Fix syntax errors first (red squiggles)
2. Then format will work

---

## 💡 Pro Tips

### Tip 1: Format Entire Project

```bash
# Format all .cpp files in project
find . -name "*.cpp" -exec clang-format -i {} \;
```

### Tip 2: Check Format Without Changing

```bash
# Dry run - see what would change
clang-format C++/Conditional_Stmt/ifElse.cpp
```

### Tip 3: Disable for Specific Code

```cpp
// clang-format off
int matrix[3][3] = {
    {1,  2,  3},
    {4,  5,  6},
    {7,  8,  9}
};
// clang-format on
```

### Tip 4: Format Selection Only

1. Select code
2. Press **Cmd + K, Cmd + F**
3. Only selection gets formatted

---

## 📋 Keyboard Shortcuts

| Action             | macOS                | Windows/Linux        |
| ------------------ | -------------------- | -------------------- |
| Format Document    | `Shift + Option + F` | `Shift + Alt + F`    |
| Format Selection   | `Cmd + K, Cmd + F`   | `Ctrl + K, Ctrl + F` |
| Save (auto-format) | `Cmd + S`            | `Ctrl + S`           |

---

## ✅ Success Checklist

After reloading VS Code:

- [ ] `clang-format --version` works in terminal
- [ ] Manual format works (Shift + Option + F)
- [ ] Auto-format on save works (Cmd + S)
- [ ] Code looks clean and consistent
- [ ] No error messages in Output panel

---

## 🎉 You're All Set!

**Just reload VS Code and formatting will work automatically!**

1. **Cmd + Shift + P** → "Reload Window"
2. Open any .cpp file
3. Press **Cmd + S**
4. Watch the magic! ✨

---

**Need help?** Check [FORMATTING.md](FORMATTING.md) for detailed documentation.
