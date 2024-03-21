# Libft

In this project, the objective is to create a library, called libft, consisting of re-implementations of some standard C library functions, as well as additional utility functions that might be useful for future projects.

## Table of Contents

1. [Getting Started](#getting-started)
2. [Usage](#usage)
3. [Functions](#functions)
4. [Contributing](#contributing)

## Getting Started

To get started with using or contributing to this project, follow these steps:

1. Clone the repository:

   ```bash
   $ git clone https://github.com/yourusername/libft.git
   $ cd libft
3. Build the project :
    ```bash
    $ make
4. create a main.c : 
    ```c
    #include "libft.h"

    int main() {
        char *str = "Hello, world!";
        int length = ft_strlen(str);
        ft_putnbr_fd(length, 1);
        return 0;
    }
## Usage
```bash
$ gcc -o main main.c libft.a
```
## Contributing
Contributions to this project are welcome. To contribute, follow these steps:

1. Fork the repository.
2. Create a new branch (git checkout -b feature/improvement).
Make your changes.
3. Commit your changes (git commit -am 'Add new feature').
4. Push to the branch (git push origin feature/improvement).
5. Create a new Pull Request.


Please ensure your code follows the project's coding standards and conventions.