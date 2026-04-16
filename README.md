# C Practice Repository

## Overview

This repository contains C language practice programs and exercises, designed for learning and implementing fundamental C programming concepts. It serves as a comprehensive resource for understanding core C features including data types, mathematical operations, input/output handling, and program structure.

## Owner

**Atul** - Learning and practicing C programming fundamentals

## Project Purpose

This project is a collection of C learning exercises that covers:

- **Program Structure**: Understanding the standard C program organization (documentation, preprocessor directives, global declarations, main program, subprograms)
- **Data Types & Limits**: Exploring integer, floating-point, and character data types with their minimum and maximum values
- **Mathematical Operations**: Implementing and testing complex mathematical expressions and calculations
- **Input/Output**: Working with `scanf()` and `printf()` for user interaction
- **Standard Libraries**: Utilizing math library functions (`math.h`), limits definitions (`limits.h`), and other standard C libraries

## Project Structure

```
c-practice/
├── README.md                 # This file
├── exe.txt                   # Build and execution notes
└── read/
    ├── main.c               # Basic "Hello World" program demonstrating C structure
    ├── pg80.c               # Mathematical operations and library function examples
    └── input4.c             # Input/output handling demonstration
```

## Getting Started

### Prerequisites

- GCC compiler (or any C compiler)
- Git installed
- Basic understanding of command-line operations
- (Optional) Math library support (`-lm` flag)

### Clone the Repository

```bash
git clone https://github.com/yourusername/c-practice.git
cd c-practice
```

Replace `yourusername` with your actual GitHub username or the appropriate repository URL.

### Building & Running

1. **Navigate to the project directory:**
   ```bash
   cd c-practice
   ```

2. **Compile a program:**
   ```bash
   gcc read/<filename>.c -o exe/<executable_name>
   ```
   
   For programs using math library functions (like `pg80.c`):
   ```bash
   gcc read/pg80.c -o exe/pg80 -lm
   ```

3. **Execute the compiled program:**
   ```bash
   ./exe/<executable_name>
   ```

### Quick Example

```bash
# Compile main.c
gcc read/main.c -o exe/main

# Run the program
./exe/main
```

## File Descriptions

| File | Purpose |
|------|---------|
| `read/main.c` | Demonstrates basic C program structure with "Hello World" output |
| `read/pg80.c` | Comprehensive mathematical operations using `math.h` and data type limits |
| `read/input4.c` | Shows basic input handling with `scanf()` and variable operations |

## Key Concepts Covered

- ✅ Standard C program organization and structure
- ✅ Data type ranges (INT_MIN, INT_MAX, UINT_MAX, LONG_MIN, LONG_MAX)
- ✅ Mathematical expressions and calculations
- ✅ Mathematical library functions (sqrt, sin, cos, pow, exp, fabs)
- ✅ Input/Output operations
- ✅ Character handling
- ✅ Floating-point arithmetic

## Build Notes

Refer to `exe.txt` for:
- Naming conventions for source files and executables
- Special compiler flags required
- Execution instructions

## Git Workflow & Version Control

This repository uses Git for version control with a branching strategy to manage development and production code.

### Branch Strategy

- **`main` branch**: Stable, production-ready code
- **`development` branch**: Active development branch where new features and programs are added

### Basic Git Commands

#### 1. **Checking Repository Status**

```bash
# View current branch and file changes
git status

# View detailed changes in files
git diff

# View all branches (local and remote)
git branch -a
```

#### 2. **Switching Between Branches**

```bash
# Switch to an existing branch
git checkout development

# Create and switch to a new branch
git checkout -b <new-branch-name>

# Switch back to previous branch
git checkout -
```

#### 3. **Making Changes and Committing**

```bash
# Stage a specific file
git add read/filename.c

# Stage multiple files
git add read/file1.c read/file2.c

# Stage all changes
git add .

# View staged changes
git status

# Commit with a message
git commit -m "Descriptive message about changes"

# Commit with detailed message (opens editor)
git commit
```

#### 4. **Pushing Changes to Remote**

```bash
# Push current branch to remote
git push origin <branch-name>

# Push to development branch specifically
git push origin development

# Push to main branch
git push origin main

# Set upstream branch for future pushes
git push -u origin <branch-name>
```

#### 5. **Pulling Latest Changes**

```bash
# Pull latest changes from current branch
git pull

# Pull from specific branch
git pull origin <branch-name>

# Fetch without merging
git fetch origin
```

#### 6. **Viewing Commit History**

```bash
# View recent commits (short format)
git log --oneline

# View commits with graph visualization
git log --oneline --graph --all

# View commits with limited entries
git log --oneline -10

# View commits for specific file
git log -- read/filename.c
```

### Typical Development Workflow

#### Step 1: Create a New Feature Branch
```bash
git checkout -b feature/add-new-program
```

#### Step 2: Make Changes
```bash
# Create new C programs
# Edit existing files
# Test your programs
```

#### Step 3: Stage and Commit Changes
```bash
git add read/new_program.c
git commit -m "Add new interview program - pattern matching"
```

#### Step 4: Push to Development Branch
```bash
git push origin feature/add-new-program
```

#### Step 5: Merge to Development (via Pull Request)
After testing, create a pull request and merge to `development` branch.

#### Step 6: Merge to Main When Ready
Once tested on development, merge to `main` for production release.

### Common Git Tasks

#### Undo Uncommitted Changes
```bash
# Discard changes in working directory
git checkout -- read/filename.c

# Discard all changes
git checkout -- .
```

#### Undo a Commit (before pushing)
```bash
# Soft reset - keeps changes staged
git reset --soft HEAD~1

# Hard reset - discards changes completely
git reset --hard HEAD~1
```

#### View Remote URL
```bash
git remote -v
```

#### Add Remote Repository
```bash
git remote add origin https://github.com/yourusername/c-practice.git
```

### Interview Programs Git History

The following interview programs were added via commits on the development branch:

| Program | File | Commit Purpose |
|---------|------|-----------------|
| Fibonacci | `read/fibonacci.c` | Generate Fibonacci sequence up to n terms |
| Prime Checker | `read/prime_checker.c` | Check if number is prime |
| Palindrome | `read/palindrome.c` | Verify if string is palindrome |
| Factorial | `read/factorial.c` | Calculate factorial recursively |
| Binary Search | `read/binary_search.c` | Search in sorted array |

### Best Practices for Commits

✅ **Do:**
- Make small, focused commits
- Write clear, descriptive commit messages
- Commit related changes together
- Test before committing
- Pull before pushing

❌ **Don't:**
- Commit without testing
- Write vague commit messages like "fixed stuff"
- Mix unrelated changes in one commit
- Force push to shared branches
- Commit executable files to main repository

## Development & Contribution

This is a personal learning repository. Feel free to:
- Modify existing programs for experimentation
- Add new practice exercises
- Test different C concepts and features

## License

Open for personal educational use.

## Contact

For questions or improvements, please refer to the project owner - Atul.

---

**Last Updated:** April 2026
