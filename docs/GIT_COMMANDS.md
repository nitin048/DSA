# 🚀 Complete Git Commands Guide

Your ultimate Git reference with all commands, use cases, and examples! 💪

---

## 📋 Table of Contents

1. [Setup & Configuration](#-setup--configuration)
2. [Creating Repositories](#-creating-repositories)
3. [Basic Snapshotting](#-basic-snapshotting)
4. [Branching & Merging](#-branching--merging)
5. [Sharing & Updating](#-sharing--updating)
6. [Inspection & Comparison](#-inspection--comparison)
7. [Undoing Changes](#-undoing-changes)
8. [Stashing](#-stashing)
9. [Tagging](#-tagging)
10. [Advanced Commands](#-advanced-commands)
11. [Common Workflows](#-common-workflows)
12. [Troubleshooting](#-troubleshooting)

---

## ⚙️ Setup & Configuration

### **`git config`** - Configure Git settings

**📝 Use Cases:**

- Setting up your identity
- Configuring editor
- Setting up aliases
- Customizing Git behavior

**🎯 Common Commands:**

```bash
# Set your name (required for commits)
git config --global user.name "Your Name"

# Set your email (required for commits)
git config --global user.email "your.email@example.com"

# Set default editor
git config --global core.editor "code"  # VS Code
git config --global core.editor "vim"   # Vim

# Set default branch name
git config --global init.defaultBranch main

# View all settings
git config --list

# View specific setting
git config user.name

# Create aliases (shortcuts)
git config --global alias.st status
git config --global alias.co checkout
git config --global alias.br branch
git config --global alias.cm commit

# Enable colored output
git config --global color.ui auto
```

**💡 When to Use:**

- ✅ First time setting up Git
- ✅ Changing your email/name
- ✅ Creating shortcuts for common commands
- ✅ Customizing Git behavior

---

## 📁 Creating Repositories

### **`git init`** - Create a new repository

**📝 Use Case:** Start a new project with Git

```bash
# Initialize in current directory
git init

# Initialize in new directory
git init my-project

# Initialize with specific branch name
git init -b main
```

**💡 When to Use:**

- ✅ Starting a new project from scratch
- ✅ Adding Git to existing project

---

### **`git clone`** - Copy a repository

**📝 Use Case:** Download an existing repository

```bash
# Clone a repository
git clone https://github.com/username/repo.git

# Clone into specific folder
git clone https://github.com/username/repo.git my-folder

# Clone specific branch
git clone -b branch-name https://github.com/username/repo.git

# Clone with depth (shallow clone)
git clone --depth 1 https://github.com/username/repo.git
```

**💡 When to Use:**

- ✅ Contributing to open source
- ✅ Working on team projects
- ✅ Downloading code from GitHub/GitLab

---

## 📸 Basic Snapshotting

### **`git status`** - Check repository status

**📝 Use Case:** See what's changed

```bash
# Full status
git status

# Short format
git status -s

# Show branch info
git status -sb
```

**💡 When to Use:**

- ✅ Before committing (check what's changed)
- ✅ After making changes
- ✅ To see untracked files
- ✅ **Use this ALL THE TIME!** 🔥

---

### **`git add`** - Stage changes

**📝 Use Case:** Prepare files for commit

```bash
# Add specific file
git add file.txt

# Add multiple files
git add file1.txt file2.txt

# Add all files in directory
git add .

# Add all files (including deleted)
git add -A

# Add by pattern
git add *.cpp

# Add interactively (choose what to add)
git add -p
```

**💡 When to Use:**

- ✅ Before every commit
- ✅ After creating new files
- ✅ After modifying files

---

### **`git commit`** - Save changes

**📝 Use Case:** Record changes to repository

```bash
# Commit with message
git commit -m "Add new feature"

# Commit with detailed message
git commit -m "Title" -m "Description"

# Commit all tracked files (skip git add)
git commit -am "Quick commit"

# Amend last commit (fix message or add files)
git commit --amend

# Amend without changing message
git commit --amend --no-edit

# Empty commit (no changes)
git commit --allow-empty -m "Trigger CI"
```

**💡 When to Use:**

- ✅ After completing a feature
- ✅ After fixing a bug
- ✅ After making logical changes
- ✅ **Commit often!** Small commits are better! 🎯

---

### **`git rm`** - Remove files

**📝 Use Case:** Delete files from Git

```bash
# Remove file from Git and filesystem
git rm file.txt

# Remove from Git only (keep in filesystem)
git rm --cached file.txt

# Remove directory
git rm -r folder/

# Force remove
git rm -f file.txt
```

**💡 When to Use:**

- ✅ Deleting files you don't need
- ✅ Removing accidentally committed files
- ✅ Cleaning up old code

---

### **`git mv`** - Move/rename files

**📝 Use Case:** Rename or move files

```bash
# Rename file
git mv oldname.txt newname.txt

# Move file to directory
git mv file.txt folder/

# Move and rename
git mv old/file.txt new/newfile.txt
```

**💡 When to Use:**

- ✅ Renaming files
- ✅ Reorganizing project structure
- ✅ Moving files to different folders

---

## 🌿 Branching & Merging

### **`git branch`** - Manage branches

**📝 Use Case:** Create and manage branches

```bash
# List all branches
git branch

# List all branches (including remote)
git branch -a

# Create new branch
git branch feature-name

# Delete branch
git branch -d branch-name

# Force delete branch
git branch -D branch-name

# Rename current branch
git branch -m new-name

# Rename other branch
git branch -m old-name new-name

# Show last commit on each branch
git branch -v
```

**💡 When to Use:**

- ✅ Starting new features
- ✅ Fixing bugs separately
- ✅ Experimenting with code
- ✅ **Always use branches!** Never work on main! 🚫

---

### **`git checkout`** - Switch branches

**📝 Use Case:** Move between branches

```bash
# Switch to existing branch
git checkout branch-name

# Create and switch to new branch
git checkout -b new-branch

# Switch to previous branch
git checkout -

# Discard changes in file
git checkout -- file.txt

# Checkout specific commit
git checkout commit-hash
```

**💡 When to Use:**

- ✅ Switching between features
- ✅ Creating new branches
- ✅ Discarding unwanted changes

---

### **`git switch`** - Modern branch switching

**📝 Use Case:** Better alternative to checkout

```bash
# Switch to branch
git switch branch-name

# Create and switch
git switch -c new-branch

# Switch to previous branch
git switch -

# Switch to remote branch
git switch remote-branch
```

**💡 When to Use:**

- ✅ Same as checkout but clearer
- ✅ Recommended for Git 2.23+

---

### **`git merge`** - Combine branches

**📝 Use Case:** Merge changes from one branch to another

```bash
# Merge branch into current branch
git merge feature-branch

# Merge with commit message
git merge feature-branch -m "Merge feature"

# Merge without fast-forward
git merge --no-ff feature-branch

# Abort merge (if conflicts)
git merge --abort

# Continue merge after resolving conflicts
git merge --continue
```

**💡 When to Use:**

- ✅ Combining feature branches into main
- ✅ Updating your branch with main
- ✅ Integrating changes from team members

---

### **`git rebase`** - Reapply commits

**📝 Use Case:** Clean up commit history

```bash
# Rebase current branch onto main
git rebase main

# Interactive rebase (edit commits)
git rebase -i HEAD~3

# Continue after resolving conflicts
git rebase --continue

# Skip current commit
git rebase --skip

# Abort rebase
git rebase --abort
```

**💡 When to Use:**

- ✅ Cleaning up commit history
- ✅ Squashing multiple commits
- ✅ Updating feature branch with main
- ⚠️ **Never rebase public branches!**

---

## 🌐 Sharing & Updating

### **`git remote`** - Manage remote repositories

**📝 Use Case:** Connect to remote servers

```bash
# List remotes
git remote

# List remotes with URLs
git remote -v

# Add remote
git remote add origin https://github.com/user/repo.git

# Remove remote
git remote remove origin

# Rename remote
git remote rename old-name new-name

# Change remote URL
git remote set-url origin https://new-url.git

# Show remote info
git remote show origin
```

**💡 When to Use:**

- ✅ Connecting to GitHub/GitLab
- ✅ Working with multiple remotes
- ✅ Changing repository URLs

---

### **`git fetch`** - Download changes

**📝 Use Case:** Get updates without merging

```bash
# Fetch from origin
git fetch

# Fetch from specific remote
git fetch origin

# Fetch specific branch
git fetch origin main

# Fetch all remotes
git fetch --all

# Fetch and prune deleted branches
git fetch --prune
```

**💡 When to Use:**

- ✅ Checking for updates
- ✅ Before merging remote changes
- ✅ Updating remote branch info

---

### **`git pull`** - Download and merge

**📝 Use Case:** Update your branch with remote changes

```bash
# Pull from current branch's remote
git pull

# Pull from specific remote and branch
git pull origin main

# Pull with rebase instead of merge
git pull --rebase

# Pull all branches
git pull --all
```

**💡 When to Use:**

- ✅ Getting latest changes from team
- ✅ Updating your local branch
- ✅ Before starting new work
- ✅ **Pull before you push!** 🔄

---

### **`git push`** - Upload changes

**📝 Use Case:** Share your commits with others

```bash
# Push to remote
git push

# Push to specific remote and branch
git push origin main

# Push and set upstream
git push -u origin feature-branch

# Push all branches
git push --all

# Push tags
git push --tags

# Force push (dangerous!)
git push --force

# Safer force push
git push --force-with-lease

# Delete remote branch
git push origin --delete branch-name
```

**💡 When to Use:**

- ✅ Sharing your work with team
- ✅ Backing up your code
- ✅ After committing changes
- ⚠️ **Be careful with force push!**

---

## 🔍 Inspection & Comparison

### **`git log`** - View commit history

**📝 Use Case:** See what happened

```bash
# Basic log
git log

# One line per commit
git log --oneline

# Show last 5 commits
git log -5

# Show with graph
git log --graph --oneline --all

# Show with stats
git log --stat

# Show specific file history
git log file.txt

# Show commits by author
git log --author="Name"

# Show commits in date range
git log --since="2 weeks ago"
git log --after="2024-01-01"

# Pretty format
git log --pretty=format:"%h - %an, %ar : %s"

# Show commits that changed a file
git log -p file.txt
```

**💡 When to Use:**

- ✅ Reviewing project history
- ✅ Finding when bugs were introduced
- ✅ Checking who made changes
- ✅ Understanding code evolution

---

### **`git diff`** - Show changes

**📝 Use Case:** See what's different

```bash
# Show unstaged changes
git diff

# Show staged changes
git diff --staged

# Show changes in specific file
git diff file.txt

# Compare branches
git diff main..feature

# Compare commits
git diff commit1 commit2

# Show word-level diff
git diff --word-diff

# Show stats only
git diff --stat
```

**💡 When to Use:**

- ✅ Before committing (review changes)
- ✅ Comparing branches
- ✅ Reviewing what changed
- ✅ **Always check before commit!** 👀

---

### **`git show`** - Show commit details

**📝 Use Case:** Inspect specific commit

```bash
# Show last commit
git show

# Show specific commit
git show commit-hash

# Show specific file in commit
git show commit-hash:file.txt

# Show tag
git show v1.0.0
```

**💡 When to Use:**

- ✅ Reviewing a specific commit
- ✅ Checking what changed in a commit
- ✅ Inspecting tagged releases

---

### **`git blame`** - Show who changed what

**📝 Use Case:** Find who wrote each line

```bash
# Show blame for file
git blame file.txt

# Show blame with email
git blame -e file.txt

# Show blame for specific lines
git blame -L 10,20 file.txt

# Ignore whitespace changes
git blame -w file.txt
```

**💡 When to Use:**

- ✅ Finding who wrote code
- ✅ Understanding code history
- ✅ Tracking down bugs
- ⚠️ **Use for learning, not blaming!** 😊

---

## ⏪ Undoing Changes

### **`git reset`** - Undo commits

**📝 Use Case:** Move branch pointer back

```bash
# Unstage file (keep changes)
git reset file.txt

# Undo last commit (keep changes)
git reset HEAD~1

# Undo last commit (keep changes staged)
git reset --soft HEAD~1

# Undo last commit (discard changes)
git reset --hard HEAD~1

# Reset to specific commit
git reset commit-hash

# Reset to remote state
git reset --hard origin/main
```

**💡 When to Use:**

- ✅ Undoing commits locally
- ✅ Unstaging files
- ✅ Starting over from a commit
- ⚠️ **Dangerous! Can lose work!**

---

### **`git revert`** - Undo commits safely

**📝 Use Case:** Create new commit that undoes changes

```bash
# Revert last commit
git revert HEAD

# Revert specific commit
git revert commit-hash

# Revert without committing
git revert -n commit-hash

# Revert merge commit
git revert -m 1 merge-commit-hash
```

**💡 When to Use:**

- ✅ Undoing public commits
- ✅ Safely removing changes
- ✅ Keeping history clean
- ✅ **Safer than reset!** ✅

---

### **`git restore`** - Restore files

**📝 Use Case:** Discard changes in files

```bash
# Restore file to last commit
git restore file.txt

# Restore all files
git restore .

# Unstage file
git restore --staged file.txt

# Restore from specific commit
git restore --source=commit-hash file.txt
```

**💡 When to Use:**

- ✅ Discarding unwanted changes
- ✅ Unstaging files
- ✅ Restoring deleted files

---

### **`git clean`** - Remove untracked files

**📝 Use Case:** Delete files not in Git

```bash
# Show what would be deleted (dry run)
git clean -n

# Delete untracked files
git clean -f

# Delete untracked files and directories
git clean -fd

# Delete ignored files too
git clean -fx

# Interactive clean
git clean -i
```

**💡 When to Use:**

- ✅ Cleaning up build files
- ✅ Removing temporary files
- ✅ Starting fresh
- ⚠️ **Can't undo! Be careful!**

---

## 💾 Stashing

### **`git stash`** - Save work temporarily

**📝 Use Case:** Save changes without committing

```bash
# Stash current changes
git stash

# Stash with message
git stash save "Work in progress"

# Stash including untracked files
git stash -u

# List all stashes
git stash list

# Apply last stash
git stash apply

# Apply and remove last stash
git stash pop

# Apply specific stash
git stash apply stash@{2}

# Show stash contents
git stash show

# Delete stash
git stash drop stash@{0}

# Delete all stashes
git stash clear

# Create branch from stash
git stash branch new-branch
```

**💡 When to Use:**

- ✅ Switching branches with uncommitted work
- ✅ Pulling changes with local modifications
- ✅ Temporarily saving work
- ✅ **Super useful!** 💪

---

## 🏷️ Tagging

### **`git tag`** - Mark important points

**📝 Use Case:** Mark releases and versions

```bash
# List all tags
git tag

# Create lightweight tag
git tag v1.0.0

# Create annotated tag
git tag -a v1.0.0 -m "Version 1.0.0"

# Tag specific commit
git tag v1.0.0 commit-hash

# Show tag info
git show v1.0.0

# Delete tag
git tag -d v1.0.0

# Push tag to remote
git push origin v1.0.0

# Push all tags
git push --tags

# Delete remote tag
git push origin --delete v1.0.0

# Checkout tag
git checkout v1.0.0
```

**💡 When to Use:**

- ✅ Marking releases
- ✅ Versioning your code
- ✅ Creating stable points
- ✅ **Tag every release!** 🎯

---

## 🚀 Advanced Commands

### **`git cherry-pick`** - Apply specific commits

**📝 Use Case:** Copy commits from one branch to another

```bash
# Cherry-pick a commit
git cherry-pick commit-hash

# Cherry-pick multiple commits
git cherry-pick commit1 commit2

# Cherry-pick without committing
git cherry-pick -n commit-hash

# Continue after conflicts
git cherry-pick --continue

# Abort cherry-pick
git cherry-pick --abort
```

**💡 When to Use:**

- ✅ Applying hotfixes to multiple branches
- ✅ Copying specific features
- ✅ Selective merging

---

### **`git reflog`** - Reference log

**📝 Use Case:** See all Git actions (even deleted commits!)

```bash
# Show reflog
git reflog

# Show reflog for specific branch
git reflog show branch-name

# Recover deleted commit
git checkout commit-hash
```

**💡 When to Use:**

- ✅ Recovering lost commits
- ✅ Undoing mistakes
- ✅ Finding deleted branches
- ✅ **Lifesaver!** 🆘

---

### **`git bisect`** - Find bugs

**📝 Use Case:** Binary search for bug-introducing commit

```bash
# Start bisect
git bisect start

# Mark current as bad
git bisect bad

# Mark old commit as good
git bisect good commit-hash

# Mark current as good/bad
git bisect good
git bisect bad

# Finish bisect
git bisect reset
```

**💡 When to Use:**

- ✅ Finding when bug was introduced
- ✅ Debugging complex issues
- ✅ Tracking down regressions

---

### **`git submodule`** - Manage subprojects

**📝 Use Case:** Include other repositories

```bash
# Add submodule
git submodule add https://github.com/user/repo.git path/

# Initialize submodules
git submodule init

# Update submodules
git submodule update

# Clone with submodules
git clone --recursive https://github.com/user/repo.git

# Update all submodules
git submodule update --remote
```

**💡 When to Use:**

- ✅ Including libraries
- ✅ Managing dependencies
- ✅ Sharing code between projects

---

## 🔄 Common Workflows

### **🆕 Starting New Feature**

```bash
# 1. Update main branch
git checkout main
git pull origin main

# 2. Create feature branch
git checkout -b feature/new-feature

# 3. Make changes and commit
git add .
git commit -m "Add new feature"

# 4. Push to remote
git push -u origin feature/new-feature

# 5. Create Pull Request on GitHub
```

---

### **🐛 Fixing a Bug**

```bash
# 1. Create bugfix branch
git checkout -b bugfix/fix-issue

# 2. Fix the bug and commit
git add .
git commit -m "Fix: resolve issue #123"

# 3. Push and create PR
git push -u origin bugfix/fix-issue
```

---

### **🔄 Updating Your Branch**

```bash
# Option 1: Merge
git checkout main
git pull origin main
git checkout feature-branch
git merge main

# Option 2: Rebase (cleaner history)
git checkout feature-branch
git rebase main
```

---

### **🚨 Fixing Mistakes**

```bash
# Undo last commit (keep changes)
git reset HEAD~1

# Undo last commit (discard changes)
git reset --hard HEAD~1

# Fix commit message
git commit --amend -m "New message"

# Add forgotten file to last commit
git add forgotten-file.txt
git commit --amend --no-edit

# Undo changes in file
git restore file.txt

# Recover deleted commit
git reflog
git checkout commit-hash
```

---

### **🧹 Cleaning Up**

```bash
# Delete merged branches
git branch --merged | grep -v "\*" | xargs -n 1 git branch -d

# Remove remote-tracking branches that no longer exist
git fetch --prune

# Clean untracked files
git clean -fd

# Reset to remote state
git fetch origin
git reset --hard origin/main
```

---

## 🆘 Troubleshooting

### **❌ Merge Conflicts**

```bash
# 1. See conflicted files
git status

# 2. Open and fix conflicts in files
# Look for <<<<<<< HEAD markers

# 3. After fixing, stage files
git add .

# 4. Complete merge
git commit
```

---

### **🔙 Undo Push (Dangerous!)**

```bash
# If you just pushed
git reset --hard HEAD~1
git push --force-with-lease

# ⚠️ Only do this if no one else pulled!
```

---

### **🔍 Find Lost Commits**

```bash
# Show all actions
git reflog

# Checkout lost commit
git checkout commit-hash

# Create branch from it
git checkout -b recovered-branch
```

---

### **🚫 Ignore Already Tracked Files**

```bash
# Add to .gitignore
echo "file.txt" >> .gitignore

# Remove from Git (keep file)
git rm --cached file.txt

# Commit
git commit -m "Stop tracking file.txt"
```

---

### **🔄 Sync Fork with Original**

```bash
# Add upstream remote
git remote add upstream https://github.com/original/repo.git

# Fetch upstream
git fetch upstream

# Merge upstream into your main
git checkout main
git merge upstream/main

# Push to your fork
git push origin main
```

---

## 🎓 Best Practices

### **✅ DO:**

- ✅ Commit often with clear messages
- ✅ Pull before you push
- ✅ Use branches for features
- ✅ Review changes before committing (`git diff`)
- ✅ Write meaningful commit messages
- ✅ Keep commits small and focused
- ✅ Use `.gitignore` for generated files
- ✅ Tag releases
- ✅ Use `git status` frequently

### **❌ DON'T:**

- ❌ Commit directly to main
- ❌ Force push to shared branches
- ❌ Commit large binary files
- ❌ Commit sensitive data (passwords, keys)
- ❌ Rebase public branches
- ❌ Use `git reset --hard` without thinking
- ❌ Ignore merge conflicts
- ❌ Commit without testing

---

## 📝 Commit Message Guidelines

### **Good Commit Messages:**

```bash
# Format: <type>: <subject>

git commit -m "feat: add user authentication"
git commit -m "fix: resolve login bug"
git commit -m "docs: update README"
git commit -m "style: format code"
git commit -m "refactor: simplify function"
git commit -m "test: add unit tests"
git commit -m "chore: update dependencies"
```

### **Types:**

- `feat`: New feature
- `fix`: Bug fix
- `docs`: Documentation
- `style`: Formatting
- `refactor`: Code restructuring
- `test`: Adding tests
- `chore`: Maintenance

---

## 🎯 Quick Reference

### **Most Used Commands:**

```bash
git status          # Check status
git add .           # Stage all changes
git commit -m ""    # Commit with message
git push            # Push to remote
git pull            # Pull from remote
git checkout -b     # Create branch
git merge           # Merge branches
git log --oneline   # View history
git diff            # See changes
git stash           # Save work temporarily
```

---

## 🔗 Useful Resources

- 📖 [Official Git Documentation](https://git-scm.com/doc)
- 📚 [Pro Git Book](https://git-scm.com/book)
- 🎮 [Learn Git Branching](https://learngitbranching.js.org/)
- 📝 [Git Cheat Sheet](https://education.github.com/git-cheat-sheet-education.pdf)
- 🎓 [GitHub Learning Lab](https://lab.github.com/)

---

## 🎉 Congratulations!

You now have a complete Git reference! 🚀

**Remember:**

- 💪 Practice makes perfect
- 🔄 Commit often
- 🌿 Use branches
- 📖 Read commit messages
- 🆘 Don't panic - Git can recover almost anything!

**Happy Coding!** 🎊✨

---

**Made with ❤️ for developers by developers**
