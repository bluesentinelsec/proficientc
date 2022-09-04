# Chapter 1 - The C Compiler System

No source code in this chapter; just general remarks about C, standards, and development tools.

## Microsoft C Compiler

- Microsoft C, Version 4.00
- three-pass optimizing compiler
- invoked via CL.EXE
- uses DOS environment variables to locate libraries and include folders
- most of the code in this book is portable; however, some code is not portable:
    - code that requires special keys on the PC keyboard
    - code that makes direct access to BIOS and PC hardware

## Other Tools

- LINK.EXE - object code linker
- LIB.EXE - used to create static libraries
- make - project/build automation tool
- CodeView - source-level symbolic debugger - extends DOS DEBUG program
- MASM - Macro assembler

## Memory Models
- Lists different memory models on page 7
- we care about medium:

|model|code|data|arrays|
|---|---|---|---|
|medium|1MB|64KB|64KB|
