#include <stdio.h>
/*
    ���丮��(���) �����ϱ�
	5! = 5x4x3x2x1
*/
int getGob(int n) {
	int gob = 1;
	int i;

	for (i = 1; i <= n; i++) {
		gob *= i; //gob = gob * i;
	}
	return gob;
}

int facto(int n) {
	if (n <= 1)
		return 1;  //���� ����
	else
		return n * facto(n - 1); //���� ��
}
/*
   5! = 5x4x3x2x1
   5! = 5x4!
   4! = 4x3x2x1
   4! = 4x3!
   ....

   n! = n*(n-1)!
*/

int main()
{
	//1���� 5���� ���ϱ�
	//printf("�����1: %d\n", getGob(5));

	//��� ȣ��
	printf("1!= %d\n", facto(1));  //1
	printf("2!= %d\n", facto(2));  //2
	printf("3!= %d\n", facto(3));  //6
	printf("4!= %d\n", facto(4));  //24
	printf("5!= %d\n", facto(5));  //120

	return 0;
}