#define _CRT_SECURE_NO_WARNINGS //scanf()
#include <stdio.h>

int main()
{
	int id;   //���
	char name[10];  //�̸�

	printf("��� �Է�: ");
	scanf("%d", &id);

	while (getchar() != '\n');

	printf("�̸� �Է�: ");
	//scanf("%s", name);
	//fgets()�� '\n'�� ������ �����Ƿ� �Է��� ��ƴ�.
	fgets(name, sizeof(name), stdin); //stdin - ǥ�� �Է� ��Ʈ��

	printf("���: %d\n", id);
	printf("�̸�: %s\n", name);

	return 0;
}