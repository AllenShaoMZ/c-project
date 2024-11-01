#include <stdio.h>

void br(void);
void ic(void);

void br(void)
{
    printf("Brazil,Russia\n");
}

void ic(void)
{
    printf("India,China\n");
}

int main(void)
{
    printf("b,r,i,c\n");
    br();
    ic();
    return 0;
}