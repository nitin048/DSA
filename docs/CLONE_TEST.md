# Clone Test Checklist

Use this checklist to verify the repository works correctly after cloning.

---

## ✅ Pre-Clone Requirements

- [ ] Git installed
- [ ] VS Code installed
- [ ] C++ compiler installed (clang++/g++)

---

## 📥 Clone and Open

```bash
# Clone the repository
git clone https://github.com/nitin048/DSA.git
cd DSA

# Open in VS Code
code .
```

---

## 🔧 Extension Installation Test

### Expected Behavior:

When you open the workspace, VS Code should show:

```
┌─────────────────────────────────────────────┐
│ 📦 This workspace has extension             │
│    recommendations.                         │
│                                             │
│  [Install All]  [Show Recommendations]     │
└─────────────────────────────────────────────┘
```

### Checklist:

- [ ] Notification appeared
- [ ] Clicked "Install All"
- [ ] Extensions installed:
  - [ ] C/C++ (Microsoft)
  - [ ] C/C++ Extension Pack (Microsoft)
  - [ ] Code Runner (formulahendry)
- [ ] Reloaded VS Code (Cmd/Ctrl + Shift + P → "Reload Window")

---

## 🧪 IntelliSense Test

### Test 1: Auto-completion

1. Open: `C++/Operators/Calculator/calculator.cpp`
2. Add a new line and type: `std::`
3. Wait 2 seconds

**Expected**: Dropdown showing `cout`, `cin`, `vector`, `string`, etc.

- [ ] ✅ Auto-completion works

### Test 2: Hover Information

1. Hover mouse over `cout` in the file
2. Wait for tooltip

**Expected**: Shows `(variable) std::ostream cout`

- [ ] ✅ Hover info works

### Test 3: Error Detection

1. Add this line: `int x = "hello";`
2. Look for red squiggle

**Expected**: Red squiggle under the line with error message

- [ ] ✅ Error detection works

### Test 4: Go to Definition

1. Cmd/Ctrl + Click on `cout`

**Expected**: Jumps to definition or shows peek window

- [ ] ✅ Go to definition works

---

## 🎯 Code Snippets Test

### Test 1: Basic Boilerplate

1. Create new file: `test.cpp`
2. Type: `cpp`
3. Press **Tab** (not Enter)

**Expected**: Generates full C++ boilerplate

```cpp
#include <iostream>
using namespace std;

int main()
{
    // cursor here
    return 0;
}
```

- [ ] ✅ `cpp` snippet works

### Test 2: Control Structures

Try these snippets (type + Tab):

- [ ] `if` → If statement
- [ ] `ifelse` → If-else statement
- [ ] `for` → For loop
- [ ] `while` → While loop
- [ ] `switch` → Switch statement

### Test 3: Data Structures

- [ ] `vec` → Vector declaration
- [ ] `vecn` → Vector with size
- [ ] `vec2d` → 2D vector

---

## ▶️ Code Runner Test

### Test 1: Run Simple Program

1. Open: `C++/Operators/Calculator/calculator.cpp`
2. Click ▶️ button in top-right corner
3. Or press: Ctrl + Alt + N

**Expected**: 
- Terminal opens
- Code compiles
- Program runs
- Shows output

- [ ] ✅ Code Runner works

### Test 2: Check Compilation

Look for output like:
```
[Running] cd "/path/to/DSA/C++/Operators/Calculator/" && clang++ calculator.cpp -o calculator && "./calculator"
```

- [ ] ✅ Compilation command is correct

---

## 📁 File Structure Test

Verify these files exist:

### Configuration Files
- [ ] `.vscode/extensions.json`
- [ ] `.vscode/c_cpp_properties.json`
- [ ] `.vscode/settings.json`
- [ ] `.vscode/cpp.code-snippets`

### Documentation Files
- [ ] `.vscode/README.md`
- [ ] `.vscode/SNIPPETS.md`
- [ ] `.vscode/SETUP.md`
- [ ] `.vscode/TROUBLESHOOTING.md`
- [ ] `VSCODE_SETUP.md`
- [ ] `README.md`

### Learning Resources
- [ ] `C++/Variables/README.md`
- [ ] `C++/Operators/README.md`
- [ ] `C++/Inputs/README.md`
- [ ] `C++/Typecasting/README.md`

---

## 🎨 Status Bar Test

Check bottom-right corner of VS Code:

**Expected**: One of these indicators:
- 🔥 Flame icon (IntelliSense active)
- "C/C++: Ready"
- Configuration name: "macos-clang-arm64" (or similar)

- [ ] ✅ Status bar shows C++ is active

---

## 🔍 Configuration Verification

### Check Compiler Path

1. Press: Cmd/Ctrl + Shift + P
2. Type: `C/C++: Edit Configurations (UI)`
3. Check settings:

**Expected**:
- Compiler path: `/usr/bin/clang++` (macOS) or `/usr/bin/g++` (Linux)
- IntelliSense mode: `macos-clang-arm64` or `linux-gcc-x64`
- C++ standard: `c++17`

- [ ] ✅ Configuration is correct

---

## 📊 Performance Test

### IntelliSense Response Time

1. Open any `.cpp` file
2. Type `std::`
3. Measure time until suggestions appear

**Expected**: < 2 seconds

- [ ] ✅ IntelliSense is responsive

### Compilation Time

1. Run a simple program
2. Measure compilation time

**Expected**: < 5 seconds for small programs

- [ ] ✅ Compilation is fast

---

## 🐛 Common Issues Check

### Issue 1: Extensions Not Installing

If extensions don't install automatically:

1. Press: Cmd/Ctrl + Shift + X
2. Search: "C/C++"
3. Manually install "C/C++" by Microsoft

- [ ] ✅ Can manually install if needed

### Issue 2: IntelliSense Not Working

If IntelliSense doesn't work:

1. Press: Cmd/Ctrl + Shift + P
2. Type: `C/C++: Reset IntelliSense Database`
3. Wait 30 seconds

- [ ] ✅ Reset works

### Issue 3: Compiler Not Found

Check compiler installation:

```bash
# macOS
clang++ --version

# Linux/Windows
g++ --version
```

- [ ] ✅ Compiler is installed

---

## 📝 Documentation Test

Verify documentation is readable:

- [ ] Open `.vscode/SNIPPETS.md` - Shows all snippets
- [ ] Open `VSCODE_SETUP.md` - Shows setup guide
- [ ] Open `C++/Operators/README.md` - Shows operators guide
- [ ] All markdown files render correctly

---

## 🎯 Final Verification

### Complete Feature Test

Create a new file `final_test.cpp`:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Test 1: IntelliSense
    vector<int> nums = {1, 2, 3};
    
    // Test 2: Auto-completion (type 'std::' here)
    
    // Test 3: Error detection (uncomment next line)
    // int x = "hello";
    
    // Test 4: Hover over 'vector' above
    
    cout << "All tests passed!" << endl;
    return 0;
}
```

Run the program:
- [ ] ✅ Compiles without errors
- [ ] ✅ Runs successfully
- [ ] ✅ Shows "All tests passed!"

---

## ✅ Success Criteria

All of these should be ✅:

- [ ] Repository cloned successfully
- [ ] VS Code opened the workspace
- [ ] Extension notification appeared
- [ ] All 3 extensions installed
- [ ] IntelliSense auto-completion works
- [ ] Error detection works
- [ ] Code snippets work (at least 3 tested)
- [ ] Code Runner compiles and runs code
- [ ] All documentation files present
- [ ] Status bar shows C++ is active
- [ ] No errors in Output panel

---

## 🎉 If All Tests Pass

**Congratulations!** The repository is correctly configured and ready to use.

You now have:
- ✅ Full IntelliSense support
- ✅ 30+ code snippets
- ✅ One-click compilation
- ✅ Comprehensive documentation
- ✅ Consistent development environment

---

## 🆘 If Tests Fail

1. Check [TROUBLESHOOTING.md](.vscode/TROUBLESHOOTING.md)
2. Check [SETUP.md](.vscode/SETUP.md)
3. Verify compiler is installed
4. Check VS Code Output panel for errors
5. Try resetting IntelliSense database

---

## 📊 Test Results

Date: _______________  
Tester: _______________  
Platform: ⬜ macOS  ⬜ Linux  ⬜ Windows  
VS Code Version: _______________  
Compiler: _______________  

**Overall Result**: ⬜ PASS  ⬜ FAIL

**Notes**:
_______________________________________
_______________________________________
_______________________________________

---

**This checklist ensures the repository works correctly for anyone who clones it!**
