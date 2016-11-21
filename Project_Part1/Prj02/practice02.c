#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input, x, y;

	printf(" [1] ��Ʈ AND(&)\n\n [2] ��Ʈ OR(|)\n\n [3] ��Ʈ XOR(^)\n\n [4] ��Ʈ COMPLEMENT(~)\n\n [0] ����\n\n");

	printf("�� ���� �� �ϳ��� �����ϼ���. >> ");
	scanf("%d", &input);

	// [1] ��Ʈ AND(&)
	if (input == 1) {
		printf("\n��Ʈ ������ �� ���� �Է�. >> ");
		scanf("%d %d", &x, &y);

		//x ���
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", (x & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %d\n\n", x);

		//y ���
		printf("    y =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((y >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", (y & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %d\n\n", y);

		int result = x & y;

		//x & y ���� ���
		printf("x & y =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %2d\n", result);
	}

	// [2] ��Ʈ OR(|)
	if (input == 2) {
		printf("\n��Ʈ ������ �� ���� �Է�. >> ");
		scanf("%d %d", &x, &y);

		//x ���
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", (x & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %d\n\n", x);

		//y ���
		printf("    y =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((y >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", (y & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %d\n\n", y);

		int result = x | y;

		//x | y ���� ���
		printf("x | y =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %2d\n", result);
	}

	// [3] ��Ʈ XOR(^)
	if (input == 3) {
		printf("\n��Ʈ ������ �� ���� �Է�. >> ");
		scanf("%d %d", &x, &y);

		//x ���
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", (x & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %d\n\n", x);

		//y ���
		printf("    y =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((y >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", (y & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %d\n\n", y);

		int result = x ^ y;

		//x & y ���� ���
		printf("x ^ y =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %2d\n", result);
	}

	// [4] ��Ʈ COMPLEMENT(~)
	if (input == 4) {
		printf("\n��Ʈ ����(~) ������ �ϳ��� ���� �Է�. >> ");
		scanf("%d", &x);

		//x ���
		printf("    x =    ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((x >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", (x & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("   %d\n\n", x);

		int result = ~x;

		//~x ���� ���
		printf("   ~x =    ");
		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((result >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c", ((result) & 1) ? '1' : '0');	//1��° ��Ʈ
		printf("  %2d\n", result);
	}
	// [0] ����(Stop)
	if (input == 0) {
		printf("�����մϴ�.\n");
	}

	return 0;
}