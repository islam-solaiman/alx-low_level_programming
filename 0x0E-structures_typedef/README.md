# Resources

### Read or watch:

[- struct (C programming language)] (https://en.wikipedia.org/wiki/Struct_(C_programming_language))<br>
[- Documentation: structures] (https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)<br>
[- typedef] (https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)<br>
[- Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189]<br>
[- The Lost Art of C Structure Packing (Advanced - not mandatory)] (http://www.catb.org/esr/structure-packing/)<br>

# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

What are structures, when, why and how to use them<br>
How to use typedef

# Requirements

### General

- Allowed editors: vi, vim, emacs<br>
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89<br>
- All your files should end with a new line<br>
- A README.md file, at the root of the folder of the project is mandatory<br>
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
- You are not allowed to use global variables<br>
- No more than 5 functions per file<br>
- The only C standard library functions allowed are printf, malloc, free and exit.<br>
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples<br>
- Don’t forget to push your header file<br>
- All your header files should be include guarded


## TASK 0

Define a new type struct dog with the following elements:

- name, type = char *
- age, type = float
- owner, type = char *

## TASK 1

Write a function that initialize a variable of type struct dog

## TASK 2

Write a function that prints a struct dog<br>

- Prototype: void print_dog(struct dog *d);
- Format: see example bellow
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing.

## TASK 3

Define a new type dog_t as a new name for the type struct dog.

## TASK 4

Write a function that creates a new dog.<br>

- Prototype: dog/_t *new/_dog(char *name, float age, char *owner);<br>
- You have to store a copy of name and owner<br>
- Return NULL if the function fails<br>

## TASK 5

Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);


