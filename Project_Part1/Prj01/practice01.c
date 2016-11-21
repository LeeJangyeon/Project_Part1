#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int input1, input2;
	double output;

	printf("다음 단위에서 [변환할 단위] --> [변한결과 단위]로 연산합니다.\n\n");

	printf(" [1] 미터(m)  [2] 인치(in)  [3] 피트(ft)  [4] 야드(yd)  [0] 종료(stop)\n\n");

	printf("[이전단위] --> [변환단위], 두 개의 메뉴 번호를 선택하세요. >> ");
	scanf("%d", &input1);
	if (input1 > 0)
	{
		scanf("%d", &input2);
	}
	else
	{
		printf("\n종료합니다.\n");
		return 0;
	}

	while (1)
	{
		printf("\n[변환할 단위]의 길이를 입력하세요. >> ");
		scanf("%lf", &output);

		if (output == 0)
		{
			printf("\n종료합니다.\n");
			return 0;
		}
			//[1] 미터(m)
			if (input1 == 1 && input2 == 2)
			{
				printf(" \n [결과] %.2f(미터) --> %.2f(인치)\n", output, output * 39.3779);
			}
			if (input1 == 1 && input2 == 3)
			{
				printf(" \n [결과] %.2f(미터) --> %.2f(피트)\n", output, output * 3.28084);
			}
			if (input1 == 1 && input2 == 4)
			{
				printf(" \n [결과] %.2f(미터) --> %.2f(야드)\n", output, output * 1.093613);
			}
			//[2] 인치(in)
			if (input1 == 2 && input2 == 1)
			{
				printf(" \n [결과] %.2f(인치) --> %.2f(미터)\n", output, output * 0.0254);
			}
			if (input1 == 2 && input2 == 3)
			{
				printf(" \n [결과] %.2f(인치) --> %.2f(피트)\n", output, output * 0.083333);
			}
			if (input1 == 2 && input2 == 4)
			{
				printf(" \n [결과] %.2f(인치) --> %.2f(야드)\n", output, output * 0.027778);
			}
			//[3] 피트(ft)
			if (input1 == 3 && input2 == 1)
			{
				printf(" \n [결과] %.2f(피트) --> %.2f(미터)\n", output, output * 0.3048);
			}
			if (input1 == 3 && input2 == 2)
			{
				printf(" \n [결과] %.2f(피트) --> %.2f(인치)\n", output, output * 12);
			}
			if (input1 == 3 && input2 == 4)
			{
				printf(" \n [결과] %.2f(피트) --> %.2f(야드)\n", output, output * 0.333333);
			}
			//[4] 야드(yd)
			if (input1 == 4 && input2 == 1)
			{
				printf(" \n [결과] %.2f(야드) --> %.2f(미터)\n", output, output * 0.9144);
			}
			if (input1 == 4 && input2 == 2)
			{
				printf(" \n [결과] %.2f(야드) --> %.2f(인치)\n", output, output * 36);
			}
			if (input1 == 4 && input2 == 3)
			{
				printf(" \n [결과] %.2f(야드) --> %.2f(피트)\n", output, output * 3);
			}
		}
}