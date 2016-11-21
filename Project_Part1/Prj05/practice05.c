#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input = 1;
	int num8, count2, num16,num16_2;
	int store = 0, store2 = 0, store3 = 0;

	while (input > 0)
	{
		printf("정수를 하나 입력하세요. >> ");
		scanf("%d", &input);

		//종료
		if (input == 0)
		{
			printf("종료합니다.\n");
			return 0;
		}
		
		num8 = input;
		num16 = input;
		num16_2 = input;

		//2진수 출력
		printf("\n   이진수: ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((input >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c\n\n", (input & 1) ? '1' : '0');	//1번째 비트

		//8진수 출력
		printf("   팔진수: ");

		for (int count = 1; num8 > 0; count = count * 10)
		{
			store += ((num8 % 8)* count);
			num8 = num8 / 8;
		}
		printf("%32d", store);
		printf("%8o\n\n", input);
		store = 0;   //8진수 출력값 초기화

		//16진수 출력
		printf("   16진수:				");
		count2 = 0;
		while (num16 > 0)
		{
			store2 = num16 % 16;
			num16 = num16 / 16;
			count2++;
		}

		for (int i = count2; i>0; i--)
		{
			num16_2 = input;

			for (int j = 0; j < i - 1; j++)
			{
				num16_2 = num16_2 / 16;
			}
			store3 = num16_2 % 16;
			if (store3 < 10)
			{
				printf("%d", store3);
			}
			else
			{
				printf("%c", store3 + 55);
			}
		}
		printf("%8X\n\n", input);
		
		//종료
	
	}
}