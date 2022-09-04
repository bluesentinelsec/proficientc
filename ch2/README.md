# Chapter 2 - Program Development

Provides guidance on development principles and discusses the local development environment.

You create your first header file: `std.h`

## Guiding Principles
- first get your code working, then refine it
- generalize your code so that others can use it
- document your code with comments, and provide manuals

## Development Cycle
- define the problem/objective
- design the solution
- select the language; author usually picks C
- plan for testing in conjunction with program development
    - what are the expected/unexpected inputs/outputs?
- iterate - don't be afraid to pull the plug, start over, and do it right

## Local Developement Environment
- author uses Microsoft C compiler
- places custom includes and libraries in:
    - `\include\local`
    - `\lib\local`
- prevents homemade headers/libs from clobbering standard versions