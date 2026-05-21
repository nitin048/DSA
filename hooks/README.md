# 🎣 Git Hooks - Beautiful Commit Messages

This folder contains **emoji-rich git hooks** that make your git workflow beautiful and informative! 🎉

---

## 🚀 Quick Install

```bash
# Run the installation script
./scripts/install_hooks.sh
```

**That's it!** 🎊 Your hooks are now installed and ready to use!

---

## 🎯 What's Included

### 1. 🛡️ **Pre-Commit Hook**

**Runs BEFORE every commit**

✅ Checks for untracked executables  
✅ Prevents committing compiled files  
✅ Shows helpful fix suggestions  
✅ Beautiful error messages with emojis

**Example Output:**

```
🔍 Scanning for untracked executables...

╔════════════════════════════════════════════════════════════════╗
║  ⚠️  WARNING: Untracked Executables Found! 🚨              ║
╚════════════════════════════════════════════════════════════════╝

📋 The following executable files are not in .gitignore:
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ❌ C++/08_Patterns/squarePattern
     🔗 Compiled from: C++/08_Patterns/squarePattern.cpp
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

💡 How to fix this:

  🎯 Option 1: Add to .gitignore manually
    💻 echo "C++/**/<filename>" >> .gitignore

  🎯 Option 2: Run helper script
    💻 ./scripts/check_executables.sh

  🎯 Option 3: Auto-update .gitignore
    💻 ./scripts/update_gitignore.sh

╔════════════════════════════════════════════════════════════════╗
║  🚫 COMMIT BLOCKED! 🛑                                       ║
║  ⚠️  Fix the issues above and try again 🔧                  ║
╚════════════════════════════════════════════════════════════════╝
```

---

### 2. 🎉 **Post-Commit Hook**

**Runs AFTER every successful commit**

✅ Beautiful commit summary  
✅ File change statistics  
✅ List of modified files with icons  
✅ Random helpful tips  
✅ Unpushed commits warning  
✅ Celebration messages

**Example Output:**

```
╔════════════════════════════════════════════════════════════════╗
║  ✅ COMMIT SUCCESSFUL! 🎉                                    ║
╚════════════════════════════════════════════════════════════════╝

📝 Commit Details:
   🔖 Hash:    abc1234
   🌿 Branch:  Feature/08-Patterns
   💬 Message: Add beautiful patterns
   👤 Author:  Nitin Pradhan
   📅 Date:    2026-05-20 15:30:45

📊 Changes Summary:
   📦 6 file(s) changed
   ➕ 1368 insertion(s)
   ➖ 85 deletion(s)

📁 Modified Files:
   🔵  C++/08_Patterns/squarePattern.cpp
   🔵  C++/08_Patterns/trianglePattern.cpp
   📄  C++/08_Patterns/README.md
   🚫  .gitignore
   📋  .vscode/launch.json
   📄  docs/COMPREHENSIVE_GITIGNORE.md

💡 Tip: Use 'git push' to push your changes to remote 🚀

⚠️  You have 1 unpushed commit(s) 📤
   💻 Run: git push to push to remote 🚀

╔════════════════════════════════════════════════════════════════╗
║  🎉 Great work! Keep coding! 💪                             ║
╚════════════════════════════════════════════════════════════════╝
```

---

## 🎨 Features

### **Emoji-Rich Messages** 🎊

Every message is packed with emojis for visual appeal:

- 🔍 Scanning
- ✅ Success
- ❌ Error
- ⚠️ Warning
- 💡 Tips
- 🚀 Actions
- 📊 Statistics
- 🎉 Celebrations

### **Color-Coded Output** 🌈

- 🟢 **Green:** Success messages
- 🔵 **Cyan:** Information
- 🟡 **Yellow:** Warnings and tips
- 🔴 **Red:** Errors
- 🟣 **Magenta:** Highlights

### **File Type Icons** 📁

| Icon | File Type            |
| ---- | -------------------- |
| 🔵   | `.cpp` files         |
| 🔷   | `.h`, `.hpp` headers |
| 📄   | `.md` markdown       |
| ⚙️   | `.sh` scripts        |
| 📋   | `.json` config       |
| 🚫   | `.gitignore`         |
| 🐍   | `.py` python         |
| 💛   | `.js` javascript     |
| 📝   | Other files          |

### **Random Tips** 💡

Post-commit hook shows random helpful tips:

- 💡 Use 'git log --oneline' to see commit history 📜
- 💡 Use 'git diff HEAD~1' to see what changed 🔍
- 💡 Use 'git push' to push your changes to remote 🚀
- 💡 Use './scripts/format.sh' to format all files 🎨
- And 8 more tips!

### **Random Celebrations** 🎊

Different celebration message each time:

- 🎉 Great work! Keep coding! 💪
- 🌟 Awesome commit! You're on fire! 🔥
- 🚀 Amazing! Keep up the great work! ⭐
- 💯 Perfect! You're doing great! 🎯
- And 6 more celebrations!

---

## 📦 Installation

### **Automatic (Recommended)** ✨

```bash
./scripts/install_hooks.sh
```

### **Manual** 🔧

```bash
# Copy hooks to .git/hooks/
cp hooks/pre-commit .git/hooks/pre-commit
cp hooks/post-commit .git/hooks/post-commit

# Make them executable
chmod +x .git/hooks/pre-commit
chmod +x .git/hooks/post-commit
```

---

## 🧪 Testing

### **Test Pre-Commit Hook:**

```bash
# Create a test executable
touch C++/test_executable
chmod +x C++/test_executable

# Try to commit
git add .
git commit -m "Test"

# Should be blocked with beautiful error! ✅
```

### **Test Post-Commit Hook:**

```bash
# Make a valid change
echo "// test" >> test.cpp

# Commit it
git add .
git commit -m "Test commit"

# Should show beautiful summary! ✅
```

---

## 🎯 Benefits

### **For You:** 👤

- ✅ Never commit executables accidentally 🛡️
- ✅ Beautiful, informative feedback 📊
- ✅ Learn git commands through tips 💡
- ✅ See your progress with statistics 📈
- ✅ Stay motivated with celebrations 🎉
- ✅ Professional workflow 💼

### **For Your Team:** 👥

- ✅ Consistent quality checks ✔️
- ✅ Educational tips for everyone 📚
- ✅ Prevents common mistakes 🚫
- ✅ Fun and engaging workflow 🎨
- ✅ Easy to install and use 🚀

---

## 🔧 Customization

### **Add More Tips:**

Edit `hooks/post-commit` and add to the `TIPS` array:

```bash
TIPS=(
    "💡 Your custom tip here 🎯"
    # ... existing tips
)
```

### **Add More Celebrations:**

Edit `hooks/post-commit` and add to the `CELEBRATIONS` array:

```bash
CELEBRATIONS=(
    "🎊 Your custom celebration! 🎉"
    # ... existing celebrations
)
```

### **Change Colors:**

Edit the color variables at the top of each hook file.

---

## 📊 Statistics

| Hook            | Lines | Emojis | Features                                      |
| --------------- | ----- | ------ | --------------------------------------------- |
| **Pre-commit**  | ~80   | 20+    | Executable check, colored output, suggestions |
| **Post-commit** | ~140  | 30+    | Summary, stats, tips, celebrations            |
| **Total**       | ~220  | 50+    | Complete workflow enhancement                 |

---

## 🆘 Troubleshooting

### **Hooks Not Running?**

```bash
# Check if installed
ls -la .git/hooks/

# Reinstall
./scripts/install_hooks.sh
```

### **No Colors?**

Your terminal might not support colors. The hooks will still work, just without colors.

### **Want to Bypass?**

```bash
# Not recommended, but possible
git commit --no-verify -m "Message"
```

---

## 🔗 Related Files

- **Installation Script:** `scripts/install_hooks.sh`
- **Documentation:** `docs/GIT_HOOKS_GUIDE.md`
- **Main README:** `README.md`

---

## ✅ Summary

**These hooks provide:**

1. 🛡️ **Automatic protection** - Pre-commit checks
2. 🎨 **Beautiful feedback** - Post-commit summary
3. 💡 **Helpful tips** - Learn git commands
4. 📊 **Statistics** - See your changes
5. 🎉 **Celebrations** - Stay motivated
6. 🚀 **Professional workflow** - Industry standard

**Result:** The most beautiful git experience ever! 🌟

---

## 🎊 Enjoy!

**Your git commits just got 100x more beautiful!** 🎉

**Happy coding!** 🚀💪✨

---

**Made with ❤️ and lots of emojis! 🎨**
