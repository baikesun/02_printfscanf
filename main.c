#include <stdio.h>

int main(void)
{
	float a;
	float b;
	
	printf("분자를 입력하세요 : ");
	scanf("%f", &a);
	
	printf("분모를 입력하세요 : ");
	scanf("%f", &b);
	
	printf("나누기의 결과는 %.6f 입니다.\n", a/b); 
	
	return 0;
}
