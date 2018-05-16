#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a;
	int b;
	int c;
	printf("輸入第一個整數\n");
	scanf("%d",&a);
	printf("輸入第二個整數\n");
	scanf("%d",&b);
	c=a+b;
	printf("總和為%d",c);
	return 0;
}
