# Resources

## Read or watch:

[- Function Pointer in C] (https://www.geeksforgeeks.org/function-pointer-in-c/)<br>
[- Pointers to functions] (https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)<br>
[- Function Pointers in C / C++] (https://www.youtube.com/watch?v=ynYtgGUNelE)<br>
[- why pointers to functions?] (https://www.youtube.com/watch?v=sxTFSDAZM8s)<br>
[-Everything you need to know about pointers in C] (https://boredzo.org/pointers/)<br>

# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

# Requirements

## General

- Allowed editors: vi, vim, emacs<br>
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89<br>
- All your files should end with a new line<br>
- A README.md file, at the root of the folder of the project is mandatory<br>
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
- You are not allowed to use global variables<br>
No more than 5 functions per file<br>
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden<br>
- You are allowed to use _putchar<br>
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account<br>
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples<br>
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called function_pointers.h<br>
- Don’t forget to push your header file<br>
- All your header files should be include guarded

## Task 0

Write a function that prints a name. <br>

Prototype: void print/_name(char *name, void (*f)(char *)); 

## TASK 1

Write a function that executes a function given as a parameter on each element of an array.

- Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
- where size is the size of the array
- and action is a pointer to the function you need to use

## TASK 2

Write a function that searches for an integer.

- Prototype: int int/_index(int *array, int size, int (*cmp)(int));
- where size is the number of elements in the array array
- cmp is a pointer to the function to be used to compare values
- int_index returns the index of the first element for which the cmp function does not return 0
- If no element matches, return -1
- If size <= 0, return -1

## TASK 3

Write a program that performs simple operations.

- You are allowed to use the standard library
- Usage: calc num1 operator num2
- You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
- operator is one of the following:
	- +: addition
	- -: subtraction
	- *: multiplication
	- /: division
	- %: modulo
- The program prints the result of the operation, followed by a new line
- You can assume that the result of all operations can be stored in an int
- if the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
- if the operator is none of the above, print Error, followed by a new line, and exit with the status 99
- if the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100
- This task requires that you create four different files.
