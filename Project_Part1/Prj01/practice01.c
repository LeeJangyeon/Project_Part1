#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2;
	double output;

	printf("���� �������� [��ȯ�� ����] --> [���Ѱ�� ����]�� �����մϴ�.\n\n");

	printf(" [1] ����(m)  [2] ��ġ(in)  [3] ��Ʈ(ft)  [4] �ߵ�(yd)  [0] ����(stop)\n\n");

	printf("[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >> ");
	scanf("%d", &input1);
	if (input1 > 0)
	{
		scanf("%d", &input2);
	}
	else
	{
		printf("\n�����մϴ�.\n");
		return 0;
	}

	while (1)
	{
		printf("\n[��ȯ�� ����]�� ���̸� �Է��ϼ���. >> ");
		scanf("%lf", &output);

		if (output == 0)
		{
			printf("\n�����մϴ�.\n");
			return 0;
		}
			//[1] ����(m)
			if (input1 == 1 && input2 == 2)
			{
				printf(" \n [���] %.2f(����) --> %.2f(��ġ)\n", output, output * 39.3779);
			}
			if (input1 == 1 && input2 == 3)
			{
				printf(" \n [���] %.2f(����) --> %.2f(��Ʈ)\n", output, output * 3.28084);
			}
			if (input1 == 1 && input2 == 4)
			{
				printf(" \n [���] %.2f(����) --> %.2f(�ߵ�)\n", output, output * 1.093613);
			}
			//[2] ��ġ(in)
			if (input1 == 2 && input2 == 1)
			{
				printf(" \n [���] %.2f(��ġ) --> %.2f(����)\n", output, output * 0.0254);
			}
			if (input1 == 2 && input2 == 3)
			{
				printf(" \n [���] %.2f(��ġ) --> %.2f(��Ʈ)\n", output, output * 0.083333);
			}
			if (input1 == 2 && input2 == 4)
			{
				printf(" \n [���] %.2f(��ġ) --> %.2f(�ߵ�)\n", output, output * 0.027778);
			}
			//[3] ��Ʈ(ft)
			if (input1 == 3 && input2 == 1)
			{
				printf(" \n [���] %.2f(��Ʈ) --> %.2f(����)\n", output, output * 0.3048);
			}
			if (input1 == 3 && input2 == 2)
			{
				printf(" \n [���] %.2f(��Ʈ) --> %.2f(��ġ)\n", output, output * 12);
			}
			if (input1 == 3 && input2 == 4)
			{
				printf(" \n [���] %.2f(��Ʈ) --> %.2f(�ߵ�)\n", output, output * 0.333333);
			}
			//[4] �ߵ�(yd)
			if (input1 == 4 && input2 == 1)
			{
				printf(" \n [���] %.2f(�ߵ�) --> %.2f(����)\n", output, output * 0.9144);
			}
			if (input1 == 4 && input2 == 2)
			{
				printf(" \n [���] %.2f(�ߵ�) --> %.2f(��ġ)\n", output, output * 36);
			}
			if (input1 == 4 && input2 == 3)
			{
				printf(" \n [���] %.2f(�ߵ�) --> %.2f(��Ʈ)\n", output, output * 3);
			}
		}
}