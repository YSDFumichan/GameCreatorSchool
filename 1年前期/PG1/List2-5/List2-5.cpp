#include <iostream>

int main() {
	int n;
	printf("�����l�F");
	scanf_s("%d", &n);	// �������擾
	if (n > 0) printf("���̒l�͐��ł��B\n");
	else if (n < 0) printf("���̒l�͕��ł��B\n");
	else printf("���̒l�̓[���ł��B\n");
	return 0;
}