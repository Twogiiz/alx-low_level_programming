0x0E. C - Structures, typedef
Description
This project covers structures and typedefs in C programming. Key topics include:

Defining and using structs
Initializing struct variables
Printing structs
Typedefs to define new type names
Dynamically allocating memory for structs
Freeing memory used by structs
Files
File	Description
dog.h	Header file with struct dog and type dog_t definition
0-main.c	Test file
1-init_dog.c	Function to initialize struct dog
2-print_dog.c	Function to print struct dog
4-new_dog.c	Function to create new dog_t
5-free_dog.c	Function to free allocated memory for a dog_t
Usage
The files can be compiled with:

gcc filename.c -o exec
Example with 1-init_dog.c:

gcc 1-init_dog.c 1-main.c -o init_dog
./init_dog
Learning Objectives
After completing this project, students should be able to:

Explain what structures are and how to use them
Use typedefs to define new type names
Initialize and print struct variables
Allocate memory dynamically for structs
Free previously allocated memory
Author
Julien Barbier