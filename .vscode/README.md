# VS Code / Kiro Workspace Configuration

This folder contains all configuration for C++ development in Kiro IDE (or VS Code).

---

## 📁 Files Overview

| File                    | Purpose                                           |
| ----------------------- | ------------------------------------------------- |
| `settings.json`         | Editor settings, clangd configuration, formatting |
| `c_cpp_properties.json` | C++ IntelliSense configuration                    |
| `extensions.json`       | Recommended extensions list                       |
| `cpp.code-snippets`     | Custom C++ code snippets (30+)                    |
| `SNIPPETS.md`           | Documentation for all snippets                    |
| `README.md`             | This file                                         |

## 📚 Documentation Files

| File                 | Purpose                    |
| -------------------- | -------------------------- |
| `FORMATTING.md`      | Complete formatting guide  |
| `FORMAT_SETUP.md`    | Quick formatting setup     |
| `TEST_FORMAT.md`     | Formatting troubleshooting |
| `SETUP.md`           | Complete setup guide       |
| `TROUBLESHOOTING.md` | Fix IntelliSense issues    |
| `CLONE_TEST.md`      | Verify setup after cloning |

---

## ✨ What's Configured

### 1. IntelliSense (clangd)

- Auto-completion
- Error detection
- Hover documentation
- Go to definition
- Find references

### 2. Auto-Formatting (clang-format)

- Format on save (Cmd/Ctrl + S)
- Format on paste
- Google C++ Style Guide
- 4-space indentation

### 3. Code Snippets

- 30+ shortcuts for quick coding
- Type prefix + Tab to expand
- See SNIPPETS.md for full list

### 4. Extensions

- clangd - Language server
- Code Runner - One-click execution
- Better C++ Syntax - Enhanced highlighting

---

## 🚀 For New Users

When you clone this repository:

1. **Everything is pre-configured** ✅
2. **Run setup script**: `./setup.sh`
3. **Open in Kiro**: `kiro .`
4. **Start coding!** 🎉

No manual configuration needed!

---

## 🔧 Key Settings

### clangd Configuration

```json
{
	"clangd.path": "/opt/homebrew/opt/llvm/bin/clangd",
	"clangd.arguments": [
		"--background-index",
		"--clang-tidy",
		"--completion-style=detailed"
	]
}
```

### Formatting

```json
{
	"editor.formatOnSave": true,
	"editor.formatOnPaste": true,
	"[cpp]": {
		"editor.defaultFormatter": "llvm-vs-code-extensions.vscode-clangd"
	}
}
```

---

## 📝 Customization

### Change Indentation

Edit `.vscode/settings.json`:

```json
{
	"editor.tabSize": 2 // Change from 4 to 2
}
```

### Change Formatting Style

Edit `.clang-format` in root directory.

### Add Custom Snippets

Edit `.vscode/cpp.code-snippets`.

---

## ✅ Verification

After setup, verify:

- [ ] `std::` shows auto-completion
- [ ] Cmd/Ctrl + S formats code
- [ ] `int x = "hello";` shows error
- [ ] Hover over `cout` shows info
- [ ] `cpp` + Tab generates boilerplate

---

## 🆘 Troubleshooting

See [TROUBLESHOOTING.md](TROUBLESHOOTING.md) for common issues.

---

**All configuration is tracked in git - works automatically when you clone!** 🎉
