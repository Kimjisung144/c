#include<stdio.h>

int main()
{
	char cal;
	int num1, num2;
	int re = 0;

	printf("수식을 입력하시오");
	scanf("%d %c %d",&num1, &cal, &num2);

	switch (cal)
	{
		case '+':
			re = num1 + num2;
			break;
		case '-':
			re = num1 - num2;
			break;
		case '*':
			re = num1 * num2;
			break;
		case '/':
			re = num1 / num2;
			break;
		case '%':
			re = num1 % num2;
			break;
		default:
			printf("연산자를 잘못 입력하셨습니다.");
			break;
	}
	printf("%d %c %d  = %d", num1, cal, num2, re);
}
