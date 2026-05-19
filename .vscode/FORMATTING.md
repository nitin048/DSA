# Code Formatting Guide

This workspace is configured to automatically format C++ code on save using clang-format.

---

## ✨ What's Enabled

### Auto-Formatting Features

- ✅ **Format on Save** - Code is automatically formatted when you save (Cmd/Ctrl + S)
- ✅ **Format on Paste** - Pasted code is automatically formatted
- ✅ **Manual Format** - Format anytime with Shift + Alt + F (or right-click → Format Document)

---

## 🎨 Formatting Style

### Based on Google Style Guide

The formatter uses **Google C++ Style Guide** with custom modifications:

```json
{
	"BasedOnStyle": "Google",
	"IndentWidth": 4,
	"ColumnLimit": 100
}
```

### Key Style Rules

| Feature               | Setting                 | Example                   |
| --------------------- | ----------------------- | ------------------------- |
| **Indentation**       | 4 spaces                | `    int x = 10;`         |
| **Line Length**       | 100 characters          | Lines wrap at 100 chars   |
| **Braces**            | Same line for functions | `void func() {`           |
| **Spaces**            | Around operators        | `a + b` not `a+b`         |
| **Pointer/Reference** | Next to type            | `int* ptr` not `int *ptr` |

---

## 📝 Before and After Examples

### Example 1: Messy Code

**Before formatting:**

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

**After formatting (automatic on save):**

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

### Example 2: Inconsistent Spacing

**Before:**

```cpp
int calculate(int a,int b,int c){
int result=a+b*c;
if(result>100){
return result/2;
}else{
return result;
}
}
```

**After:**

```cpp
int calculate(int a, int b, int c) {
    int result = a + b * c;
    if (result > 100) {
        return result / 2;
    } else {
        return result;
    }
}
```

### Example 3: Long Lines

**Before:**

```cpp
cout << "This is a very long line that exceeds the column limit and should be wrapped automatically by the formatter" << endl;
```

**After:**

```cpp
cout << "This is a very long line that exceeds the column limit and should be "
        "wrapped automatically by the formatter"
     << endl;
```

---

## 🚀 How to Use

### Automatic Formatting (Recommended)

1. **Write your code** (don't worry about formatting)
2. **Save the file** (Cmd/Ctrl + S)
3. **Code is automatically formatted!** ✨

### Manual Formatting

#### Format Entire File

- **Keyboard**: `Shift + Alt + F` (Windows/Linux) or `Shift + Option + F` (macOS)
- **Menu**: Right-click → Format Document
- **Command Palette**: Cmd/Ctrl + Shift + P → "Format Document"

#### Format Selection

1. Select the code you want to format
2. **Keyboard**: `Cmd/Ctrl + K, Cmd/Ctrl + F`
3. **Menu**: Right-click → Format Selection

---

## ⚙️ Customization

### Change Formatting Style

Edit `.vscode/settings.json`:

```json
"C_Cpp.clang_format_style": "{ BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 100 }"
```

### Available Base Styles

- **Google** - Google C++ Style Guide (current)
- **LLVM** - LLVM coding standards
- **Chromium** - Chromium project style
- **Mozilla** - Mozilla style guide
- **WebKit** - WebKit style guide
- **Microsoft** - Microsoft style guide

### Common Customizations

#### Change Indentation to 2 Spaces

```json
"C_Cpp.clang_format_style": "{ BasedOnStyle: Google, IndentWidth: 2 }"
```

#### Change Line Length to 80

```json
"C_Cpp.clang_format_style": "{ BasedOnStyle: Google, ColumnLimit: 80 }"
```

#### Pointer/Reference Style

```json
// Pointer next to type: int* ptr
"C_Cpp.clang_format_style": "{ BasedOnStyle: Google, PointerAlignment: Left }"

// Pointer next to name: int *ptr
"C_Cpp.clang_format_style": "{ BasedOnStyle: Google, PointerAlignment: Right }"
```

#### Brace Style

```json
// Allman style (braces on new line)
"C_Cpp.clang_format_style": "{ BasedOnStyle: Google, BreakBeforeBraces: Allman }"
```

---

## 🎯 Formatting Rules Explained

### Indentation

```cpp
// 4 spaces per level
int main() {
    if (true) {
        cout << "Indented 4 spaces" << endl;
        if (true) {
            cout << "Indented 8 spaces" << endl;
        }
    }
}
```

### Spacing Around Operators

```cpp
// ✅ GOOD - Spaces around operators
int result = a + b * c;
bool flag = (x > 5) && (y < 10);

// ❌ BAD - No spaces (will be auto-fixed)
int result=a+b*c;
bool flag=(x>5)&&(y<10);
```

### Spacing After Keywords

```cpp
// ✅ GOOD - Space after if, for, while
if (condition) { }
for (int i = 0; i < n; i++) { }
while (true) { }

// ❌ BAD - No space (will be auto-fixed)
if(condition){ }
for(int i=0;i<n;i++){ }
```

### Function Declarations

```cpp
// ✅ GOOD - Proper spacing
int calculate(int a, int b, int c) {
    return a + b + c;
}

// ❌ BAD - Inconsistent spacing (will be auto-fixed)
int calculate(int a,int b,int c){
return a+b+c;
}
```

### Include Statements

```cpp
// ✅ GOOD - Space after #include
#include <iostream>
#include <vector>

// ❌ BAD - No space (will be auto-fixed)
#include<iostream>
#include<vector>
```

---

## 🔧 Troubleshooting

### Formatting Not Working

#### Issue 1: Format on Save Not Working

**Solution:**

1. Check `.vscode/settings.json` has:
   ```json
   "editor.formatOnSave": true
   ```
2. Reload VS Code (Cmd/Ctrl + Shift + P → "Reload Window")

#### Issue 2: Wrong Formatter Being Used

**Solution:**

1. Check `.vscode/settings.json` has:
   ```json
   "[cpp]": {
     "editor.defaultFormatter": "ms-vscode.cpptools"
   }
   ```
2. Right-click in file → "Format Document With..." → Select "C/C++"

#### Issue 3: clang-format Not Found

**Solution:**

1. clang-format comes with Xcode Command Line Tools (macOS)
2. Verify installation:
   ```bash
   clang-format --version
   ```
3. If not installed:
   ```bash
   xcode-select --install  # macOS
   sudo apt-get install clang-format  # Linux
   ```

#### Issue 4: Formatting Breaks Code

**Solution:**

1. Check for syntax errors first (red squiggles)
2. Formatter won't work on code with syntax errors
3. Fix errors, then format

---

## 💡 Pro Tips

### Tip 1: Format Before Committing

Always format your code before committing to git:

```bash
# Save all files (formats automatically)
# Then commit
git add .
git commit -m "Your message"
```

### Tip 2: Disable Formatting for Specific Code

Use `// clang-format off` and `// clang-format on`:

```cpp
// clang-format off
int matrix[3][3] = {
    {1,  2,  3},
    {4,  5,  6},
    {7,  8,  9}
};
// clang-format on
```

### Tip 3: Format on Paste

Paste messy code and it's automatically formatted!

### Tip 4: Keyboard Shortcut

Memorize: **Shift + Alt + F** (or Shift + Option + F on macOS)

### Tip 5: Check Before and After

Use Cmd/Ctrl + Z to undo formatting if you don't like the result

---

## 📋 Quick Reference

### Keyboard Shortcuts

| Action             | Windows/Linux        | macOS                |
| ------------------ | -------------------- | -------------------- |
| Format Document    | `Shift + Alt + F`    | `Shift + Option + F` |
| Format Selection   | `Ctrl + K, Ctrl + F` | `Cmd + K, Cmd + F`   |
| Save (auto-format) | `Ctrl + S`           | `Cmd + S`            |

### Settings Location

- **Workspace Settings**: `.vscode/settings.json`
- **User Settings**: File → Preferences → Settings

### Common Settings

```json
{
	"editor.formatOnSave": true, // Format on save
	"editor.formatOnPaste": true, // Format on paste
	"editor.formatOnType": false, // Don't format while typing
	"C_Cpp.formatting": "clangFormat", // Use clang-format
	"[cpp]": {
		"editor.defaultFormatter": "ms-vscode.cpptools"
	}
}
```

---

## 🎨 Style Comparison

### Google Style (Current)

```cpp
int main() {
    int x = 10;
    if (x > 5) {
        cout << "Greater" << endl;
    }
    return 0;
}
```

### LLVM Style

```cpp
int main() {
  int x = 10;
  if (x > 5) {
    cout << "Greater" << endl;
  }
  return 0;
}
```

### Allman Style

```cpp
int main()
{
    int x = 10;
    if (x > 5)
    {
        cout << "Greater" << endl;
    }
    return 0;
}
```

---

## ✅ Benefits of Auto-Formatting

1. **Consistency** - All code follows the same style
2. **Readability** - Properly formatted code is easier to read
3. **Time-Saving** - No manual formatting needed
4. **Team Collaboration** - Everyone uses the same style
5. **Focus on Logic** - Spend time on code, not formatting
6. **Professional** - Clean, well-formatted code looks professional

---

## 🔗 Related Resources

- [clang-format Documentation](https://clang.llvm.org/docs/ClangFormat.html)
- [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- [clang-format Style Options](https://clang.llvm.org/docs/ClangFormatStyleOptions.html)

---

**Your code will always look clean and professional! 🚀**
