#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int moji;	// �����擾�p�ϐ�
	printf("��������͂��Ă�������->");
	while ((moji = getchar()) != EOF) {
		switch (moji) {
		case 'a':
		case 'A':
			printf("�A�N�Z��\n");
			break;
		case 'b':
		case 'B':
			printf("�o�[�h\n");
			break;
		case 'c':
		case 'C':
			printf("�T�C�N����\n");
			break;
		case 'd':
		case 'D':
			printf("�_�~�[\n");
			break;
		case 'e':
		case 'E':
			printf("�G�^�[�i��\n");
			break;
		case 'f':
		case 'F':
			printf("�t�@���O\n");
			break;
		case 'g':
		case 'G':
			printf("�W�[��\n");
			break;
		case 'h':
		case 'H':
			printf("�q�[�g\n");
			break;
		case 'i':
		case 'I':
			printf("�A�C�X�G�C�W\n");
			break;
		case 'j':
		case 'J':
			printf("�W���[�J�[\n");
			break;
		case 'k':
		case 'K':
			printf("�L�[\n");
			break;
		case 'l':
		case 'L':
			printf("���i\n");
			break;
		case 'm':
		case 'M':
			printf("���^��\n");
			break;
		case 'n':
		case 'N':
			printf("�i�X�J\n");
			break;
		case 'o':
		case 'O':
			printf("�I�[�V����\n");
			break;
		case 'p':
		case 'P':
			printf("�p�y�e�B�A�[\n");
			break;
		case 'q':
		case 'Q':
			printf("�N�C�[��\n");
			break;
		case 'r':
		case 'R':
			printf("���P�b�g\n");
			break;
		case 's':
		case 'S':
			printf("�X�J��\n");
			break;
		case 't':
		case 'T':
			printf("�g���K�[\n");
			break;
		case 'u':
		case 'U':
			printf("���j�R�[��\n");
			break;
		case 'v':
		case 'V':
			printf("�o�C�I�����X\n");
			break;
		case 'w':
		case 'W':
			printf("�E�F�U�[\n");
			break;
		case 'x':
		case 'X':
			printf("�G�N�X�g���[��\n");
			break;
		case 'y':
		case 'Y':
			printf("�C�G�X�_�f�B\n");
			break;
		case 'z':
		case 'Z':
			printf("�]�[��\n");
			break;
		case '\n':
			printf("��������͂��Ă�������->");
			break;
		default:
			printf("���̕����͎g���Ă��܂���B\n");
			printf("Ctrl + Z�ŏI��\n");
			break;
		}
	}
	return 0;
}