/**/
#include<stdio.h>

int main(void)
{
		char name[40];
		float cash;
		
		scanf("%s",name);
		scanf("%f",&cash);//%f读取浮点数,scanf()函数返回读取的项目数,需要&符号
		printf("The %s family just may be $%.2f richer!\n",name,cash);
		return 0;
}