#include <iostream>

int main() {
	// �͋[�����̃V�[�h
	srand(time(NULL));
	int lucky = rand() % 10;	// �������擾
	printf("�����̃��b�L�[�i���o�[��%d�ł��B\n", lucky);
	return 0;
}