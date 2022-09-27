//04 실습 
//IT공학전공 1916513 박희수 
//main.c
//실습6

#include <stdio.h>

int main (int argc, char *argv[]) {
	int time;
	int hour, min, sec;
	printf("초를 입력하세요: ");
	scanf("%i", &time);
	hour = time/3600;
	min = time%3600/60;
	sec = time%60;
	printf("%d:%d:%d",hour,min,sec);
	return 0;
}
