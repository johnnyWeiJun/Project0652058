#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int integera;/*�ŧi����ܼ�a*/ 
	int integerb;/*�ŧi����ܼ�b*/
	int sum;/*�ŧi�`�M*/
	printf("��J�Ĥ@�Ӿ��\n");
	scanf("%d",&integera);/*��J�Ĥ@�Ӿ��*/ 
	printf("��J�ĤG�Ӿ��\n");
	scanf("%d",&integerb);/*��J�ĤG�Ӿ��*/ 
	sum=integera+integerb;/*�`�M=���a+���b*/ 
	printf("�`�M��%d",sum);/*����`�M*/
	return 0;
}
