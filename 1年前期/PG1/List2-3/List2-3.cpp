#include <iostream>

int main() {
	int a, b;
	printf("����a�F");
	scanf_s("%d", &a);	// A�̐������擾
	printf("����b�F");
	scanf_s("%d", &b);	// B�̐������擾
	if (a == b) printf("��̒l�͓������ł��B\n");
	else printf("��̒l�͓������Ȃ��ł��B\n");
	return 0;
}