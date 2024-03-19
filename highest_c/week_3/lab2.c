#include <stdio.h>

int main(void)
{
	int year;// 계산 받을 연도 변수

	printf("연도를 입력하시오:");
	scanf_s("%d",&year); // 연도 입력

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // 윤년의 조건
	{
		printf("result:1"); // 참
	}else {
		printf("result:0"); // 거짓
	}
}
