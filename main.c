//04 �ǽ� 
//IT�������� 1916513 ����� 
//main.c
//�ǽ�4

#include <stdio.h>

int main (int argc, char *argv[]) {
	int year;
	printf("�⵵�� �Է��ϼ���: ");
	scanf("%i", &year);
	printf("%d", year%4 == 0 && year%100 != 0 || year %400 ==0);

	return 0;
}
