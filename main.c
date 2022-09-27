//04 실습 
//IT공학전공 1916513 박희수 
//main.c
//실습5

#include <stdio.h>

int main (int argc, char *argv[]) {
	unsigned int x;
	int b;
	printf("숫자를 입력하세요: ");
	scanf("%ui", &x);
	for (b = 0; x !=0; x>>=1){
		if (x&1){
			b++;
		}
	}
	printf("결과: %i", b);

	return 0;
}
