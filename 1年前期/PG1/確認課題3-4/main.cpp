#include <iostream>

int main(void) {
	// 円の情報
	float x_1, x_2;	// X軸の座標
	float y_1, y_2;	// Y軸の座標
	float r_1, r_2;	// 半径
	// 1つ目の円の情報を取得
	printf("1つめの円の座標を入力してください (例：3, 4 ->");
	scanf_s("%f, %f", &x_1, &y_1);	// X,Y座標取得
	printf("1つめの円の半径を入力してください (例：4.5 ->");
	scanf_s("%f", &r_1);	// 半径を取得
	// 2つ目の円の情報を取得
	printf("2つめの円の座標を入力してください (例：3, 4 ->");
	scanf_s("%f, %f", &x_2, &y_2);	// X,Y座標取得
	printf("2つめの円の半径を入力してください (例：4.5 ->");
	scanf_s("%f", &r_2);	// 半径
	float dx = x_1 - x_2;	// X座標の距離
	float dy = y_1 - y_2;	// Y座標の距離
	float d = dx * dx + dy * dy;	// 距離
	float Contacr = sqrtf(d);	// 距離
	if (Contacr < (r_1 + r_2)) {
		printf("二つの点の距離は%fです\n", Contacr);
		printf("二つの円は衝突しています\n");
	}
	else if (Contacr == (r_1 + r_2)) {
		printf("二つの点の距離は%fです\n", Contacr);
		printf("二つの円は接しています\n");
	}
	if (Contacr > (r_1 + r_2)) {
		printf("二つの点の距離は%fです\n", Contacr);
		printf("二つの円は衝突していません\n");
	}
	return 0;
}