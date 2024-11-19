# get_next_line with Bonus

## Overview

get_next_line is a custom implementation of a function designed to read lines from a file descriptor, one at a time, efficiently and flexibly. This project is part of the **42->1337 KH** curriculum, **focusing on mastering file I/O operations**, **memory management**, and **static variables in C**.

The function **get_next_line** simplifies handling large files or streams by allowing developers to retrieve lines iteratively. This functionality is invaluable for processing configuration files, logs, or any line-based input in a structured way.

***[How It Works]***
The get_next_line function uses a static buffer to manage leftover data across multiple calls. It dynamically reads from the file descriptor in chunks (determined by BUFFER_SIZE) until it encounters a newline character (\n) or reaches the end of the file.

---

## Screenshots

Here are some screenshots of my project implementation:

<img src="125.png" alt="Project Screenshot 1" width="500"/>
<img src="corr.png" alt="Project Screenshot 2" width="1000"/>

---

## Features

- Reads a single line (terminated by \n) from a file descriptor at a time.
- Handles any valid file descriptor, including files, pipes, and sockets.
- Manages multiple file descriptors simultaneously using static variables.
- Dynamic memory allocation to handle lines of any length.
- Optimized for performance with adjustable BUFFER_SIZE.

---

## How to Use

`char *get_next_line(int fd);`

### Example:

```c
  #include "get_next_line.h"
  #include <fcntl.h>
  #include <stdio.h>
  #include <libc.h> // for macOS
  void	f(void)
  {
    system("leaks a.out");
  }

  int	main(int ac, char **av)
  {
    int		fd;
    char	*line;

    atexit(f);
    (void)ac;
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
      return (-1);
    while (1)
    {
      line = get_next_line(fd);
      if (!line)
      {
        puts("{null}");
        break ;
      }
      printf("%s", line);
      free(line);
    }
    return (0);
  }
```

### Configuration:
`BUFFER_SIZE:` The size of the buffer used for reading data from the file descriptor. You can set this as a compile-time macro
  ```bash
  - cc -Wall -Wextra -Werror -D BUFFER_SIZE=128 ...
  ```
