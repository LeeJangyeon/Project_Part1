#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input = 1;
	int num8, count2, num16,num16_2;
	int store = 0, store2 = 0, store3 = 0;

	while (input > 0)
	{
		printf("������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &input);

		//����
		if (input == 0)
		{
			printf("�����մϴ�.\n");
			return 0;
		}
		
		num8 = input;
		num16 = input;
		num16_2 = input;

		//2���� ���
		printf("\n   ������: ");

		for (int i = 32; i > 1; i--)
		{
			printf("%c", ((input >> i - 1) & 1) ? '1' : '0');	//32��° ~ 2��° ��Ʈ
		}
		printf("%c\n\n", (input & 1) ? '1' : '0');	//1��° ��Ʈ

		//8���� ���
		printf("   ������: ");

		for (int count = 1; num8 > 0; count = count * 10)
		{
			store += ((num8 % 8)* count);
			num8 = num8 / 8;
		}
		printf("%32d", store);
		printf("%8o\n\n", input);
		store = 0;   //8���� ��°� �ʱ�ȭ

		//16���� ���
		printf("   16����:				");
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
		
		//����
	
	}
}