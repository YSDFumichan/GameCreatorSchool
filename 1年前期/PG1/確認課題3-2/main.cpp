#include <iostream>

int main() {
	// �͋[�����̃V�[�h
	srand(time(NULL));
	int player;
	int enemy;
	const int ROCK = 0;		// �O�[
	const int CAESAR = 1;	// �`���L
	const int PAPER = 2;	// �p�[
	printf("����񂯂�����܂�\n");
	printf("�ŏ��͂��`�A����񂯂�ۂ�\n");
	while (true) {
		while (true) {
			printf("�v���C���[�̎�𐔎��œ��́I(�O�[:0 �`���L:1 �p�[:2)->");
			scanf_s("%d", &player);	// �v���C���[�̎���擾
			if (player >= 0 && player <= 2) break;
			else	printf("��������������͂��Ă��������I\n");	// �x����
		}
		enemy = rand() % 3;	// �G�l�~�[�̎�𗐐��Ŏ擾
		printf("�v���C���[�̎��");
		if (player == ROCK)			printf("�O�[\n");
		else if (player == CAESAR)	printf("�`���L\n");
		else if (player == PAPER)	printf("�p�[\n");
		printf("�G�̎��");
		if (enemy == ROCK)			printf("�O�[\n");
		else if (enemy == CAESAR)	printf("�`���L\n");
		else if (enemy == PAPER)	printf("�p�[\n");
		ROCK == PAPER;
		if (player == enemy) {
			printf("���������ł�\n");
			printf("�������ł���\n");
		}
		else break;
	}
	if ((player == ROCK) && (enemy == CAESAR) ||
		(player == CAESAR) && (enemy == PAPER) ||
		(player == PAPER) && (enemy == ROCK)) {
		printf("�v���C���[�̏����ł�\n");
	}
	else if ((player == ROCK) && (enemy == PAPER) ||
		(player == CAESAR) && (enemy == CAESAR) ||
		(player == PAPER) && (enemy == ROCK)) {
		printf("�v���C���[�̕����ł�\n");
	}
	return 0;
}