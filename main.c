#include <stdio.h>

int main(void)
{
	float a;
	float b;
	
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%f", &a);
	
	printf("�и� �Է��ϼ��� : ");
	scanf("%f", &b);
	
	printf("�������� ����� %.6f �Դϴ�.\n", a/b); 
	
	return 0;
}
