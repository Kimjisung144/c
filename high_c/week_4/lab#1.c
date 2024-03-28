// lab#1 산술 계산기 (if문)
#include<stdio.h>

int main()
{
	int num1; // 피연산자 1 변수
	int num2; // 피연산자 2 변수
	char cal; // 연산자 변수
	int re = 0; // 결과값 변수 

	printf("수식을 입력하시오\n(예: 2+5)\n>>");
	scanf("%d %c %d", &num1, &cal, &num2);

	if (cal == '+')
	{
		re	= num1 + num2;
	}
	else if(cal == '-')
	{
		re = num1 - num2;
	}
	else if (cal == '*')
	{
		re = num1 * num2;
	}
	else if (cal / num2)
	{
		re = num1 / num2;
	}
	printf("%d %c %d = %d", num1, cal, num2, re);
	return 0;
}
