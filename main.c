//04 실습 
//IT공학전공 1916513 박희수 
//main.c
//실습4

#include <stdio.h>

int main (int argc, char *argv[]) {
	int year;
	printf("년도를 입력하세요: ");
	scanf("%i", &year);
	printf("%d", year%4 == 0 && year%100 != 0 || year %400 ==0);

	return 0;
}
