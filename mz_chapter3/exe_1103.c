#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int age;
    float ageTosecond;
    float yearTosecond = 3.156e7;

    printf("请输入你的年龄：");
    scanf("%d", &age);
    ageTosecond = age * yearTosecond;
    printf("你在这个世界上生活了 %.2f 秒\r\n", ageTosecond);

    return 0;
}