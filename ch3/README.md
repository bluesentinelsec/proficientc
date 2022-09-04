# Chapter 3 - The DOS-to-C Connection

This chapter examines I/O redirection, command-line processing, and access to the DOS environment.

## Input/Output Redirection and Piping
- Program I/O is based on streams:
    - standard input (stdin) -> connected to keyboard
    - standard output (stdout) -> connected to screen
    - standard error (stderr) -> ALWAYS connected to screen
- stdin and stdout can be redirected to other devices

## CLI Arguments

- arguments are passed to C programs via `int argc` and `char *argv[]`
- `argv[0]` contains the running program's name

## Pointers and indirection
- given a pointer: `char *cp`
- read as "cp is a pointer to a character storage location"

## DOS Environment Variables
- environment variables provide another way to put data in a program
- define environment variables with `set var_name = value`
- get variables from CLI with `echo %var_name%`
- get access to environment variables in C code via:
```
main(int argc, char *argv[], char *envp[])
```
