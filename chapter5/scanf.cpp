#define _CRT_SECURE_NO_WARININGS

#include <stdio.h>

int main(void)
{
	//������ ���� �Է� �޾� �� ����� ���
	int a, b, c;

	printf("������ ���� ���� ���Ͽ���");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", a + b + c);


	return 0;
}