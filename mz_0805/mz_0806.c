#include <stdio.h>

int main(void)
{
    int a,b;
    a = 10;
    b = 5;
    printf("%d  %d\n",a,b);
    b = a+b;
    printf("%d  %d\n",a,b);
    a = a*b;
    printf("%d  %d\n",a,b);
    return 0;
}