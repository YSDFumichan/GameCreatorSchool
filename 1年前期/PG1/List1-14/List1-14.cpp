#include <iostream>

int main() {
	double r;	// ���a
	printf("���a : ");
	scanf_s("%lf", &r);	// ���a���擾
	printf("�~���̒�����%f�ł��B\n", 2.0f * 3.14f * r);
	printf("�ʐς�%f�ł��B\n", 3.14 * r * r);
	return 0;
}