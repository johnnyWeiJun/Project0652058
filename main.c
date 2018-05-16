#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int integera;
	int integerb;
	int sum;
	printf("輸入第一個整數\n");
	scanf("%d",&integera);
	printf("輸入第二個整數\n");
	scanf("%d",&integerb);
	sum=integera+integerb;
	printf("總和為%d",sum);
	return 0;
}
