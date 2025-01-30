# Get Next Line - 42 School Project - 1337 KH

## Overview

**get_next_line** is a custom implementation of a function designed to read lines from a file descriptor, one at a time, efficiently and flexibly, **focusing on mastering file I/O operations**, **Memory management**, and **Static variables in C**.

**get_next_line** is a project from the **42 School** that focuses on reading a line from a file descriptor efficiently. The goal is to implement a function that returns the next line of a file, handling various edge cases such as different buffer sizes, multi-file reading, and memory management.

This project deepens understanding of *file handling, dynamic memory allocation*, 
*focusing on mastering file I/O operations*, *Static variables* and *buffer management* in C.

---

## Screenshots

Here are some screenshots of my project implementation:


<div align="center">
  <img src="125.png" alt="125 Successe" width="500"/>
  <img src="corr.png" alt="MOULINETTE" width="700"/>
</div>

---

## Features

- Reads a line (terminated by \n) from a file descriptor efficiently.
- Handles multiple file descriptors simultaneously.
- Manages multiple file descriptors simultaneously using static variables.
- Dynamic memory allocation to handle lines of any length.
- Works with different buffer sizes.
- Optimized for performance with adjustable BUFFER_SIZE.
- Handles edge cases like empty files, large files, and newline characters.
---

## How It Works

The function `get_next_line` reads a file descriptor one line at a time and returns it as a string. It utilizes a buffer to store the data and dynamically allocates memory to construct the line progressively.

---
## Function Prototype:

- ```char *get_next_line(int fd);```

---

## Key Concepts Used:

- *Static variables* to store data between function calls.

- *Dynamic memory allocation* with `malloc` and `free`.

- *File descriptor management* using `read`.

- *Efficient buffer handling* for optimized performance.

---

### Installation and Compilation:

`BUFFER_SIZE:` The size of the buffer used for reading data from the file descriptor. You can set this as a compile-time macro

1. Clone the repository:

```bash
git clone https://github.com/oussama-fa/get_next_line_42.git
cd get_next_line_42
```

2. Compile the project:

If you wan't mendatory part :
```bash
cd gnl_mendatory
cc -Wall -Wextra -Werror -D BUFFER_SIZE=128 get_next_line.c get_next_line_utils.c main.c -o gnl
```

If you wan't Bonus part :
```bash
cd gnl_mendatory
cc -Wall -Wextra -Werror -D BUFFER_SIZE=128 get_next_line_bonus.c get_next_line_utils_bonus.c main.c -o gnl
```

3. Run the program:
```bash
./gnl file.txt
```
---

## Author
*Oussama FARAH*

- 📱 **Instagram**: [@oussama._.farah](https://www.instagram.com/oussama._.farah/)
- ✉️ **Email**: [oussama05farah@gmail.com](mailto:oussama05farah@gmail.com)
