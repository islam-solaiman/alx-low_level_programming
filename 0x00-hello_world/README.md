#!/bin/bash

# 0x00. C - Hello, World

# Resources

### Read or watch:

- Dennis Ritchie (https://en.wikipedia.org/wiki/Dennis\_Ritchie)
- “C” Programming Language: Brian Kernighan (https://www.youtube.com/watch?v=de2Hsvxaf8M)
- Why C Programming Is Awesome (https://www.youtube.com/watch?v=smGalmxPVYc)
- Learning to program in C part 1 (https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- Learning to program in C part 2 (https://www.youtube.com/watch?v=FwpP\_MsZWnU)
- Understanding C program Compilation Process (https://www.youtube.com/watch?v=VDslRumKvRA)
- Betty Coding Style (https://github.com/holbertonschool/Betty/wiki)
- Hash-bang under the hood - (https://twitter.com/unix\_byte/status/1024147947393495040?s=21)
- Linus Torvalds on C vs. C++ (http://harmful.cat-v.org/software/c++/linus)

## man or help:

- gcc
- printf (3)
- puts
- putchar

# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General

- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type gcc main.c
- What is an entry point
- What is main
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

# Requirements

# C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file at the root of the repo, containing a description of the repository
- A README.md file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use system
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

# Shell Scripts

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your scripts should be exactly two lines long ($ wc -l file should print 2)
- All your files should end with a new line
- The first line of all your files should be exactly #!/bin/bash

# More Info

## Betty linter

To run the Betty linter just with command betty <filename>:

- Go to the Betty repository
- Clone the repo to your local machine
- cd into the Betty directory
- Install the linter with sudo ./install.sh
- emacs or vi a new file called betty, and copy the script below:

#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN\_PATH="/usr/local/bin"
BETTY\_STYLE="betty-style"
BETTY\_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

        - Once saved, exit file and change permissions to apply to all users with chmod a+x betty
        -  Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!

# TASK 0

Write a script that runs a C file through the preprocessor and save the result into another file.

- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

# TASK 1

Write a script that compiles a C file but does not link.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
        - Example: if the C file is main.c, the output file should be main.o

# TASK 2

Write a script that generates the assembly code of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
        - Example: if the C file is main.c, the output file should be main.s

# TASK 3

Write a script that compiles a C file and creates an executable named cisfun.

- The C file name will be saved in the variable $CFILE

# TASK 4

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0

# TASK 5

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

# TASK 6

Write a C program that prints the size of various types on the computer it is compiled and run on.

- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

# TASK 7

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

# TASK 8

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option
