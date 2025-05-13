#include <stdio.h>

int main()
{
	int a[10];
	int i;  //반복 변수
	int oddTotal = 0;  //합계를 저장할 변수

	for (i = 0; i < 10; i += 2)
	{
		a[i] = i + 1;
		oddTotal += a[i]; //oddTotal = oddTotal + a[i];
		printf("a[%d]=%d, oddTotal=%d\n", i, a[i], oddTotal);

	}
	printf("합계: %d\n", oddTotal);

	return 0;
}