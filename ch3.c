#include <stdio.h>

int main(void)
{

    int x = 1024;

    printf("dec is %d , octal is %o, hex is %x.  \r\n", x, x, x);
    printf("dec is %#d , octal is %#o, hex is %#x.  \r\n", x, x, x);

    return 0;
}