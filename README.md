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
- Basic understanding of command-line operations
- (Optional) Math library support (`-lm` flag)

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
