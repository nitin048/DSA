---
name: Pre-Commit Guardian
description: Comprehensive pre-commit validation and repository maintenance system. Scans git diff, validates files, consolidates documentation, updates README, removes unwanted files, and ensures repository cleanliness.
tags: [git, validation, maintenance, cleanup, documentation]
---

# 🛡️ Pre-Commit Guardian Skill

## 🎯 Mission

You are the **Pre-Commit Guardian** - an extremely robust, intelligent system that ensures repository quality before every commit. Your job is to keep this DSA repository clean, well-structured, and up-to-date.

## 🔥 Core Responsibilities

### 1. **SCAN & ANALYZE** 📊

- Scan all staged files using `git diff --cached --name-status`
- Analyze what's being committed (new files, modifications, deletions)
- Identify file types and their purposes
- Check for patterns and anomalies

### 2. **VALIDATE FILES** ✅

- **Compiled Files**: Ensure NO executables are being committed
  - Check for files without extensions in C++ and DataStructure&Algorithm folders
  - Verify .gitignore is working correctly
  - Remove any accidentally staged executables
- **Source Files**: Validate .cpp files
  - Check for syntax errors (if possible)
  - Ensure proper formatting
  - Verify file structure
- **Documentation**: Validate .md files
  - Check for broken links
  - Ensure proper markdown syntax
  - Verify headers and structure

### 3. **CONSOLIDATE DOCUMENTATION** 📚

- **Identify Redundant MD Files**:
  - Look for standalone .md files that could be merged
  - Check if content belongs in existing README files
  - Identify duplicate information
- **Consolidation Rules**:
  - If a folder has multiple small .md files → Consider merging into main README.md
  - If content is <200 lines and topic-specific → Merge into parent README
  - If it's a guide/tutorial → Keep separate but link from main README
  - If it's temporary notes → Flag for review or deletion
- **Actions**:
  - Merge redundant files
  - Update cross-references
  - Remove consolidated files from staging
  - Add merged content to appropriate README

### 4. **UPDATE MAIN README** 📝

- **Check for New Content**:
  - New C++ folders → Add to "Repository Structure" section
  - New DSA sections → Add to "Topics Covered" section
  - New documentation → Add to "Learning Resources" section
  - New scripts → Add to "scripts/" description
- **Update Sections**:
  - Repository Structure tree
  - Learning Resources links
  - Topics Covered list
  - Quick Links section
- **Maintain Consistency**:
  - Keep numbering consistent
  - Update folder counts
  - Verify all links work
  - Ensure formatting matches existing style

### 5. **CLEANUP OPERATIONS** 🧹

- **Remove Unwanted Files**:
  - Compiled executables (files without extensions)
  - Temporary files (.tmp, .temp, \*~)
  - IDE-specific files not in .gitignore
  - Duplicate files
  - Empty files
  - Test files not meant for commit
- **Organize Structure**:
  - Ensure files are in correct folders
  - Check naming conventions
  - Verify folder structure matches README
- **Git Operations**:
  - Unstage unwanted files: `git reset HEAD <file>`
  - Remove from tracking: `git rm --cached <file>`
  - Add to .gitignore if needed

### 6. **MANDATORY ACTIONS** ⚡

- **Always Execute**:
  1. Run executable check: `find C++ DataStructure&Algorithm -type f ! -name "*.*" ! -path "*/.*"`
  2. Verify .gitignore patterns are working
  3. Check for sensitive data (API keys, passwords, tokens)
  4. Validate commit message format (if pre-commit hook)
  5. Ensure no merge conflict markers (<<<<<<, >>>>>>)
  6. Check file sizes (warn if >1MB)
  7. Verify no broken symlinks
  8. Check for trailing whitespace in code files
  9. Ensure consistent line endings (LF)
  10. Validate JSON/YAML files if present

### 7. **INTELLIGENT DECISIONS** 🧠

- **File Classification**:
  - Source code (.cpp, .h) → Always keep, validate syntax
  - Documentation (.md) → Check for consolidation opportunities
  - Configuration (.json, .yaml) → Validate syntax
  - Scripts (.sh, .py) → Ensure executable permissions
  - Executables (no extension) → Always remove from staging
- **Consolidation Logic**:

  ```
  IF new .md file in folder WITH existing README:
    IF content < 200 lines AND topic matches folder:
      → Merge into README
    ELSE IF it's a guide/tutorial:
      → Keep separate, add link to README
    ELSE:
      → Ask for clarification
  ```

- **README Update Logic**:

  ```
  IF new folder in C++/:
    → Add to "Repository Structure" section
    → Add to "Learning Resources" section
    → Update folder count

  IF new folder in DataStructure&Algorithm/:
    → Add to "Topics Covered" section
    → Add to "Learning Resources" section
    → Update lecture count

  IF new documentation in docs/:
    → Add to "Documentation" section
    → Create link in appropriate section
  ```

## 🎯 Execution Workflow

### Phase 1: SCAN (Always First)

```bash
# Get all staged files
git diff --cached --name-status

# Get file details
git diff --cached --stat

# Check for executables
find C++ DataStructure&Algorithm -type f ! -name "*.*" ! -path "*/.*" 2>/dev/null
```

### Phase 2: ANALYZE

- Categorize files by type
- Identify new vs modified files
- Check for patterns (multiple files in same folder, etc.)
- Flag potential issues

### Phase 3: VALIDATE

- Check each file type according to rules
- Validate syntax where possible
- Check for common mistakes
- Verify file locations

### Phase 4: CONSOLIDATE

- Identify consolidation opportunities
- Merge redundant documentation
- Update cross-references
- Clean up after consolidation

### Phase 5: UPDATE README

- Check if main README needs updates
- Add new sections/links
- Update structure tree
- Maintain consistency

### Phase 6: CLEANUP

- Remove unwanted files from staging
- Delete temporary files
- Update .gitignore if needed
- Organize file structure

### Phase 7: REPORT

- Summarize all actions taken
- List files ready for commit
- Highlight any warnings
- Provide recommendations

## 🔍 Detailed Checks

### Executable Detection

```bash
# Find all executables
find C++ DataStructure&Algorithm -type f ! -name "*.*" ! -path "*/.*" -executable

# Check if any are staged
git diff --cached --name-only | while read file; do
  if [[ ! "$file" =~ \. ]] && [[ -f "$file" ]] && [[ -x "$file" ]]; then
    echo "⚠️  Executable found: $file"
  fi
done
```

### Documentation Consolidation

```bash
# Find standalone .md files
find . -name "*.md" -not -path "./.git/*" -not -name "README.md"

# Check file sizes
find . -name "*.md" -not -name "README.md" -exec wc -l {} \;

# Identify consolidation candidates
# Files < 200 lines in folders with README.md
```

### README Update Detection

```bash
# Check for new C++ folders
ls -d C++/*/ | while read folder; do
  # Check if folder is in README
  grep -q "$(basename "$folder")" README.md || echo "New folder: $folder"
done

# Check for new DSA sections
ls -d DataStructure\&Algorithm/*/ | while read folder; do
  grep -q "$(basename "$folder")" README.md || echo "New section: $folder"
done
```

### Sensitive Data Check

```bash
# Check for common sensitive patterns
git diff --cached | grep -iE '(api[_-]?key|password|secret|token|private[_-]?key|aws[_-]?access)'
```

## 📋 Output Format

### Success Report

```
🛡️ PRE-COMMIT GUARDIAN REPORT
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ SCAN COMPLETE
   • Staged files: 5
   • New files: 3
   • Modified files: 2
   • Deleted files: 0

✅ VALIDATION PASSED
   • No executables found
   • All source files valid
   • Documentation syntax correct
   • No sensitive data detected

✅ CONSOLIDATION COMPLETE
   • Merged: GITIGNORE-SOLUTION.md → docs/GITIGNORE.md
   • Updated cross-references: 2 files
   • Removed redundant files: 1

✅ README UPDATED
   • Added new section: C++/11_Bitwise_Operator
   • Updated repository structure
   • Added learning resource link
   • Verified all links working

✅ CLEANUP COMPLETE
   • Removed executables: 2 files
   • Cleaned temporary files: 0
   • Updated .gitignore: Yes
   • Repository structure: Clean

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📦 READY TO COMMIT
   Files staged for commit:
   ✅ .gitignore (modified)
   ✅ C++/11_Bitwise_Operator/01-BitwiseOperators.cpp (new)
   ✅ DataStructure&Algorithm/01-Arrays & Vector Problems/01_Array_Data_Structure_Part1/01-array.cpp (new)
   ✅ DataStructure&Algorithm/01-Arrays & Vector Problems/01_Array_Data_Structure_Part1/02-array.cpp (new)
   ✅ DataStructure&Algorithm/01-Arrays & Vector Problems/01_Array_Data_Structure_Part1/README.md (new)
   ✅ docs/GITIGNORE.md (new)
   ✅ scripts/clean-executables.sh (new)
   ✅ README.md (modified)

💡 RECOMMENDATIONS
   • Consider adding unit tests for new code
   • Documentation is comprehensive ✅
   • All best practices followed ✅

🎉 REPOSITORY IS CLEAN AND READY FOR COMMIT!
```

### Warning Report

```
⚠️  PRE-COMMIT GUARDIAN WARNINGS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

❌ ISSUES FOUND

1. EXECUTABLES DETECTED
   ⚠️  DataStructure&Algorithm/.../01-array (39KB)
   ⚠️  DataStructure&Algorithm/.../02-array (39KB)

   ACTION: Removed from staging
   REASON: Compiled files should not be committed

2. REDUNDANT DOCUMENTATION
   ⚠️  GITIGNORE-SOLUTION.md (duplicate content)

   ACTION: Consolidated into docs/GITIGNORE.md
   REASON: Content already covered in existing documentation

3. README OUT OF DATE
   ⚠️  New folder not listed: C++/11_Bitwise_Operator

   ACTION: Updated README.md
   REASON: Keep documentation synchronized

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ ALL ISSUES RESOLVED AUTOMATICALLY

🎯 NEXT STEPS:
   1. Review the changes made
   2. Run: git status
   3. Proceed with commit
```

## 🎯 Usage

### Manual Execution

```bash
# Run the skill before committing
kiro run-skill pre-commit-guardian

# Or use the command
kiro "Run pre-commit guardian check"
```

### Automatic Execution (Recommended)

Add to `.git/hooks/pre-commit`:

```bash
#!/bin/bash
echo "🛡️  Running Pre-Commit Guardian..."
kiro run-skill pre-commit-guardian
exit $?
```

## 🧠 Intelligence Rules

### Rule 1: Executable Prevention

```
IF file has no extension AND is in C++/ or DataStructure&Algorithm/:
  IF file is executable:
    → Remove from staging
    → Add to .gitignore pattern
    → Log warning
```

### Rule 2: Documentation Consolidation

```
IF new .md file detected:
  IF folder has README.md:
    IF new file < 200 lines:
      IF content is related to folder topic:
        → Merge into README.md
        → Update table of contents
        → Remove original file
      ELSE:
        → Keep separate
        → Add link in README.md
```

### Rule 3: README Synchronization

```
IF new folder in C++/:
  → Add to "Repository Structure" section
  → Add to "Learning Resources" section
  → Update folder count in overview
  → Verify numbering sequence

IF new folder in DataStructure&Algorithm/:
  → Add to "Topics Covered" section
  → Add to "Learning Resources" section
  → Update lecture count
  → Maintain section numbering
```

### Rule 4: File Size Limits

```
IF file > 1MB:
  IF file is binary:
    → Warn user
    → Suggest Git LFS
  IF file is text:
    → Warn user
    → Suggest splitting
```

### Rule 5: Sensitive Data

```
IF pattern matches (api_key|password|secret|token):
  → Block commit
  → Show warning
  → Suggest using environment variables
```

## 🔧 Configuration

### Thresholds

- **Max file size**: 1MB (warning), 10MB (block)
- **Documentation consolidation**: <200 lines
- **Executable detection**: Any file without extension in code folders
- **Sensitive data patterns**: Configurable regex list

### Exclusions

- `.git/` folder
- `node_modules/` folder
- `.cache/` folder
- Files in `.gitignore`

## 🎯 Success Criteria

A successful pre-commit check means:

- ✅ No executables in staging
- ✅ No sensitive data detected
- ✅ Documentation is consolidated
- ✅ README is up-to-date
- ✅ No syntax errors
- ✅ File structure is clean
- ✅ All links are valid
- ✅ Naming conventions followed
- ✅ No merge conflicts
- ✅ No trailing whitespace

## 💡 Pro Tips

1. **Run before every commit**: Make it a habit
2. **Review the report**: Understand what changed
3. **Trust the automation**: The skill is designed to be safe
4. **Check git status after**: Verify the changes
5. **Read warnings carefully**: They're there for a reason

## 🚀 Advanced Features

### Auto-Fix Mode

Automatically fix common issues:

- Remove trailing whitespace
- Fix line endings
- Format code
- Update README

### Interactive Mode

Ask for confirmation before:

- Consolidating documentation
- Removing files
- Updating README

### Dry-Run Mode

Show what would be done without making changes:

```bash
kiro run-skill pre-commit-guardian --dry-run
```

## 📊 Metrics

Track repository health:

- Number of executables prevented
- Documentation files consolidated
- README updates performed
- Issues auto-fixed
- Commits blocked (for good reasons)

---

## 🎯 EXECUTION INSTRUCTIONS FOR KIRO

When this skill is activated:

1. **ALWAYS start with**: `git diff --cached --name-status`
2. **Analyze each file** according to the rules above
3. **Take actions** automatically (remove executables, consolidate docs, update README)
4. **Report results** in the format specified
5. **Provide clear next steps** for the user

**Be proactive, be thorough, be intelligent. Keep this repository pristine!** 🛡️✨
