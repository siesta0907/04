//04 �ǽ� 
//IT�������� 1916513 ����� 
//main.c
//�ǽ�5

#include <stdio.h>

int main (int argc, char *argv[]) {
	unsigned int x;
	int b;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%ui", &x);
	for (b = 0; x !=0; x>>=1){
		if (x&1){
			b++;
		}
	}
	printf("���: %i", b);

	return 0;
}
