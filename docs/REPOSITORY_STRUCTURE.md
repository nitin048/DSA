# 📁 Repository Structure Guide

Complete guide to the DSA repository organization and file structure.

---

## 🎯 Overview

This repository is organized for optimal learning and development experience:

- **Numbered learning path** (01, 02, 03...) for clear progression
- **Separated documentation** in `docs/` folder
- **Utility scripts** in `scripts/` folder
- **IDE configuration** in `.vscode/` folder
- **Clean root directory** with only essential files

---

## 📂 Complete Structure

```
DSA/
├── C++/                        # C++ learning content (numbered for learning order)
│   ├── 01_Basics/              # First C++ program
│   │   ├── FirstCode.cpp       # Hello World program
│   │   └── README.md           # Complete basics guide
│   │
│   ├── 02_Variables/           # Variables and data types
│   │   ├── variables.cpp       # Variable examples
│   │   └── README.md           # Variables, types, scope guide
│   │
│   ├── 03_Operators/           # All C++ operators
│   │   ├── arithmetic.cpp      # +, -, *, /, %
│   │   ├── relational.cpp      # ==, !=, <, >, <=, >=
│   │   ├── logical.cpp         # &&, ||, !
│   │   ├── unary.cpp           # ++, --
│   │   ├── Calculator/         # Calculator project
│   │   │   └── calculator.cpp  # Switch case calculator
│   │   └── README.md           # Complete operators guide
│   │
│   ├── 04_InputOutput/         # Input/Output operations
│   │   ├── inputs.cpp          # cin, cout examples
│   │   └── README.md           # I/O operations guide
│   │
│   ├── 05_Typecasting/         # Type conversion
│   │   ├── implicitTypeCasting.cpp    # Automatic conversion
│   │   ├── explicitTypeCasting.cpp    # Manual conversion
│   │   └── README.md           # All cast types guide
│   │
│   └── 06_Conditionals/        # Conditional statements
│       ├── ifElse.cpp          # If-else examples
│       ├── if_else_if.cpp      # If-else-if ladder
│       └── README.md           # Conditionals guide
│
├── docs/                       # All documentation
│   ├── SETUP.md                # Main setup guide (all platforms)
│   ├── KIRO_SETUP.md           # Kiro IDE setup (comprehensive)
│   ├── VSCODE_SETUP.md         # VS Code setup guide
│   ├── FORMATTING.md           # Code formatting guide
│   ├── TROUBLESHOOTING.md      # Common issues and solutions
│   ├── CLONE_TEST.md           # Testing guide for clones
│   └── REPOSITORY_STRUCTURE.md # This file
│
├── scripts/                    # Utility scripts
│   ├── setup.sh                # Automated setup (clangd, clang-format)
│   └── format.sh               # Format all C++ files
│
├── .vscode/                    # IDE configuration
│   ├── settings.json           # Editor and clangd settings
│   ├── c_cpp_properties.json   # C++ IntelliSense configuration
│   ├── extensions.json         # Recommended extensions
│   ├── launch.json             # Debugger configuration
│   ├── cpp.code-snippets       # 30+ code shortcuts
│   ├── SNIPPETS.md             # Snippet documentation
│   └── README.md               # VS Code config info
│
├── .clang-format               # Code formatting rules (Google Style)
├── .gitignore                  # Git ignore rules
├── compile_commands.json       # Build configuration for clangd
├── CLEANUP_PLAN.md             # Repository cleanup documentation
└── README.md                   # Main README (start here!)
```

---

## 📚 Folder Descriptions

### `C++/` - Learning Content

**Purpose:** Contains all C++ learning materials organized by topic.

**Naming Convention:** Numbered folders (01, 02, 03...) indicate learning order.

**Each folder contains:**

- `.cpp` files with code examples
- `README.md` with comprehensive explanations
- Practice exercises and solutions

**Learning Path:**

1. **01_Basics** → First program, basic structure
2. **02_Variables** → Data types, variables, scope
3. **03_Operators** → All operator types
4. **04_InputOutput** → cin, cout, file I/O
5. **05_Typecasting** → Type conversion
6. **06_Conditionals** → If, switch statements
7. **07_Loops** → For, while, do-while (coming soon)

---

### `docs/` - Documentation

**Purpose:** All documentation files in one place.

**Files:**

| File                      | Description                    |
| ------------------------- | ------------------------------ |
| `SETUP.md`                | Main setup guide for all users |
| `KIRO_SETUP.md`           | Comprehensive Kiro IDE setup   |
| `VSCODE_SETUP.md`         | VS Code specific setup         |
| `FORMATTING.md`           | Code formatting guide          |
| `TROUBLESHOOTING.md`      | Common issues and solutions    |
| `CLONE_TEST.md`           | Testing guide for clones       |
| `REPOSITORY_STRUCTURE.md` | This file                      |

**When to use:**

- **New user?** Start with `SETUP.md`
- **Using Kiro?** Read `KIRO_SETUP.md`
- **Using VS Code?** Read `VSCODE_SETUP.md`
- **Formatting issues?** Check `FORMATTING.md`
- **Something broken?** See `TROUBLESHOOTING.md`

---

### `scripts/` - Utility Scripts

**Purpose:** Automation scripts for setup and maintenance.

**Files:**

| Script      | Purpose                                  | Usage                 |
| ----------- | ---------------------------------------- | --------------------- |
| `setup.sh`  | Install clangd, clang-format, extensions | `./scripts/setup.sh`  |
| `format.sh` | Format all C++ files                     | `./scripts/format.sh` |

**Both scripts are executable** (`chmod +x` already applied).

---

### `.vscode/` - IDE Configuration

**Purpose:** Configuration for Kiro IDE and VS Code.

**Files:**

| File                    | Purpose                                        |
| ----------------------- | ---------------------------------------------- |
| `settings.json`         | Editor settings, clangd config, format-on-save |
| `c_cpp_properties.json` | C++ IntelliSense configuration                 |
| `extensions.json`       | Recommended extensions list                    |
| `launch.json`           | Debugger configuration                         |
| `cpp.code-snippets`     | 30+ code shortcuts (cpp, for, if, etc.)        |
| `SNIPPETS.md`           | Documentation for all snippets                 |
| `README.md`             | VS Code configuration info                     |

**Key Features:**

- ✅ Auto-completion (IntelliSense)
- ✅ Format on save (Cmd/Ctrl + S)
- ✅ Error detection
- ✅ Code snippets
- ✅ Debugger support

---

## 🔧 Root Level Files

### Essential Configuration

| File                    | Purpose                                              |
| ----------------------- | ---------------------------------------------------- |
| `.clang-format`         | Code formatting rules (Google Style, 4-space indent) |
| `.gitignore`            | Git ignore rules (compiled files, IDE files, etc.)   |
| `compile_commands.json` | Build configuration for clangd IntelliSense          |

### Documentation

| File              | Purpose                          |
| ----------------- | -------------------------------- |
| `README.md`       | Main README - start here!        |
| `CLEANUP_PLAN.md` | Repository cleanup documentation |

---

## 🎯 File Naming Conventions

### C++ Files

- **Descriptive names:** `variables.cpp`, `arithmetic.cpp`
- **camelCase:** `ifElse.cpp`, `explicitTypeCasting.cpp`
- **No spaces:** Use underscores or camelCase

### Folders

- **Numbered:** `01_Basics`, `02_Variables` (learning order)
- **PascalCase:** `Calculator`, `TypeCasting`
- **Descriptive:** Clear purpose from name

### Documentation

- **UPPERCASE:** `README.md`, `SETUP.md`
- **Descriptive:** `KIRO_SETUP.md`, `TROUBLESHOOTING.md`

---

## 📊 File Count Summary

```
Total Structure:
├── 6 C++ topic folders
├── 15+ .cpp files
├── 7 README.md files (one per topic)
├── 7 documentation files (docs/)
├── 2 utility scripts (scripts/)
├── 7 configuration files (.vscode/)
└── 4 root configuration files
```

---

## 🔍 Finding Files

### By Purpose

**Learning C++:**

- Start: `C++/01_Basics/README.md`
- Variables: `C++/02_Variables/README.md`
- Operators: `C++/03_Operators/README.md`

**Setup:**

- Main guide: `docs/SETUP.md`
- Kiro: `docs/KIRO_SETUP.md`
- VS Code: `docs/VSCODE_SETUP.md`

**Troubleshooting:**

- Issues: `docs/TROUBLESHOOTING.md`
- Formatting: `docs/FORMATTING.md`

**Code Snippets:**

- List: `.vscode/SNIPPETS.md`
- File: `.vscode/cpp.code-snippets`

### By File Type

**C++ Code:**

```bash
find C++ -name "*.cpp"
```

**Documentation:**

```bash
find . -name "README.md"
find docs/ -name "*.md"
```

**Configuration:**

```bash
ls .vscode/
ls -la | grep "^\."
```

---

## 🎨 Customization

### Adding New Topics

1. **Create numbered folder:**

   ```bash
   mkdir C++/07_Loops
   ```

2. **Add code files:**

   ```bash
   touch C++/07_Loops/forLoop.cpp
   touch C++/07_Loops/whileLoop.cpp
   ```

3. **Create README:**

   ```bash
   touch C++/07_Loops/README.md
   ```

4. **Update main README.md** with new topic link

### Adding Documentation

1. **Create file in docs/:**

   ```bash
   touch docs/NEW_GUIDE.md
   ```

2. **Update README.md** with link to new guide

### Adding Scripts

1. **Create script in scripts/:**

   ```bash
   touch scripts/new_script.sh
   ```

2. **Make executable:**
   ```bash
   chmod +x scripts/new_script.sh
   ```

---

## ✅ Structure Benefits

### 1. **Clear Learning Path**

- Numbered folders show progression
- Easy to follow from basics to advanced
- No confusion about what to learn next

### 2. **Clean Organization**

- Documentation separate from code
- Scripts in dedicated folder
- Configuration in .vscode/

### 3. **Easy Navigation**

- Logical folder structure
- Descriptive names
- Consistent conventions

### 4. **Professional**

- Industry-standard organization
- Clean root directory
- Proper separation of concerns

### 5. **Maintainable**

- Easy to add new topics
- Clear where files belong
- Simple to update

### 6. **Clone-Ready**

- Works out-of-the-box
- All configuration tracked
- Automated setup available

---

## 🚀 Quick Navigation

### For Learners

1. **Start here:** `README.md`
2. **Setup:** `docs/SETUP.md` or `docs/KIRO_SETUP.md`
3. **Begin learning:** `C++/01_Basics/README.md`
4. **Follow numbered folders:** 01 → 02 → 03 → ...

### For Contributors

1. **Structure:** This file
2. **Cleanup history:** `CLEANUP_PLAN.md`
3. **Code style:** `docs/FORMATTING.md`
4. **Add content:** Follow numbering convention

### For Troubleshooting

1. **Issues:** `docs/TROUBLESHOOTING.md`
2. **Formatting:** `docs/FORMATTING.md`
3. **Setup:** `docs/SETUP.md` or `docs/KIRO_SETUP.md`

---

## 📖 Related Documentation

- **Main README:** [README.md](../README.md)
- **Setup Guide:** [SETUP.md](SETUP.md)
- **Kiro Setup:** [KIRO_SETUP.md](KIRO_SETUP.md)
- **VS Code Setup:** [VSCODE_SETUP.md](VSCODE_SETUP.md)
- **Code Snippets:** [.vscode/SNIPPETS.md](../.vscode/SNIPPETS.md)
- **Cleanup Plan:** [CLEANUP_PLAN.md](../CLEANUP_PLAN.md)

---

**This structure is designed for optimal learning and development experience! 🎉**
