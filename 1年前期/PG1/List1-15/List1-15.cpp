#include <iostream>

int main() {
	const double PI = 3.1416;	// �~����
	double r;					// ���a
	printf("���a : ");
	scanf_s("%lf", &r);	// ���a���擾
	printf("�~���̒�����%f�ł��B\n", 2 * PI * r);
	printf("�ʐς�%f�ł��B\n", PI * r * r);
	return 0;
}