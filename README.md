# c_41_create_file

## DESCRIPTION

This program creates a file and saves user's name and address in it.

### Types of Files in C

A file can be classified into two types based on the way the file stores the data. They are as follows:

- Text Files
- Binary Files

#### 1. Text files

A text file contains data in the form of ASCII characters and is generally used to store a stream of characters.

- Each line in a text file ends with a new line character (‘\n’).
- It can be read or written by any text editor.
- They are generally stored with .txt file extension.
- Text files can also be used to store the source code.

#### 2. Binary files

A binary file contains data in binary form (i.e. 0’s and 1’s) instead of ASCII characters. They contain data that is stored in a similar manner to how it is stored in the main memory.

- The binary files can be created only from within a program and their contents can only be read by a program.
- More secure as they are not easily readable.
- They are generally stored with .bin file extension.

### C File Operations

C file operations refer to the different possible operations that we can perform on a file in C such as:

1. Creating a new file – **fopen() with attributes as “a” or “a+” or “w” or “w+”**
2. Opening an existing file – **fopen()**
3. Reading from file – **fscanf() or fgets()**
4. Writing to a file – **fprintf() or fputs()**
5. Moving to a specific location in a file – **fseek(), rewind()**
6. Closing a file – **fclose()**

The **highlighted** text mentions the C function used to perform the file operations.

### File Pointer in C

A file pointer is a reference to a particular position in the opened file. It is used in file handling to perform all file operations such as read, write, close, etc. We use the **FILE** macro to declare the file pointer variable. The **FILE** macro is defined inside **<stdio.h>** header file.

#### Syntax of File Pointer

```c
FILE* pointer_name;
```

File Pointer is used in almost all the file operations in C.

### Open a File in C

For opening a file in C, the **fopen()** function is used with the filename or file path along with the required access modes.

#### Syntax of fopen()

```c
FILE* fopen(const char *file_name, const char *access_mode);
```

#### Parameters

- file_name: name of the file when present in the same directory as the source file. Otherwise, full path.
- access_mode: Specifies for what operation the file is being opened.

#### Return Value

- If the file is opened successfully, returns a file pointer to it.
- If the file is not opened, then returns NULL.

#### File opening modes in C

File opening modes or access modes specify the allowed operations on the file to be opened. They are passed as an argument to the fopen() function. Some of the commonly used file access modes are listed below:

| Opening Modes | Description |
|---------------|-------------|
| r | Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the first character in it. If the file cannot be opened fopen( ) returns NULL. |
| rb | Open for reading in binary mode. If the file does not exist, fopen( ) returns NULL. |
| w | Open for reading in text mode. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. |
| wb | Open for writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created. |
| a | Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. |
| ab | Open for append in binary mode. Data is added to the end of the file. If the file does not exist, it will be created. |
| r+ | Searches file. It is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the first character in it. Returns NULL, if unable to open the file. |
| rb+ | Open for both reading and writing in binary mode. If the file does not exist, fopen( ) returns NULL. |
| w+ | Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL, if unable to open the file. |
| wb+ | Open for both reading and writing in binary mode. If the file exists, its contents are overwritten. If the file does not exist, it will be created. |
| a+ | Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. |
| ab+ | Open for both reading and appending in binary mode. If the file does not exist, it will be created. |

As given above, if you want to perform operations on a binary file, then you have to append ‘b’ at the last. For example, instead of “w”, you have to use “wb”, instead of “a+” you have to use “a+b”.

### SPECIFICATION

- The program should accept a single command-line argument. If the program was not run with a single command-line argument, you should print an error message as demonstrated above and `return 1`, ending the program.
- If the command-line argument is not a number print an error message, and `return 1`.
- Convert the command-line argument `string` to `integer` number.
- Print out the range within the player can guess.
- The player can have five guesses within he must find the number, otherwise he loses.
- Help the player if the number he guessed is higher or lower than the generated number.
- Check if the player inputs correct type of number, if his input contains other types than a number, ask for a new guess.
- When the player wins print "You win!" with green background, if looses print "Game Over!" with red background.

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
