# Exercise 2.1

Create and run Kernighan and Ritchie's famous "hello, world" program
```c
#include <stdio.h>

int main (void)
{
  printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it go away?

# Solution

To make the warning message go away, we can add a ```return 0;``` statement at the end. See ```1.c```
