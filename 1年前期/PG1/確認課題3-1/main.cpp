#include <iostream>

int main() {
	int age;	// �N��
	printf("�N�����͂��Ă�������->");
	scanf_s("%d", &age);		// �N����擾
	if (age >= 126)		printf("�����Ă܂����`\n");		// 126�Έȏ�͐����Ă�H
	else if (age >= 75) printf("�V�N\n");				// 75�Έȏ�,125�Έȉ��͘V�N
	else if (age >= 65) printf("���N\n");				// 65�Έȏ�,74�Έȉ��͍��N
	else if (age >= 45) printf("���N��\n");				// 45�Έȏ�,64�Έȉ��͒��N��
	else if (age >= 30) {
		if (age != 40)	printf("�s�N��\n");				// 30�Έȏ�,44�Έȉ��͑s�N��
		else			printf("���V\n");				// 40�΂͏��V
	}
	else if (age >= 15) {
		if (age != 20)	printf("�N��\n");				// 15�Έȏ�,29�Έȉ��͐N��
		else			printf("��\�΂͓��ʁI�I�I\n");	// 20�΂͓���
	}
	else if (age >= 5)	printf("���N��\n");				// 5�Έȏ�,14�Έȉ��͏��N��
	else if (age >= 0)	printf("�c�N��\n");				// 0�Έȏ�,4�Έȉ��͗c����
	else if (age < 0) 	printf("���܂�Ă��Ȃ�\n");		// 0�Ζ����͐��܂�ĂȂ�
	return 0;

}