# Cross-Platform C++ Setup Guide

This guide helps you set up C++ development environment on macOS, Windows, and Linux.

---

## 📋 Table of Contents

1. [macOS Setup](#macos-setup)
2. [Windows Setup](#windows-setup)
3. [Linux Setup](#linux-setup)
4. [Verification](#verification)
5. [Platform-Specific Notes](#platform-specific-notes)

---

## 🍎 macOS Setup

### Prerequisites

1. **Install Xcode Command Line Tools**
   ```bash
   xcode-select --install
   ```

2. **Verify Installation**
   ```bash
   clang++ --version
   ```
   
   Expected output:
   ```
   Apple clang version 14.0.0 (or higher)
   ```

### VS Code Configuration

The configuration will automatically use:
- **Compiler**: `/usr/bin/clang++`
- **IntelliSense Mode**: `macos-clang-arm64` (or `macos-clang-x64` for Intel Macs)
- **Debugger**: `lldb`

### Compile and Run

**Terminal:**
```bash
clang++ -std=c++17 -Wall -Wextra file.cpp -o output
./output
```

**VS Code (Code Runner):**
- Click ▶️ button, or
- Press `Cmd + Option + N`

---

## 🪟 Windows Setup

### Option 1: MinGW (Recommended for Beginners)

1. **Download MinGW**
   - Visit: https://sourceforge.net/projects/mingw/
   - Download and install MinGW Installation Manager

2. **Install Required Packages**
   - Open MinGW Installation Manager
   - Mark for installation:
     - `mingw32-gcc-g++`
     - `mingw32-base`
   - Installation → Apply Changes

3. **Add to PATH**
   - Right-click "This PC" → Properties
   - Advanced system settings → Environment Variables
   - Edit "Path" → Add: `C:\MinGW\bin`

4. **Verify Installation**
   ```cmd
   g++ --version
   ```

### Option 2: MSYS2 (Recommended for Advanced Users)

1. **Download MSYS2**
   - Visit: https://www.msys2.org/
   - Download and install

2. **Install GCC**
   ```bash
   pacman -S mingw-w64-x86_64-gcc
   ```

3. **Add to PATH**
   - Add: `C:\msys64\mingw64\bin`

4. **Verify Installation**
   ```cmd
   g++ --version
   ```

### Option 3: Visual Studio (Microsoft Compiler)

1. **Install Visual Studio**
   - Download Visual Studio Community (free)
   - Select "Desktop development with C++"

2. **Update Configuration**
   - VS Code will auto-detect MSVC
   - Or manually set in `c_cpp_properties.json`

### VS Code Configuration

The configuration will automatically use:
- **Compiler**: `C:/MinGW/bin/g++.exe` or `C:/msys64/mingw64/bin/g++.exe`
- **IntelliSense Mode**: `windows-gcc-x64`
- **Debugger**: `gdb`

### Compile and Run

**Command Prompt:**
```cmd
g++ -std=c++17 -Wall -Wextra file.cpp -o output.exe
output.exe
```

**VS Code (Code Runner):**
- Click ▶️ button, or
- Press `Ctrl + Alt + N`

---

## 🐧 Linux Setup

### Ubuntu/Debian

1. **Install GCC**
   ```bash
   sudo apt update
   sudo apt install build-essential gdb
   ```

2. **Verify Installation**
   ```bash
   g++ --version
   ```

### Fedora/RHEL/CentOS

1. **Install GCC**
   ```bash
   sudo dnf install gcc-c++ gdb
   ```

2. **Verify Installation**
   ```bash
   g++ --version
   ```

### Arch Linux

1. **Install GCC**
   ```bash
   sudo pacman -S base-devel gdb
   ```

2. **Verify Installation**
   ```bash
   g++ --version
   ```

### VS Code Configuration

The configuration will automatically use:
- **Compiler**: `/usr/bin/g++`
- **IntelliSense Mode**: `linux-gcc-x64`
- **Debugger**: `gdb`

### Compile and Run

**Terminal:**
```bash
g++ -std=c++17 -Wall -Wextra file.cpp -o output
./output
```

**VS Code (Code Runner):**
- Click ▶️ button, or
- Press `Ctrl + Alt + N`

---

## ✅ Verification

### Test All Platforms

Create a test file `test.cpp`:

```cpp
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::cout << "C++ Setup Test" << std::endl;
    
    // Test C++17 features
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    for(const auto& num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Test string
    std::string message = "Setup successful!";
    std::cout << message << std::endl;
    
    return 0;
}
```

### Expected Output

```
C++ Setup Test
1 2 3 4 5
Setup successful!
```

### Check IntelliSense

1. Open `test.cpp`
2. Type `std::` → Should show suggestions
3. Hover over `cout` → Should show type info
4. Type `int x = "hello";` → Should show error

---

## 🔧 Platform-Specific Notes

### macOS

**Pros:**
- ✅ Clang is pre-installed with Xcode
- ✅ Excellent performance
- ✅ Modern C++ support

**Cons:**
- ❌ Requires Xcode Command Line Tools (large download)

**Tips:**
- Use `clang++` instead of `g++` for better compatibility
- LLDB debugger is more powerful than GDB on macOS

### Windows

**Pros:**
- ✅ Multiple compiler options (MinGW, MSVC, Clang)
- ✅ Visual Studio integration

**Cons:**
- ❌ Setup is more complex
- ❌ Path configuration required
- ❌ Different executable extension (.exe)

**Tips:**
- Use forward slashes `/` in paths when possible
- MinGW is easier for beginners
- MSYS2 provides better Unix-like environment

**Common Issues:**
- **"g++ is not recognized"**: Add compiler to PATH
- **"Permission denied"**: Run as Administrator
- **Antivirus blocking**: Add exception for compiler

### Linux

**Pros:**
- ✅ Native Unix environment
- ✅ Easy package management
- ✅ Best performance

**Cons:**
- ❌ May need sudo for installation

**Tips:**
- GCC is the standard compiler
- Use package manager for easy updates
- GDB debugger works excellently

---

## 📊 Compiler Comparison

| Feature | Clang (macOS) | GCC (Linux/Windows) | MSVC (Windows) |
|---------|---------------|---------------------|----------------|
| C++17 Support | ✅ Excellent | ✅ Excellent | ✅ Good |
| Error Messages | ✅ Very Clear | ✅ Clear | ⚠️ Verbose |
| Compilation Speed | ✅ Fast | ✅ Fast | ⚠️ Slower |
| Standards Compliance | ✅ Excellent | ✅ Excellent | ⚠️ Good |
| Cross-platform | ✅ Yes | ✅ Yes | ❌ Windows only |

---

## 🎯 Configuration Selection

VS Code automatically selects the right configuration based on your OS:

- **macOS**: Uses "Mac" configuration
- **Windows**: Uses "Win32" configuration
- **Linux**: Uses "Linux" configuration

You can manually select configuration:
1. Press `Cmd/Ctrl + Shift + P`
2. Type: `C/C++: Select a Configuration`
3. Choose your platform

---

## 🔄 Switching Between Compilers

### macOS: Clang ↔ GCC

If you have both installed:

```bash
# Use Clang (default)
clang++ file.cpp -o output

# Use GCC (if installed via Homebrew)
g++-13 file.cpp -o output
```

### Windows: MinGW ↔ MSVC

Update `compilerPath` in `c_cpp_properties.json`:

```json
// MinGW
"compilerPath": "C:/MinGW/bin/g++.exe"

// MSVC
"compilerPath": "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.xx.xxxxx/bin/Hostx64/x64/cl.exe"
```

### Linux: GCC ↔ Clang

```bash
# Use GCC (default)
g++ file.cpp -o output

# Use Clang (if installed)
clang++ file.cpp -o output
```

---

## 🐛 Common Cross-Platform Issues

### Issue 1: Different Path Separators

**Problem:**
- Windows: `C:\Users\Name\file.cpp`
- macOS/Linux: `/Users/Name/file.cpp`

**Solution:**
- Use `${workspaceFolder}` in configurations
- VS Code handles path conversion automatically

### Issue 2: Executable Extensions

**Problem:**
- Windows: `program.exe`
- macOS/Linux: `program` (no extension)

**Solution:**
- Code Runner handles this automatically
- Or use: `$fileNameWithoutExt` in commands

### Issue 3: Line Endings

**Problem:**
- Windows: CRLF (`\r\n`)
- macOS/Linux: LF (`\n`)

**Solution:**
- VS Code setting: `"files.eol": "auto"`
- Git setting: `git config --global core.autocrlf true` (Windows)

### Issue 4: Case Sensitivity

**Problem:**
- Windows: Case-insensitive (`File.cpp` = `file.cpp`)
- macOS/Linux: Case-sensitive (`File.cpp` ≠ `file.cpp`)

**Solution:**
- Always use consistent casing
- Prefer lowercase for filenames

---

## 📝 Platform-Specific Compiler Flags

### All Platforms (Common)
```bash
-std=c++17        # C++17 standard
-Wall             # All warnings
-Wextra           # Extra warnings
-Wpedantic        # Strict ISO C++
-O2               # Optimization level 2
-g                # Debug symbols
```

### macOS (Clang-specific)
```bash
-stdlib=libc++    # Use libc++ (default)
-framework Cocoa  # Link Cocoa framework
```

### Windows (MinGW-specific)
```bash
-static           # Static linking
-mwindows         # Windows subsystem
```

### Linux (GCC-specific)
```bash
-pthread          # POSIX threads
-ldl              # Dynamic linking
```

---

## 🚀 Quick Start Commands

### macOS
```bash
# Compile
clang++ -std=c++17 -Wall file.cpp -o output

# Run
./output
```

### Windows (Command Prompt)
```cmd
REM Compile
g++ -std=c++17 -Wall file.cpp -o output.exe

REM Run
output.exe
```

### Linux
```bash
# Compile
g++ -std=c++17 -Wall file.cpp -o output

# Run
./output
```

---

## 📚 Additional Resources

### macOS
- [Xcode Command Line Tools](https://developer.apple.com/xcode/)
- [Homebrew](https://brew.sh/) - Package manager

### Windows
- [MinGW](http://www.mingw.org/)
- [MSYS2](https://www.msys2.org/)
- [Visual Studio](https://visualstudio.microsoft.com/)

### Linux
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Build Essential](https://packages.ubuntu.com/focal/build-essential)

### All Platforms
- [VS Code C++ Documentation](https://code.visualstudio.com/docs/languages/cpp)
- [C++ Reference](https://en.cppreference.com/)

---

## ✅ Setup Checklist

- [ ] Compiler installed and verified
- [ ] VS Code C/C++ extension installed
- [ ] Configuration file matches your platform
- [ ] Test file compiles successfully
- [ ] IntelliSense shows suggestions
- [ ] Code Runner works (optional)
- [ ] Debugger configured (optional)

---

**Your C++ environment is now ready for cross-platform development! 🎉**
