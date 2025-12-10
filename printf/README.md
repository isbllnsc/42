This project has been created as part of the 42 curriculum by <isabde-s>.

# ft_printf

## Description

ft_printf is a custom implementation of the C standard function printf.
The goal is to reproduce its behavior for a limited set of conversions while working with variadic arguments and formatted output.
This project reinforces understanding of low-level string handling, modular code design, and the use of stdarg.h.

## Instructions

### Compilation

Build the library with:
make

This will generate:
libftprintf.a

### Usage

To use ft_printf in your own program:
cc -Wall -Wextra -Werror main.c libftprintf.a

If also using libft:
cc -Wall -Wextra -Werror main.c libftprintf.a libft/libft.a

Run with:
./a.out

---

## Resources

* man printf
* man stdarg
* C standard library documentation
* Educational articles on formatted output and variadic functions

---
