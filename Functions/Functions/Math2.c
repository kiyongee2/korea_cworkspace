#define _USE_MATH_DEFINES  //M_PI ��� ���
#include <stdio.h>
#include <math.h>

int myPow(int x, int y)
{
	int gob = 1;
	int i;

	for (i = 0; i < y ; i++){
		gob *= x;
	}

	return gob;
	/*
	   x=2, y=3
	   i=0, gob = 1 x 2
	   i=1, gob = 2 x 2
	   i=2, gob = 4 x 2
	   i=3, �ݺ� ����
	*/
}

int main()
{
	//�ŵ����� ȣ��
	printf("%d\n", myPow(2, 4));

	//������ - ���(M_PI)
	printf("%f\n", M_PI);
	printf("%.3f\n", M_PI);

	int ans = pow(2, ceil(M_PI));  //16, ceil(M_PI) -> 4
	printf("%d\n", ans);

	
	//1���� 5���� ���ϱ�
	/*int gob = 1;
	int i;

	for (i = 1; i <= 5; i++)
	{
		gob = gob * i;
		printf("i=%d, gob=%d\n", i, gob);
	}
	printf("%d\n", gob);*/

	return 0;
}

