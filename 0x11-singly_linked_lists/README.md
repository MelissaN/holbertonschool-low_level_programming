## Project name
> Each file in this repository holds code that illustrates an essential concept of programming,
> specific to the C programming language:
> how to build, use, and free singly linked lists

### Description of what each file shows:
> lists.h ---------- holds files' function prototypes and a sample struct linked list
> main.c files ----- holds test files that showcase examples of how to use functions
0. a function that prints all elements of a linked list
1. a function that returns the number of elements in a linked list
2. a function that adds a new node at the beginning of a linked list
3. a function that adds a new node at the end of a list_t list
4. a function that free a linked list

### Environment
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### How To Install & Compile
```
(terminal)$ git clone https://github.com/MelissaN/holbertonschool-low_level_programming/0x11-singly_linked_lists.git
(terminal)$ gcc -Wall -Werror -Wextra -pedantic 0-print_list.c
```
Sample main program:
```
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - showcases how to use file 0-print_list to print nodes in linked lists
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);
}
====================================
(terminal)$ ./a.out
[5] Hello
[5] World
-> 2 elements
(terminal)$
```

---
### Authors
Melissa Ng [![M](https://upload.wikimedia.org/wikipedia/fr/thumb/c/c8/Twitter_Bird.svg/30px-Twitter_Bird.svg.png)](https://twitter.com/MelissaNg__)

### License
 [![M](https://www.holbertonschool.com/holberton-logo-simple-200s.png)](https://www.holbertonschool.com)
