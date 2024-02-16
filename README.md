# Monty Project

## Table of Contents
- [Description](#description)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
  - [Supported Opcodes](#supported-opcodes)
- [File Structure](#file-structure)

## Description

The Monty project is a simple programming language interpreter that supports stack and queue operations. It reads and executes Monty bytecode files containing a set of instructions.

## Getting Started

### Prerequisites

- A C compiler (e.g., GCC)
- Unix-like operating system (Linux, macOS)

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/amandamadlingozi/monty.git

## Usage
To run the Monty interpreter, use the following command:

	```bash
	./monty bytecode_file.m
	
Replace your_bytecode_file.m with the path to your Monty bytecode file.

## Supported Opcodes
push <int>: Pushes an element onto the stack.
pall: Prints all values on the stack, starting from the top.
pint: Prints the value at the top of the stack.
pop: Removes the top element of the stack.
swap: Swaps the top two elements of the stack.
add: Adds the top two elements of the stack.
nop: Does nothing.
sub: Subtracts the top element of the stack from the second top element.
div: Divides the second top element of the stack by the top element.
mul: Multiplies the top two elements of the stack.
mod: Computes the remainder of the division of the second top element by the top element.
pchar: Prints the ASCII character of the top element of the stack.
pstr: Prints the string starting from the top element of the stack.
rotl: Rotates the stack to the top.
rotr: Rotates the stack to the bottom.

## File Structure
monty.h: Header file containing declarations and structures.
monty.c: Main file with the Monty interpreter implementation.
opcode_functions.c: File containing functions for various opcodes.
stack_functions.c: File containing functions for stack operations.
queue_functions.c: File containing functions for queue operations.
helper_functions.c: File containing helper functions.
examples/: Directory containing example Monty bytecode files.