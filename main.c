//04 �ǽ� 
//IT�������� 1916513 ����� 
//main.c
//�ǽ�3

#include <stdio.h>

int main (int argc, char *argv[]) {
	int time;
	int min, sec;
	printf("�ʸ� �Է��ϼ���: ");
	scanf("%i", &time);
	min = time /60;
	sec = time%60;
	printf("%d:%d",min,sec);
	return 0;
}
