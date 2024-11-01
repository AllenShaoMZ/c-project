// two_function.c一个文件夹包含两个函数
#include <stdio.h>

void CatNum(void);

int main(void)
{
    int dogs, cats;
    dogs = 7;
    cats = 1;

    printf("我家有%d只小狗，%d只小猫\n",dogs,cats);
    CatNum();
    printf("okok");
    return 0;
}

void CatNum(void)
{
    printf("ta家有两只小猫\n");
}