#include <stdio.h>

int main(void) {
	const char* name = "�g�c ����";	// ���O
	int age = 20;	// �N��
	float height = 166.7f;	// �g��
	//%s = ������, %d = ����(int), %f = ����(float)
	printf("%s�i%d�΁j�g���i%.1fcm�j\n", name, age, height);
}