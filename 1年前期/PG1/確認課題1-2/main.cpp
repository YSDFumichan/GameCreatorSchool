#include <iostream>

int main() {
	const char* name = "�g�c����";	// ���O
	int age = 20;					// �N��
	float height = 166.7f;			// �g��
	// %s = ������(const char*), %d = ����(int), %f = ����(float)%.1f�͏����_1���ڂ܂�
	printf("%s�i%d�΁j�g���i%.1fcm�j\n", name, age, height);
	return 0;
}