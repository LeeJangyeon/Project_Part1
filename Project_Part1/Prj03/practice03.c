#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, dump, select;
	printf("��ȯ�� �� ������ �Է��ϼ���. >> ");
	scanf("%d %d", &x, &y);

	printf("�Է��� �� ��: x = %d and y = %d\n\n", x, y);

	printf(" �ӽ� ���� ���      �̿� ���[1]\n");
	printf(" ������ ��������     ��ȯ ���[2]\n");
	printf(" ������ ����������   ��ȯ ���[3]\n");
	printf(" XOR ������ ^        �̿� ���[4]\n\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >> ");
	scanf("%d", &select);

	switch (select)
	{
		// [1] �ӽ� ���� ��� Ȱ��
		case 1:
			dump = x;
			x = y;
			y = dump;
			printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);
			break;

		// [2] ������ ���� Ȱ��
		case 2:
			x = x + y;
			y = x - y;	//[(x + y) - y]
			x = x - y;	//[(x + y) - x]
			printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);
			break;

		// [3] ������ ������ Ȱ��
		case 3:
			x = x * y;
			y = x / y;	//[(x * y) / y]
			x = x / y;	//[(x * y) / x]
			printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);
			break;
		
		// [4] ��Ÿ�� ��Ʈ ���� Ȱ��
		case 4:
			x = x ^ y;
			y = x ^ y;	//[(x ^ y) ^ y] == [x ^ (y ^ y) == [x ^ 0] == [x]
			x = x ^ y;	//[(x ^ x) ^ x] == [(y ^ x) ^ x] == [y ^ (x ^ x)] == [y ^ 0] == [y]
			printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);
			break;

		default:
			printf("�߸� �Է��Ͽ����ϴ�.\n");
	}
	return 0;
}