#include <iostream>

int main() {
	int x;
	int y;
	printf("x��y�������揜���܂��B\n");
	printf("x�̒l : ");
	scanf_s("%d", &x);	// x�̒l���擾
	printf("y�̒l : ");
	scanf_s("%d", &y);	// y�̒l���擾
	// ���Z
	printf("x + y��%d�ł��B\n", x + y);
	// ���Z
	printf("x - y��%d�ł��B\n", x - y);
	// ��Z
	printf("x * y��%d�ł��B\n", x * y);
	// ���Z
	printf("x / y��%d�ł��B\n", x / y);
	// �]��Z
	printf("x % y��%d�ł��B\n", x % y);
	return 0;
}