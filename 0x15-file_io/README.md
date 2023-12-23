**# 0x15. C - File I/O**

**This project delves into the world of file input/output (I/O) in C, exploring how to create, open, close, read, and write files effectively.**

**Key Concepts:**

* File descriptors
* Standard file descriptors (STDIN, STDOUT, STDERR)
* I/O system calls (`open`, `close`, `read`, `write`, `dprintf`)
* File permissions (`rw-------`)
* System calls vs. functions

**Learning Objectives:**

* Proficiently create, open, close, read, and write files in C.
* Understand file descriptors and their purposes.
* Apply I/O system calls appropriately.
* Set file permissions correctly.
* Differentiate between system calls and functions.

**Tasks:**

1. **read_textfile:** Read a text file and print its contents to POSIX standard output.
2. **create_file:** Create a new file with specified content and permissions.
3. **append_text_to_file:** Append text to the end of an existing file.
4. **cp:** Implement a file copying program similar to the Unix `cp` command.

**Requirements:**

* Allowed editors: `vi`, `vim`, `emacs`
* Compiler: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Coding style: Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
* Restrictions: No global variables, no more than 5 functions per file, limited standard library functions (`malloc`, `free`, `exit` only)

**Additional Resources:**

* File descriptors: [https://www.go4expert.com/articles/understanding-file-descriptor-file-t28936/](https://www.go4expert.com/articles/understanding-file-descriptor-file-t28936/)
* `open`, `close`, `read`, `write` functions: man pages or help functions

**Ready to dive into file I/O in C? Get started with the tasks!**