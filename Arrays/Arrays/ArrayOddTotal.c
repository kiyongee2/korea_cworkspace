#include <stdio.h>

int main()
{
	int a[10];
	int i;  //�ݺ� ����
	int oddTotal = 0;  //�հ踦 ������ ����

	for (i = 0; i < 10; i += 2)
	{
		a[i] = i + 1;
		oddTotal += a[i]; //oddTotal = oddTotal + a[i];
		printf("a[%d]=%d, oddTotal=%d\n", i, a[i], oddTotal);

	}
	printf("�հ�: %d\n", oddTotal);

	return 0;
}