#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	// �͋[�����̃V�[�h
	srand(time(NULL));
	// �T�C�R���̏o��
	int result = (rand() % 6) + 1;
	// �o��
	printf("�T�C�R���̖� : %d\n", result);
	return 0;
}