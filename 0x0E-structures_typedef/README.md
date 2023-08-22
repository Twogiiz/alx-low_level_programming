C - Structures, Typedef
This project covers C structures and typedefs.

Resources
0x0d. Structures.pdf
struct (C programming language)
Documentation: structures
0x0d. Typedef and structures.pdf
typedef
Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
The Lost Art of C Structure Packing (Advanced - not mandatory)
Learning Objectives
At the end of this project, students are expected to be able to explain:

What are structures, when, why and how to use them
How to use typedef
Requirements
Allowed editors: vi, vim, emacs
OS: Ubuntu 20.04 LTS
Compiler: gcc
Compiler flags: -Wall -Werror -Wextra -pedantic -std=gnu89
All files end with a new line
Code uses the Betty style
No global variables allowed
No more than 5 functions per file
Only allowed C std lib functions: printf, malloc, free, exit
Header files should be include guarded

Tasks
0. Poppy
dog.h: Defines a struct dog with members name, age, and owner. This allows creating and storing a dog's details.
1. A dog is the only thing on earth that loves you more than you love yourself
init_dog: Initializes a struct dog by setting the name, age, and owner members. This allows creating a dog and storing its initial details.
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
print_dog: Prints out each member of a struct dog. Displays "(nil)" for NULL dog or members. Allows printing dog details.
3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
dog.h: Defines a new dog_t type, which is a typedef for struct dog. Makes the code more readable.
4. A door is what a dog is perpetually on the wrong side of
new_dog: Dynamically allocates memory for a new dog_t and initializes it with the given values. Returns pointer to new dog or NULL on failure.
5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
free_dog: Frees the memory allocated for a dog_t. Important to avoid memory leaks when creating dogs dynamically.

Authors
Goodwill Monyai - Twogiiz
Acknowledgments
Project provided by ALX Africa Software Engineering program.
