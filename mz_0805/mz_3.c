#include <stdio.h>

int main(void)
{
    int age_years;
    int age_days;

    age_years = 28;
    age_days = 365*age_years;

    printf("我的年龄是%d,转换成天数是%d\n",age_years,age_days);
    
    return 0;

}