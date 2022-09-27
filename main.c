//04 실습 
//IT공학전공 1916513 박희수 
//main.c
//실습1 

#include <stdio.h>

int main (int argc, char *argv[]) {
	int x, y;
	printf("두 개의 정수를 입력하세요: ");
	scanf("%i %i", &x ,&y);
	
	printf("%d + %d = %d\n",x, y, x+y);
	printf("%d - %d = %d\n",x, y, x-y);
	printf("%d * %d = %d\n",x, y, x*y);
	printf("%d / %d = %d\n",x, y, x/y);
	printf("%d %% %d = %d\n",x, y, x%y);
	return 0;
}
