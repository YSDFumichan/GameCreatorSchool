#include <iostream>

int main(void) {
	// �~�̏��
	float x_1, x_2;	// X���̍��W
	float y_1, y_2;	// Y���̍��W
	float r_1, r_2;	// ���a
	// 1�ڂ̉~�̏����擾
	printf("1�߂̉~�̍��W����͂��Ă������� (��F3, 4 ->");
	scanf_s("%f, %f", &x_1, &y_1);	// X,Y���W�擾
	printf("1�߂̉~�̔��a����͂��Ă������� (��F4.5 ->");
	scanf_s("%f", &r_1);	// ���a���擾
	// 2�ڂ̉~�̏����擾
	printf("2�߂̉~�̍��W����͂��Ă������� (��F3, 4 ->");
	scanf_s("%f, %f", &x_2, &y_2);	// X,Y���W�擾
	printf("2�߂̉~�̔��a����͂��Ă������� (��F4.5 ->");
	scanf_s("%f", &r_2);	// ���a
	float dx = x_1 - x_2;	// X���W�̋���
	float dy = y_1 - y_2;	// Y���W�̋���
	float d = dx * dx + dy * dy;	// ����
	float Contacr = sqrtf(d);	// ����
	if (Contacr < (r_1 + r_2)) {
		printf("��̓_�̋�����%f�ł�\n", Contacr);
		printf("��̉~�͏Փ˂��Ă��܂�\n");
	}
	else if (Contacr == (r_1 + r_2)) {
		printf("��̓_�̋�����%f�ł�\n", Contacr);
		printf("��̉~�͐ڂ��Ă��܂�\n");
	}
	if (Contacr > (r_1 + r_2)) {
		printf("��̓_�̋�����%f�ł�\n", Contacr);
		printf("��̉~�͏Փ˂��Ă��܂���\n");
	}
	return 0;
}