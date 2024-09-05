<p>
<img src="https://github.com/damiandania/damiandania/blob/main/Pics/Get_next_line.png"
    alt="Project pic" width="150" height="150"/>
</p>

# Get Next Line 📜

**Get Next Line** is a project that involves creating a function to read a line from a file descriptor. The goal is to understand and implement the mechanics of file I/O and dynamic memory allocation in C.

## Features

- **File Reading:** Read a line from a file descriptor.
- **Dynamic Memory Allocation:** Handle dynamic memory allocation for buffers and lines.
- **Error Handling:** Gracefully handle errors and edge cases.

## Technologies Used

- **C:** The project is implemented in C.

## Installation

1. **Clone this repository:**
    ```bash
    git clone https://github.com/damiandania/Get_next_line.git
    ```

2. **Navigate to the project directory:**
    ```bash
    cd Get_next_line
    ```

3. **Build the project:**
    ```bash
    make
    ```

## Usage

Once the project is built, you can use the `get_next_line` function in your C programs. For example:

```c
#include "get_next_line.h"

int main() {
    int fd = open("test.txt", O_RDONLY);
    char *line;

    while ((line = get_next_line(fd)) != NULL) {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
```

Compile and run your program:

```bash
gcc -o my_program my_program.c libgnl.a
./my_program
```
