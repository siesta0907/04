//04 �ǽ� 
//IT�������� 1916513 ����� 
//main.c
//�ǽ�1 

#include <stdio.h>

int main (int argc, char *argv[]) {
	int x, y;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%i %i", &x ,&y);
	
	printf("%d + %d = %d\n",x, y, x+y);
	printf("%d - %d = %d\n",x, y, x-y);
	printf("%d * %d = %d\n",x, y, x*y);
	printf("%d / %d = %d\n",x, y, x/y);
	printf("%d %% %d = %d\n",x, y, x%y);
	return 0;
}
