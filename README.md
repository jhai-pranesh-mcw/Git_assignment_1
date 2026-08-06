# Github_assiginment_1

## Overview

This repository contains a simple C++ calculator program implemented in `main.cpp`.
The program reads two numbers from standard input and performs basic arithmetic operations:
- Addition
- Subtraction
- Division
- Remainder

## Features

- Uses a `Calculator` class with methods for each operation so that it is easier to debug
- Handles division even by zero
- Calculates remainder by converting values to integers since float type value cannot be used as an operand in '%' 

## Notes
> The program uses `float` for arithmetic operations. Remainder is calculated by casting values to `int` before using the `%` operator. Division by zero is detected and handled with a message.

## Files

- `main.cpp` - calculator implementation and program entry point
- `notes.txt` - additional text content in the repository
