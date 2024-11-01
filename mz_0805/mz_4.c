/*两个自定义函数*/
# include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a good boy!\n");//注意\n 注意换行符
}

void deny(void)
{
    printf("which noboby can deny!\n");
}