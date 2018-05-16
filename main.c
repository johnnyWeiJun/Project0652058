#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int integera;/*宣告整數變數a*/ 
	int integerb;/*宣告整數變數b*/
	int sum;/*宣告總和*/
	printf("輸入第一個整數\n");
	scanf("%d",&integera);/*輸入第一個整數*/ 
	printf("輸入第二個整數\n");
	scanf("%d",&integerb);/*輸入第二個整數*/ 
	sum=integera+integerb;/*總和=整數a+整數b*/ 
	printf("總和為%d",sum);/*顯示總和*/
	return 0;
}
