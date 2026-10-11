# Project Title

## One-line Tagline

A simple C project demonstrating a basic loop and function export.

## Architecture Overview

The repository consists of two files:
- `README.md`: This file.
- `main.c`: The main source file containing the implementation of a test function that increments a variable within a loop.

### File Interaction

`main.c` defines a function `run_test` which is exported using the `__declspec(dllexport)` directive. This function contains a simple loop that increments the variable `x` from 0 to 10,000 and returns the final value of `x`.

## Tech Stack

- **Programming Language**: C
- **Export Mechanism**: Windows-specific `__declspec(dllexport)` for exporting functions.

## Getting Started / Setup Guide

### Prerequisites

- A C compiler (e.g., GCC, Clang).
- A development environment that supports C programming (e.g., Visual Studio, Code::Blocks).

### Steps to Build and Run

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/yourusername/c.git
   cd c
   ```

2. **Compile the Source File**:
   - Using GCC:
     ```bash
     gcc -shared -o libtest.so main.c
     ```
   - Using Clang (on Windows):
     ```bash
     clang -shared -o test.dll main.c
     ```

3. **Run the Compiled Library**:
   - The compiled library (`libtest.so` on Linux or `test.dll` on Windows) can be used in other projects that require this exported function.

### Notes

- Ensure that your development environment is configured to handle C code and dynamic libraries.
- The export mechanism (`__declspec(dllexport)`) is specific to Windows. For cross-platform compatibility, consider using a more portable method for exporting functions.