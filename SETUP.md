# C Compiler Setup Guide

This guide will help you set up a C development environment on Windows, Linux/WSL, and macOS.

## Table of Contents
- [Windows Setup](#windows-setup)
  - [Option 1: Visual Studio (Most Foolproof)](#option-1-visual-studio-most-foolproof)
  - [Option 2: MinGW-w64 (Lightweight)](#option-2-mingw-w64-lightweight)
  - [Option 3: WSL (Linux Experience)](#option-3-wsl-linux-experience)
  - [Option 4: MSYS2 (Unix-like Environment)](#option-4-msys2-unix-like-environment)
- [Linux Setup](#linux-setup)
- [macOS Setup](#macos-setup)
- [Verifying Installation](#verifying-installation)
- [Troubleshooting](#troubleshooting)

---

## Windows Setup

**Note about PowerShell vs Command Prompt:**
- You can use either **PowerShell** or **Command Prompt** (CMD) to compile C programs
- Both work exactly the same way once a C compiler is installed
- PowerShell is recommended: better tab completion, colored output, and modern features
- All terminal commands in this guide work in both PowerShell and CMD

**Which Option Should I Choose?**
- **Visual Studio**: Best for beginners, most reliable, includes IDE (large download ~7GB)
- **MinGW-w64**: Lightweight (~500MB), command-line only, works with any text editor
- **WSL**: Get a full Linux environment, best for cross-platform development
- **MSYS2**: Unix-like tools on Windows, good for advanced users

---

### Option 1: Visual Studio (Most Foolproof)

Visual Studio provides Microsoft's C/C++ compiler (MSVC) with excellent Windows integration. This is the most reliable option and includes a full IDE.

#### Option 1A: Visual Studio Community (Full IDE)

**Pros:** Complete development environment, debugger, IntelliSense, GUI
**Cons:** Large download (~7GB), heavyweight

#### Step 1: Download Visual Studio

1. Visit [https://visualstudio.microsoft.com/downloads/](https://visualstudio.microsoft.com/downloads/)
2. Download **Visual Studio Community** (free)
3. Run the installer

#### Step 2: Select Workload

1. In the Visual Studio Installer, select **"Desktop development with C++"**
2. This includes:
   - MSVC C/C++ compiler
   - Windows SDK
   - CMake and other build tools
3. Click "Install" (this will take 15-30 minutes)

#### Step 3: Set Up Command Line Access

After installation, you can compile from command line:

1. Search for "**Developer Command Prompt for VS**" in Start Menu
2. Or search for "**Developer PowerShell for VS**" (recommended)

This special terminal has the compiler pre-configured in PATH.

#### Step 4: Verify Installation

In Developer PowerShell/Command Prompt:
```cmd
cl
nmake /?
```

#### Step 5: Using with This Tutorial

**Important:** Visual Studio uses `cl` (not `gcc`) and `nmake` (not `make`).

To use this tutorial with Visual Studio, you have two options:

**Option A: Modify each Makefile** - Change the first lines:
```makefile
CC = cl
CFLAGS = /W4 /std:c11
```

**Option B: Install Make for Visual Studio:**
```powershell
# In Developer PowerShell
choco install make
```
(Requires [Chocolatey](https://chocolatey.org/install))

**Option C: Use GCC alongside Visual Studio** - Install MinGW-w64 (Option 2) for `gcc` and `make` compatibility.

---

#### Option 1B: Visual Studio Build Tools (Command-Line Only)

**Pros:** Smaller download (~2-3GB), just the compiler without IDE
**Cons:** No GUI, command-line only

#### Step 1: Download Build Tools

1. Visit [https://visualstudio.microsoft.com/downloads/](https://visualstudio.microsoft.com/downloads/)
2. Scroll down to "**All Downloads**"
3. Expand "**Tools for Visual Studio**"
4. Download "**Build Tools for Visual Studio 2022**"

#### Step 2: Install C++ Build Tools

1. Run the installer
2. Select "**Desktop development with C++**"
3. Click "Install"

#### Step 3: Use Developer Command Prompt

Same as Option 1A, Step 3 - use "Developer Command Prompt" or "Developer PowerShell"

---

### Option 2: MinGW-w64 (Lightweight)

MinGW-w64 provides GCC for Windows with minimal dependencies.

#### Step 1: Download MinGW-w64

1. Visit [https://www.mingw-w64.org/downloads/](https://www.mingw-w64.org/downloads/)
2. Download one of these distributions:
   - **WinLibs** (Recommended): [https://winlibs.com/](https://winlibs.com/)
     - Download the latest UCRT runtime version (Win64 without LLVM/Clang)
   - **MSYS2** (Alternative): See Option 3 below

#### Step 2: Install MinGW-w64 (WinLibs)

1. Extract the downloaded archive (e.g., `mingw64.zip`) to `C:\`
   - Final path should be: `C:\mingw64\`
2. The `bin` folder should be at: `C:\mingw64\bin\`

#### Step 3: Add to PATH

1. Open **System Properties**:
   - Press `Win + X` and select "System"
   - Click "Advanced system settings"
   - Click "Environment Variables"

2. Under "System variables", find and select **Path**, then click "Edit"

3. Click "New" and add: `C:\mingw64\bin`

4. Click "OK" on all dialogs

#### Step 4: Install Make (Optional but Recommended)

1. Download Make for Windows:
   - Visit [https://gnuwin32.sourceforge.net/packages/make.htm](https://gnuwin32.sourceforge.net/packages/make.htm)
   - Download the "Complete package, except sources"

2. Install to `C:\Program Files (x86)\GnuWin32`

3. Add to PATH: `C:\Program Files (x86)\GnuWin32\bin`

#### Step 5: Verify Installation

Open Command Prompt or PowerShell and run:
```bash
gcc --version
make --version
```

---

### Option 3: WSL (Linux Experience)

WSL provides a full Linux environment on Windows.

#### Step 1: Enable WSL

1. Open PowerShell as Administrator and run:
   ```powershell
   wsl --install
   ```

2. Restart your computer when prompted

3. After restart, Ubuntu will automatically install

#### Step 2: Set up Ubuntu

1. Launch Ubuntu from Start Menu
2. Create a username and password when prompted
3. Update the package list:
   ```bash
   sudo apt update
   sudo apt upgrade
   ```

#### Step 3: Install Build Tools

```bash
sudo apt install build-essential
```

This installs:
- GCC compiler
- Make utility
- Other essential development tools

#### Step 4: Verify Installation

```bash
gcc --version
make --version
```

#### Step 5: Access Your Files

- Windows files are accessible at: `/mnt/c/`
- Example: `cd /mnt/c/Users/YourName/Documents`

---

### Option 4: MSYS2 (Unix-like Environment)

MSYS2 provides a Unix-like environment with package management.

#### Step 1: Download and Install

1. Visit [https://www.msys2.org/](https://www.msys2.org/)
2. Download the installer (e.g., `msys2-x86_64-<date>.exe`)
3. Run the installer (default location: `C:\msys64`)
4. Complete the installation

#### Step 2: Update MSYS2

1. Launch "MSYS2 MSYS" from Start Menu
2. Run:
   ```bash
   pacman -Syu
   ```
3. Close the terminal when prompted and reopen "MSYS2 MSYS"
4. Run again:
   ```bash
   pacman -Syu
   ```

#### Step 3: Install Toolchain

```bash
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-make
```

#### Step 4: Add to PATH

Add `C:\msys64\mingw64\bin` to your Windows PATH (see Option 1, Step 3)

#### Step 5: Verify Installation

Open Command Prompt and run:
```bash
gcc --version
mingw32-make --version
```

Note: In MSYS2, use `mingw32-make` instead of `make` in Windows Command Prompt.

---

## Linux Setup

Most Linux distributions come with GCC pre-installed or easily available.

### Ubuntu/Debian

```bash
sudo apt update
sudo apt install build-essential
```

### Fedora/RHEL/CentOS

```bash
sudo dnf groupinstall "Development Tools"
# or on older versions:
sudo yum groupinstall "Development Tools"
```

### Arch Linux

```bash
sudo pacman -S base-devel
```

### Verify Installation

```bash
gcc --version
make --version
```

---

## macOS Setup

### Option 1: Xcode Command Line Tools (Recommended)

#### Step 1: Install Command Line Tools

1. Open Terminal (Applications → Utilities → Terminal)
2. Run:
   ```bash
   xcode-select --install
   ```
3. Click "Install" in the popup dialog
4. Accept the license agreement
5. Wait for installation to complete (may take several minutes)

#### Step 2: Verify Installation

```bash
gcc --version
make --version
```

Note: On macOS, `gcc` is actually a wrapper for `clang`, which is compatible with GCC for most purposes.

### Option 2: Homebrew with GCC

If you need actual GCC (not clang):

#### Step 1: Install Homebrew

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

#### Step 2: Install GCC

```bash
brew install gcc
```

#### Step 3: Use GCC

The actual GCC will be installed as `gcc-<version>`, for example:
```bash
gcc-13 --version
```

To use it in Makefiles, modify the CC variable:
```makefile
CC = gcc-13
```

---

## Verifying Installation

After installation, verify everything works:

### 1. Check GCC Version

```bash
gcc --version
```

Expected output (version may vary):
```
gcc (GCC) 11.2.0
Copyright (C) 2021 Free Software Foundation, Inc.
...
```

### 2. Check Make Version

```bash
make --version
```

Expected output:
```
GNU Make 4.3
Built for x86_64-pc-linux-gnu
...
```

### 3. Test Compilation

Create a test file `test.c`:
```c
#include <stdio.h>

int main() {
    printf("Hello, C World!\n");
    return 0;
}
```

Compile and run:
```bash
gcc test.c -o test
./test    # On Windows: test.exe
```

Expected output:
```
Hello, C World!
```

### 4. Test This Tutorial

```bash
# Clone the repository
git clone https://github.com/xuqimen/c_tutorial.git
cd c_tutorial

# Try the first example
cd 01_hello_world
make
./hello    # On Windows: hello.exe
```

---

## Troubleshooting

### Windows Issues

#### "gcc is not recognized as an internal or external command"

**Solution:**
1. Verify GCC is installed in `C:\mingw64\bin\`
2. Check that `C:\mingw64\bin` is in your PATH
3. Restart Command Prompt/PowerShell after changing PATH
4. Try opening a new terminal window

#### "make is not recognized"

**Solutions:**
- **With MSYS2:** Use `mingw32-make` instead of `make`
- **With MinGW-w64:** Install Make separately (see Option 1, Step 4)
- **Alternative:** Use WSL (Option 2)

#### Permission Denied

**Solution:**
- On Windows, make sure you're not running the executable while it's open in another program
- Try running Command Prompt as Administrator

### Linux/WSL Issues

#### "Permission denied" when running compiled program

**Solution:**
```bash
chmod +x program_name
./program_name
```

#### "gcc: command not found"

**Solution:**
```bash
sudo apt install build-essential
```

### macOS Issues

#### "xcrun: error: invalid active developer path"

**Solution:**
```bash
xcode-select --install
```

#### "clang: command not found"

**Solution:**
Install Xcode Command Line Tools (see macOS Setup above)

### General Issues

#### "undefined reference" errors

**Cause:** Missing library or incorrect linking order

**Solution:**
- Check that all source files are included in Makefile
- Verify function prototypes match definitions

#### "No such file or directory" when compiling

**Solution:**
- Verify you're in the correct directory: `pwd` (Linux/macOS) or `cd` (Windows)
- Check that the .c file exists: `ls` (Linux/macOS) or `dir` (Windows)

#### Makefile errors on Windows

**Solution:**
- If using MSYS2 in Command Prompt, use `mingw32-make` instead of `make`
- Alternatively, run from MSYS2 terminal where `make` works directly

---

## Additional Resources

### Online C Compilers (No Installation Required)

If you're having trouble installing, you can use online compilers:
- [Replit](https://replit.com/languages/c)
- [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
- [Programiz C Compiler](https://www.programiz.com/c-programming/online-compiler/)

### Learning Resources

- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [GNU Make Manual](https://www.gnu.org/software/make/manual/)
- [C Reference](https://en.cppreference.com/w/c)

### Getting Help

If you encounter issues not covered here:
1. Check the error message carefully
2. Search for the error online
3. Ask on [Stack Overflow](https://stackoverflow.com/questions/tagged/c)
4. Open an issue on this tutorial's GitHub repository

---

## Quick Reference

### Compilation Commands

```bash
# Compile single file
gcc program.c -o program

# Compile with warnings
gcc -Wall -Wextra program.c -o program

# Compile multiple files
gcc file1.c file2.c -o program

# Compile to object file only
gcc -c program.c -o program.o

# Link object files
gcc program.o helper.o -o program
```

### Using Makefiles

```bash
# Build the program
make

# Build and run
make run

# Clean compiled files
make clean

# Rebuild everything
make clean && make
```
