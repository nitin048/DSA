# 🧪 Clone and Test Guide

This guide helps you verify that everything works after cloning the repository.

---

## ✅ Quick Test (2 Minutes)

After cloning, run these commands to verify everything works:

```bash
# 1. Clone the repository
git clone https://github.com/nitin048/DSA.git
cd DSA

# 2. Test quick compile & run
./scripts/cpp C++/01_Basics/FirstCode.cpp

# 3. Test detailed run script
./scripts/run.sh C++/07_Loops/whileLoop.cpp

# 4. Test make
make run FILE=C++/06_Conditionals/ifElse.cpp
```

**Expected Result:** All three commands should compile and run successfully! ✅

---

## 🔧 Prerequisites Check

Before testing, make sure you have:

### Check g++ Compiler:

```bash
g++ --version
```

**Expected:** Should show g++ version (any version is fine)

**If not installed:**

- **macOS:** `xcode-select --install`
- **Ubuntu/Debian:** `sudo apt install g++`
- **Fedora:** `sudo dnf install gcc-c++`
- **Windows:** Install MinGW or use WSL

### Check Make (Optional):

```bash
make --version
```

**Expected:** Should show GNU Make version

**If not installed:**

- **macOS:** `brew install make`
- **Ubuntu/Debian:** `sudo apt install make`
- **Fedora:** `sudo dnf install make`

### Check Bash:

```bash
bash --version
```

**Expected:** Should show bash version (usually pre-installed)

---

## 🧪 Detailed Testing

### Test 1: Quick Runner Script

```bash
./scripts/cpp C++/01_Basics/FirstCode.cpp
```

**Expected Output:**

```
hello world
```

**If it fails:**

- Check if g++ is installed: `g++ --version`
- Check script permissions: `ls -la scripts/cpp`
- Make executable: `chmod +x scripts/cpp`

---

### Test 2: Detailed Runner Script

```bash
./scripts/run.sh C++/07_Loops/whileLoop.cpp
```

**Expected Output:**

```
🔨 Compiling C++/07_Loops/whileLoop.cpp...
✅ Compilation successful!
🚀 Running C++/07_Loops/whileLoop...
-----------------------------------
1 2 3 4 5 ... 500
-----------------------------------
✅ Program finished
```

**If it fails:**

- Check script permissions: `chmod +x scripts/run.sh`
- Verify file exists: `ls C++/07_Loops/whileLoop.cpp`

---

### Test 3: Makefile

```bash
make run FILE=C++/06_Conditionals/ifElse.cpp
```

**Expected Output:**

```
🔨 Compiling C++/06_Conditionals/ifElse.cpp...
✅ Compilation successful!
🚀 Running C++/06_Conditionals/ifElse...
-----------------------------------
[program output]
-----------------------------------
✅ Program finished
```

**If it fails:**

- Check if make is installed: `make --version`
- Verify Makefile exists: `ls Makefile`

---

### Test 4: Format Script

```bash
./scripts/format.sh
```

**Expected Output:**

```
🎨 Formatting all C++ files...
✅ Formatting complete!
```

**If it fails:**

- Install clang-format: `brew install clang-format` (macOS)
- Or run setup: `./scripts/setup.sh`

---

## 🚀 Full Setup Test (IntelliSense + Formatting)

For full IDE features (IntelliSense, format-on-save):

```bash
# Run the setup script
./scripts/setup.sh
```

**This installs:**

- ✅ clangd (IntelliSense)
- ✅ clang-format (code formatting)
- ✅ Kiro extensions (if using Kiro)

**After setup:**

1. Restart your IDE (Kiro or VS Code)
2. Open any `.cpp` file
3. Type `std::` - should see auto-completion
4. Press Cmd/Ctrl + S - should auto-format

---

## 📊 Feature Availability Matrix

| Feature            | Works Immediately? | Requires Setup?    | Command                     |
| ------------------ | ------------------ | ------------------ | --------------------------- |
| **Compile & Run**  | ✅ Yes             | No                 | `./scripts/cpp file.cpp`    |
| **Detailed Run**   | ✅ Yes             | No                 | `./scripts/run.sh file.cpp` |
| **Make**           | ✅ Yes             | No                 | `make run FILE=file.cpp`    |
| **Format Script**  | ⚠️ Maybe           | Yes (clang-format) | `./scripts/format.sh`       |
| **IntelliSense**   | ❌ No              | Yes (clangd)       | `./scripts/setup.sh`        |
| **Format on Save** | ❌ No              | Yes (clangd)       | `./scripts/setup.sh`        |

---

## 🌍 Platform-Specific Notes

### macOS ✅

Everything should work out of the box if Xcode Command Line Tools are installed:

```bash
xcode-select --install
```

### Linux ✅

Install g++ if not present:

```bash
# Ubuntu/Debian
sudo apt update
sudo apt install g++ make

# Fedora
sudo dnf install gcc-c++ make
```

### Windows with WSL ✅

1. Install WSL2
2. Install Ubuntu from Microsoft Store
3. Inside WSL:
   ```bash
   sudo apt update
   sudo apt install g++ make
   ```

### Windows with Git Bash ✅

1. Install MinGW or MSYS2
2. Add to PATH
3. Scripts should work in Git Bash

---

## 🐛 Common Issues

### Issue 1: Permission Denied

**Error:**

```
bash: ./scripts/cpp: Permission denied
```

**Solution:**

```bash
chmod +x scripts/cpp
chmod +x scripts/run.sh
chmod +x scripts/setup.sh
chmod +x scripts/format.sh
```

---

### Issue 2: g++ Not Found

**Error:**

```
bash: g++: command not found
```

**Solution:**

- **macOS:** `xcode-select --install`
- **Linux:** `sudo apt install g++`
- **Windows:** Install MinGW or use WSL

---

### Issue 3: Script Not Found

**Error:**

```
bash: ./scripts/cpp: No such file or directory
```

**Solution:**

```bash
# Make sure you're in the DSA directory
cd ~/path/to/DSA

# Verify scripts exist
ls scripts/
```

---

### Issue 4: Compilation Errors

**Error:**

```
error: expected ';' before 'return'
```

**Solution:**
This is a code error, not a setup issue. Fix the syntax error in your `.cpp` file.

---

## ✅ Success Checklist

After cloning, verify:

- [ ] `./scripts/cpp C++/01_Basics/FirstCode.cpp` works
- [ ] `./scripts/run.sh C++/07_Loops/whileLoop.cpp` works
- [ ] `make run FILE=C++/06_Conditionals/ifElse.cpp` works
- [ ] All scripts have execute permissions
- [ ] g++ compiler is installed
- [ ] (Optional) `./scripts/setup.sh` completed successfully
- [ ] (Optional) IntelliSense works in IDE
- [ ] (Optional) Format on save works

---

## 🎯 Minimal Working Setup

**Absolute minimum to compile and run:**

1. ✅ g++ compiler installed
2. ✅ Repository cloned
3. ✅ That's it!

**Command:**

```bash
./scripts/cpp file.cpp
```

---

## 📚 Next Steps

After verifying everything works:

1. **Read the main README:** [README.md](../README.md)
2. **Start learning:** [C++/01_Basics/README.md](../C++/01_Basics/README.md)
3. **Setup IDE features:** [docs/SETUP.md](SETUP.md)
4. **Learn quick run methods:** [docs/QUICK_RUN_GUIDE.md](QUICK_RUN_GUIDE.md)

---

## 🆘 Still Having Issues?

1. **Check prerequisites:** Make sure g++ is installed
2. **Check permissions:** Run `chmod +x scripts/*`
3. **Check location:** Make sure you're in the DSA directory
4. **Read troubleshooting:** [docs/TROUBLESHOOTING.md](TROUBLESHOOTING.md)
5. **Open an issue:** https://github.com/nitin048/DSA/issues

---

**If all tests pass, you're ready to start learning! 🎉**

Happy Coding! 🚀
