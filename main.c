//04 �ǽ� 
//IT�������� 1916513 ����� 
//main.c
//�ǽ�1 

#include <stdio.h>

int main (int argc, char *argv[]) {
	int x, y, z, m;
	int a, b, c;
	x = 1;
	y = 3; z = 5;
	a = 3;
	b = 4;
	c = 5;
	y = a*x*x + b*x + c;
	m = (x+y+z)/3;
	
	
	printf("y=%d, m=%d", y, m);
	return 0;
}
