//04 �ǽ� 
//IT�������� 1916513 ����� 
//main.c
//�ǽ�6

#include <stdio.h>

int main (int argc, char *argv[]) {
	int time;
	int hour, min, sec;
	printf("�ʸ� �Է��ϼ���: ");
	scanf("%i", &time);
	hour = time/3600;
	min = time%3600/60;
	sec = time%60;
	printf("%d:%d:%d",hour,min,sec);
	return 0;
}
