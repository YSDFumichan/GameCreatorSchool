#include <iostream>

int main() {
	int x;	// �����^x
	int y;	// �����^y
	x = 63;	// x�̒��g��63
	y = 18;	// y�̒��g��18
	// �ϐ��̒l���o��
	printf("x�̒l��%d�ł��B\n", x);
	printf("y�̒l��%d�ł��B\n", y);
	// x��y�̘a���o��
	printf("���v��%d�ł��B\n", x + y);
	// x��y�̕��ς��o��
	printf("���ς�%d�ł��B\n", (x + y) / 2);
	return 0;
}