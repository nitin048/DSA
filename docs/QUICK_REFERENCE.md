# ⚡ Quick Reference Card

Essential commands and shortcuts for working with this repository.

---

## 🚀 Compile & Run

```bash
# Shortest way (13 chars + filename)
./scripts/cpp file.cpp

# Detailed output
./scripts/run.sh file.cpp

# Using make
make run FILE=file.cpp

# Traditional way
g++ file.cpp && ./a.out
```

---

## 🎨 Formatting

```bash
# Format all files
./scripts/format.sh

# Format single file
clang-format -i file.cpp

# Format on save
# Just press Cmd/Ctrl + S in Kiro/VS Code
```

---

## 🔍 Git Commands

```bash
# Check for untracked executables
./scripts/check_executables.sh

# Check if file is ignored
git check-ignore -v filename

# List all ignored files
git status --ignored

# Remove tracked executable
git rm --cached filename
```

---

## 🛠️ Setup

```bash
# Full setup (IntelliSense + Formatting)
./scripts/setup.sh

# Make scripts executable
chmod +x scripts/*.sh

# Test setup
./scripts/cpp C++/01_Basics/FirstCode.cpp
```

---

## 📁 File Structure

```
DSA/
├── C++/              # Learning content (numbered)
├── docs/             # All documentation
├── scripts/          # Utility scripts
└── .vscode/          # IDE configuration
```

---

## 🎯 Common Tasks

### Create New C++ File

```bash
# Create file
touch C++/07_Loops/myprogram.cpp

# Edit and compile
./scripts/cpp C++/07_Loops/myprogram.cpp
```

### Add to Git

```bash
# Add source files only
git add C++/**/*.cpp C++/**/*.md

# Check status
git status

# Commit
git commit -m "Add new program"
```

### Clean Compiled Files

```bash
# Remove all a.out
find C++ -name "a.out" -delete

# Remove all executables (be careful!)
./scripts/check_executables.sh  # Check first
```

---

## ⌨️ Keyboard Shortcuts (Kiro/VS Code)

| Action                 | Shortcut             |
| ---------------------- | -------------------- |
| **Run code**           | Ctrl + Alt + N       |
| **Format document**    | Shift + Alt + F      |
| **Save (auto-format)** | Cmd/Ctrl + S         |
| **Go to definition**   | F12                  |
| **Find references**    | Shift + F12          |
| **Rename symbol**      | F2                   |
| **Command palette**    | Cmd/Ctrl + Shift + P |

---

## 📚 Documentation

| Topic             | File                                          |
| ----------------- | --------------------------------------------- |
| **Main README**   | [README.md](../README.md)                     |
| **Setup Guide**   | [docs/SETUP.md](SETUP.md)                     |
| **Kiro Setup**    | [docs/KIRO_SETUP.md](KIRO_SETUP.md)           |
| **Quick Run**     | [docs/QUICK_RUN_GUIDE.md](QUICK_RUN_GUIDE.md) |
| **Gitignore**     | [docs/GITIGNORE_GUIDE.md](GITIGNORE_GUIDE.md) |
| **Clone & Test**  | [docs/CLONE_AND_TEST.md](CLONE_AND_TEST.md)   |
| **Code Snippets** | [.vscode/SNIPPETS.md](../.vscode/SNIPPETS.md) |

---

## 🎓 Learning Path

```
01_Basics → 02_Variables → 03_Operators → 04_InputOutput
    ↓
05_Typecasting → 06_Conditionals → 07_Loops
```

---

## 🆘 Quick Troubleshooting

| Problem                      | Solution                                  |
| ---------------------------- | ----------------------------------------- |
| **Permission denied**        | `chmod +x scripts/*.sh`                   |
| **g++ not found**            | Install: `xcode-select --install` (macOS) |
| **Executable tracked**       | `./scripts/check_executables.sh`          |
| **Format not working**       | Run `./scripts/setup.sh`                  |
| **IntelliSense not working** | Restart IDE after setup                   |

---

## 💡 Pro Tips

1. **Use tab completion** - Type `./scripts/` and press Tab
2. **Use aliases** - See [docs/QUICK_RUN_GUIDE.md](QUICK_RUN_GUIDE.md)
3. **Check before commit** - Run `./scripts/check_executables.sh`
4. **Format before commit** - Run `./scripts/format.sh`
5. **Read the README** - Each folder has a README.md

---

## 🔗 External Resources

- **C++ Reference:** https://en.cppreference.com/
- **Learn C++:** https://www.learncpp.com/
- **Git Documentation:** https://git-scm.com/doc

---

**Print this page for quick reference! 📄**
