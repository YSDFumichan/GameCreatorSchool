#include <iostream>

int main() {
	double x;
	double y;
	printf("x��y�������揜���܂��B\n");
	printf("x�̒l : ");
	scanf_s("%lf", &x);	// x�̒l���擾
	printf("y�̒l : ");
	scanf_s("%lf", &y);	// y�̒l���擾
	// ���Z
	printf("x + y��%lf�ł��B\n", x + y);
	// ���Z
	printf("x - y��%lf�ł��B\n", x - y);
	// ��Z
	printf("x * y��%lf�ł��B\n", x * y);
	// ���Z
	printf("x / y��%lf�ł��B\n", x / y);
	return 0;
}