#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input, x, y;

	printf(" [1] 비트 AND(&)\n\n [2] 비트 OR(|)\n\n [3] 비트 XOR(^)\n\n [4] 비트 COMPLEMENT(~)\n\n [0] 종료\n\n");

	printf("위 연산 중 하나를 선택하세요. >> ");
	scanf("%d", &input);

	// [1] 비트 AND(&)
	if (input == 1) {
		printf("\n비트 연산할 두 정수 입력. >> ");
		scanf("%d %d", &x, &y);

		//x 출력
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", (x & 1) ? '1' : '0');	//1번째 비트
		printf("   %d\n\n", x);

		//y 출력
		printf("    y =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((y >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", (y & 1) ? '1' : '0');	//1번째 비트
		printf("   %d\n\n", y);

		int result = x & y;

		//x & y 연산 출력
		printf("x & y =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1번째 비트
		printf("   %2d\n", result);
	}

	// [2] 비트 OR(|)
	if (input == 2) {
		printf("\n비트 연산할 두 정수 입력. >> ");
		scanf("%d %d", &x, &y);

		//x 출력
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", (x & 1) ? '1' : '0');	//1번째 비트
		printf("   %d\n\n", x);

		//y 출력
		printf("    y =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((y >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", (y & 1) ? '1' : '0');	//1번째 비트
		printf("   %d\n\n", y);

		int result = x | y;

		//x | y 연산 출력
		printf("x | y =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1번째 비트
		printf("   %2d\n", result);
	}

	// [3] 비트 XOR(^)
	if (input == 3) {
		printf("\n비트 연한할 두 정수 입력. >> ");
		scanf("%d %d", &x, &y);

		//x 출력
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", (x & 1) ? '1' : '0');	//1번째 비트
		printf("   %d\n\n", x);

		//y 출력
		printf("    y =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((y >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", (y & 1) ? '1' : '0');	//1번째 비트
		printf("   %d\n\n", y);

		int result = x ^ y;

		//x & y 연산 출력
		printf("x ^ y =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1번째 비트
		printf("   %2d\n", result);
	}

	// [4] 비트 COMPLEMENT(~)
	if (input == 4) {
		printf("\n비트 보수(~) 연산할 하나의 정수 입력. >> ");
		scanf("%d", &x);

		//x 출력
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", (x & 1) ? '1' : '0');	//1번째 비트
		printf("   %d\n\n", x);

		int result = ~x;

		//~x 연산 출력
		printf("   ~x =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32번째 ~ 2번째 비트
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1번째 비트
		printf("  %2d\n", result);
	}
	// [0] 종료(Stop)
	if (input == 0) {
		printf("종료합니다.\n");
	}

	return 0;
}