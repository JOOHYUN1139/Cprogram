#define _CRT_SECURE_NO_WARININGS

#include <stdio.h>

int main(void)
{
	//세개의 수를 입력 받아 합 결과를 출력
	int a, b, c;

	printf("세가지 수의 합을 구하여라");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d", a + b + c);


	return 0;
}