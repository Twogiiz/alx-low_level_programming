## C - malloc, free

#### TASKS

**[0] Create Array**

- Write a function that creates an array of characters and initializes it with a specified character.

- Prototype: `char *create_array(unsigned int size, char c);`

- Returns `NULL` if `size = 0`

- Returns a pointer to the array, or `NULL` if the allocation fails

**[1] String Duplication**

- Write a function that copies an existing string to a newly allocated memory location and returns a pointer to the newly allocated string.

- Prototype: `char *_strdup(char *str);`

- The `_strdup()` function returns a pointer to a new string that is a duplicate of the input string `str`. The memory for the new string is obtained using `malloc()` and can be freed using `free()`.

- Returns `NULL` if `str = NULL`

- On success, the `_strdup()` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

**[2] String Concatenation**

- Write a function that concatenates two strings.

- Prototype: `char str_concat(char s1, char s2);`

- The returned pointer should point to a newly allocated memory location that contains the contents of `s1`, followed by the contents of `s2`, and terminated with a null terminator (`\0`).

- If `NULL` is passed for either string, treat it as an empty string.

- The function should return `NULL` on failure.

**[3] Allocate Grid**

- Write a function that allocates a two-dimensional array of integers.

- Prototype: `int **alloc_grid(int width, int height);`

- Each element of the grid should be initialized to 0.

- The function should return `NULL` on failure. 

- If `width` or `height` is 0 or negative, return `NULL`.

**[4] Free Grid**

- Write a function that frees a two-dimensional grid previously created using the `alloc_grid()` function.

- Prototype: `void free_grid(int **grid, int height);`

- The function should free all memory associated with the grid.

**[5] Arguments to String**

- Write a function that concatenates all the arguments of the program into a single string.

- Prototype: `char *argstostr(int ac, char **av);`

- Returns `NULL` if `ac == 0` or `av == NULL`.

- Returns a pointer to a new string, or `NULL` if the allocation fails.

- Each argument should be followed by a newline character (`\n`) in the new string.

**[6] String to Words**

- Write a function that splits a string into words.

- Prototype: `char **strtow(char *str);`

- The function returns a pointer to an array of strings (words).

- Each element of this array should contain a single word, terminated with a null terminator (`\0`).

- The last element of the returned array should be `NULL`.

- Words are separated by spaces.

- Returns `NULL` if `str == NULL` or `str == ""`.

- If the function fails, it should return `NULL`.