<h1 align="center">
  🖨️ ft_printf
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/benzThor/ft_printf?color=red" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/benzThor/ft_printf?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/benzThor/ft_printf?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/benzThor/ft_printf?color=green" />
</p>

<h3 align="center">
	<a href="#-project-overview">📝 Project Overview</a>
	<span> · </span>
	<a href="#-objectives">🎯 Objectives</a>
  <span> · </span>
	<a href="#️-installation">🛠️ Installation</a>
	<span> · </span>
	<a href="#-usage">💻 Usage</a>
</h3>

## 📝 Project Overview

`ft_printf` is a custom implementation of the printf function in C. 
This project aims to provide a simplified version of the standard printf function, supporting a subset of format specifiers and functionalities. 
It is an excellent way to understand and practice variable argument lists, format specifiers, and custom output functions.

## 🎯 Objectives

### Custom implementation:

A reimplementation of the standard printf function.

### Format specifiers:

Learn about format specifiers including %d, %s, %c, %x, %X.

### Variable Argument Handling: 

Utilize variadic functions to handle multiple argument types.

## 🛠️ Installation

1. Clone the Repository:
    ```bash
    git clone https://github.com/BenzThor/ft_printf.git
    ```
  
2. The ft_printf library does not need to be compiled or installed separately. To use ft_printf in your project:
   - Copy ft_printf.c and ft_printf.h to your project directory.
   - Include the ft_printf.h header file in your source files where needed.
   
   Example project structure:
    ```bash
    your_project/
    ├── ft_printf/
    │   ├── ft_printf.c      # The source file for the custom printf implementation
    │   ├── ft_putchar.c     # Source file for printing characters
    │   ├── ft_puthex.c      # Source file for printing hexadecimal values
    │   ├── ft_putnbr.c      # Source file for printing integers
    │   ├── ft_putptr.c      # Source file for printing pointers
    │   ├── ft_putstr.c      # Source file for printing strings
    │   ├── ft_putuns.c      # Source file for printing unsigned integers
    │   └── ft_printf.h      # Header file for the custom printf implementation
    ├── main.c               # The main file of your project
    └── Makefile             # The Makefile for building the project
    ```
4. In your source files:

    ```c
    #include "ft_printf/ft_printf.h"
    ```

## 🚀 Usage

1. **Include the Header File:**

   In your C source files where you want to use `ft_printf`, include the header file from the `ft_printf/` directory. For example, in `main.c`, you should add:
   
   ```c
   #include "ft_printf/ft_printf.h"
   ```

2. **Compile Your Project:**

   You need to compile ft_printf.c along with your other source files. Either add the files to your makefile or add them manually. Here’s how you can compile your project using gcc:
   
   ```bash
   gcc -o my_program main.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_puthex.c ft_printf/ft_putnbr.c ft_printf/ft_putptr.c ft_printf/ft_putstr.c ft_printf/ft_putuns.c
   ```
   
   This command compiles main.c and all the source files in the src/ directory, then links them into an executable named my_program.

3. **Example Usage:**

   main.c
      
    ```c
    #include "ft_printf/ft_printf.h"

    int main() {
    int number = 42;
    char *string = "Hello, world!";
    
    ft_printf("Integer: %d\n", number);
    ft_printf("String: %s\n", string);
    ft_printf("Character: %c\n", 'A');
    ft_printf("Hexadecimal: %x\n", number);
    
    return 0;
    }
   ```

   Compile and run this example with:
   
   ```bash
   gcc -o my_program main.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_puthex.c ft_printf/ft_putnbr.c ft_printf/ft_putptr.c ft_printf/ft_putstr.c ft_printf/ft_putuns.c
   ./my_program
   ```

   

5. **Function Prototype:**
   The primary function provided by ft_printf is:
   
   ```c
   int ft_printf(const char *format, ...);
   ```
   
   **Parameters:**
   
   - format: A format string containing text and format specifiers.
   - ...: Variable arguments corresponding to format specifiers.
  
   **Returns:**
   - The number of characters printed (excluding the null byte used to end output to strings).
