#include <stdio.h>

int main(void) 
{
	int j, count;
	int num = 2;

	for (int i = 0; i < 10; i++) {
		// ��ĭ ���
		for (int j = i; j < 9; j++) {
			printf("  ");
		}
		for (count = 0; count <= i; num++) {
			// �Ҽ� ���� �˻�
			for (j = 2; j < num; j++) {
				if (num % j == 0)
					break;
			}

			if (j == num) {
				printf("%3d ", num);
				count++;
			}
		}
		printf("\n");
	}
	return 0;
}