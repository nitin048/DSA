# 🛡️ How to Use Pre-Commit Guardian

## 🎯 Quick Start

The **Pre-Commit Guardian** is your automated repository quality control system. Run it before every commit to ensure your repository stays clean and well-organized.

## 📋 Usage Methods

### Method 1: Manual Execution (Recommended for Learning)

```bash
# Simply ask Kiro to run the pre-commit check
kiro "Run pre-commit guardian check"
```

Or be more specific:

```bash
kiro "Check my staged files before commit"
kiro "Validate what I'm about to commit"
kiro "Run repository cleanup and validation"
```

### Method 2: Automatic Execution (Set It and Forget It)

Add to your git pre-commit hook:

```bash
# Edit .git/hooks/pre-commit
#!/bin/bash

echo "🛡️  Running Pre-Commit Guardian..."
echo ""

# Run the guardian (you'll need to implement the actual check)
# For now, this is a placeholder for the automated version

# Check for executables
echo "Checking for compiled executables..."
executables=$(find C++ DataStructure\&Algorithm -type f ! -name "*.*" ! -path "*/.*" 2>/dev/null)

if [ -n "$executables" ]; then
    echo "⚠️  WARNING: Compiled executables found:"
    echo "$executables"
    echo ""
    echo "These files are ignored by .gitignore but exist in your working directory."
    echo "Consider running: ./scripts/clean-executables.sh"
    echo ""
fi

# Check staged files
staged_executables=$(git diff --cached --name-only | while read file; do
    if [[ ! "$file" =~ \. ]] && [[ -f "$file" ]] && [[ -x "$file" ]]; then
        echo "$file"
    fi
done)

if [ -n "$staged_executables" ]; then
    echo "❌ ERROR: Executable files are staged for commit:"
    echo "$staged_executables"
    echo ""
    echo "Removing from staging..."
    echo "$staged_executables" | while read file; do
        git reset HEAD "$file"
        echo "  ✓ Removed: $file"
    done
    echo ""
    echo "Please review and commit again."
    exit 1
fi

echo "✅ Pre-commit checks passed!"
echo ""
```

Make it executable:

```bash
chmod +x .git/hooks/pre-commit
```

## 🎯 What It Checks

### 1. Compiled Files ❌

**Problem**: Accidentally committing executables
**Solution**: Automatically removes them from staging

```bash
# Before Guardian:
git status
# Shows: 01-array (executable) ❌

# After Guardian:
# Executable removed from staging ✅
# Only 01-array.cpp is staged ✅
```

### 2. Redundant Documentation 📚

**Problem**: Multiple small .md files that could be consolidated
**Solution**: Merges them into appropriate README files

```bash
# Before Guardian:
GITIGNORE-SOLUTION.md (standalone)

# After Guardian:
docs/GITIGNORE.md (consolidated) ✅
Link added to main README ✅
```

### 3. Outdated README 📝

**Problem**: New folders/files not listed in README
**Solution**: Automatically updates README structure

```bash
# Before Guardian:
New folder: C++/11_Bitwise_Operator (not in README)

# After Guardian:
README.md updated with new section ✅
Learning resources link added ✅
Repository structure updated ✅
```

### 4. Sensitive Data 🔒

**Problem**: API keys, passwords in code
**Solution**: Blocks commit and warns user

```bash
# If detected:
❌ SENSITIVE DATA FOUND
⚠️  File: config.cpp
⚠️  Pattern: api_key = "..."

ACTION: Commit blocked
RECOMMENDATION: Use environment variables
```

### 5. File Organization 📁

**Problem**: Files in wrong locations
**Solution**: Suggests correct location

```bash
# If detected:
⚠️  File in wrong location: test.cpp (in root)
SUGGESTION: Move to appropriate folder
```

## 📊 Example Run

### Scenario: Committing Array Programs

```bash
# You've been working on array programs
$ ls DataStructure\&Algorithm/01-Arrays\ \&\ Vector\ Problems/01_Array_Data_Structure_Part1/
01-array          # ← Executable (bad!)
01-array.cpp      # ← Source (good!)
02-array          # ← Executable (bad!)
02-array.cpp      # ← Source (good!)
README.md         # ← Documentation (good!)

# You stage everything
$ git add DataStructure\&Algorithm/01-Arrays\ \&\ Vector\ Problems/01_Array_Data_Structure_Part1/

# Run Pre-Commit Guardian
$ kiro "Run pre-commit guardian check"
```

**Guardian Output:**

```
🛡️ PRE-COMMIT GUARDIAN REPORT
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔍 SCANNING STAGED FILES...
   Found: 5 files

📊 ANALYSIS:
   ✅ Source files: 2 (.cpp)
   ✅ Documentation: 1 (.md)
   ❌ Executables: 2 (no extension)

⚠️  ISSUES DETECTED:

1. COMPILED EXECUTABLES FOUND
   ❌ 01-array (39KB)
   ❌ 02-array (39KB)

   ACTION: Removing from staging...
   ✓ Removed: 01-array
   ✓ Removed: 02-array

   REASON: Compiled files should not be committed
   NOTE: These files are already in .gitignore

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ VALIDATION COMPLETE

📦 FILES READY FOR COMMIT:
   ✅ 01-array.cpp (new)
   ✅ 02-array.cpp (new)
   ✅ README.md (new)

💡 RECOMMENDATIONS:
   • Run: git status (to verify changes)
   • Executables are in .gitignore (no action needed)
   • Consider running: ./scripts/clean-executables.sh (to remove local executables)

🎉 REPOSITORY IS CLEAN AND READY FOR COMMIT!
```

## 🎯 Common Scenarios

### Scenario 1: New C++ Topic

```bash
# You create a new C++ folder
mkdir C++/12_Pointers
echo "content" > C++/12_Pointers/README.md

# Stage and check
git add C++/12_Pointers/
kiro "Run pre-commit guardian"

# Guardian will:
✅ Validate the new folder
✅ Update main README.md
✅ Add to "Repository Structure"
✅ Add to "Learning Resources"
✅ Maintain numbering consistency
```

### Scenario 2: Multiple Documentation Files

```bash
# You create several .md files
touch NOTES.md
touch GUIDE.md
touch TIPS.md

# Guardian will:
🔍 Analyze content
📚 Check if they can be consolidated
💡 Suggest merging into existing docs
✅ Update cross-references
```

### Scenario 3: Accidentally Staging Executables

```bash
# You compile and accidentally stage everything
g++ mycode.cpp -o mycode
git add .

# Guardian will:
❌ Detect executable: mycode
🔧 Remove from staging automatically
✅ Keep mycode.cpp staged
💡 Remind you about .gitignore
```

## 🔧 Customization

### Adjust Thresholds

Edit `.kiro/skills/pre-commit-guardian.md`:

```markdown
### Thresholds

- **Max file size**: 1MB (warning), 10MB (block)
- **Documentation consolidation**: <200 lines
- **Executable detection**: Any file without extension
```

### Add Custom Rules

Add your own validation rules:

```markdown
### Rule 6: Custom Validation
```

IF file matches pattern:
→ Take action
→ Log result

```

```

### Exclude Patterns

Add files/folders to skip:

```markdown
### Exclusions

- `.git/` folder
- `node_modules/` folder
- `your_custom_folder/`
```

## 📈 Best Practices

### 1. Run Before Every Commit

Make it a habit:

```bash
# Your workflow:
1. Make changes
2. git add <files>
3. kiro "Run pre-commit guardian"  ← Always do this!
4. git commit -m "message"
```

### 2. Review the Report

Don't just skip through it:

- Read what was changed
- Understand why actions were taken
- Learn from the recommendations

### 3. Keep .gitignore Updated

The guardian relies on .gitignore:

- Ensure patterns are correct
- Test with: `git check-ignore -v <file>`
- Update when adding new file types

### 4. Trust the Automation

The guardian is designed to be safe:

- It won't delete your work
- It only removes from staging, not from disk
- You can always review with `git status`

### 5. Use Cleanup Scripts

Complement the guardian:

```bash
# Before committing:
./scripts/clean-executables.sh  # Remove local executables
kiro "Run pre-commit guardian"   # Validate staging
git commit                       # Commit with confidence
```

## 🚨 Troubleshooting

### Issue: Guardian Not Running

**Problem**: Skill doesn't execute
**Solution**:

```bash
# Check if skill exists
ls .kiro/skills/pre-commit-guardian.md

# Try explicit command
kiro "Activate pre-commit-guardian skill and run it"
```

### Issue: False Positives

**Problem**: Guardian flags valid files
**Solution**:

- Check file naming (ensure extensions are present)
- Review .gitignore patterns
- Add exceptions if needed

### Issue: README Not Updating

**Problem**: New folders not added to README
**Solution**:

- Ensure folder structure matches expected pattern
- Check if README.md is writable
- Verify folder naming conventions

## 💡 Pro Tips

1. **Commit Often**: Smaller commits are easier to validate
2. **Use Branches**: Test guardian on feature branches first
3. **Read Warnings**: They're there to help you
4. **Keep Documentation Updated**: Guardian works best with good docs
5. **Run Cleanup Regularly**: Don't let executables accumulate

## 🎓 Learning Mode

Want to see what guardian would do without making changes?

```bash
# Dry-run mode (conceptual - implement if needed)
kiro "Show me what pre-commit guardian would do without making changes"
```

This will:

- Show all checks
- List actions that would be taken
- Provide recommendations
- But NOT modify anything

## 📚 Related Documentation

- [Git Ignore Solution](../GITIGNORE-SOLUTION.md)
- [Cleanup Script](../scripts/clean-executables.sh)
- [Repository Structure](../README.md#-repository-structure)

## 🎯 Success Metrics

Track your repository health:

- ✅ Zero executables committed (ever!)
- ✅ Documentation always up-to-date
- ✅ Clean git history
- ✅ Consistent structure
- ✅ No sensitive data leaks

---

## 🎉 You're Ready!

The Pre-Commit Guardian is your automated quality control system. Use it before every commit and keep your repository pristine!

**Remember**: A clean repository is a happy repository! 🛡️✨
