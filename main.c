//04 실습 
//IT공학전공 1916513 박희수 
//main.c
//실습3

#include <stdio.h>

int main (int argc, char *argv[]) {
	int time;
	int min, sec;
	printf("초를 입력하세요: ");
	scanf("%i", &time);
	min = time /60;
	sec = time%60;
	printf("%d:%d",min,sec);
	return 0;
}
