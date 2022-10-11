#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
char first[255], last[255];
askname(first, last);
<<<<<<< HEAD
 printf("Hello, %s %s!\n", first, last);

=======
 printf("Hello and bye, %s %s!\n", first, last);
>>>>>>> 5bcea26 (Update main2.c)
return 0;
}
