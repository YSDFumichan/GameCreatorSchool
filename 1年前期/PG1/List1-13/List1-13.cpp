#include <iostream>

int main() {
	double x;
	double y;
	printf("xとyを加減乗除します。\n");
	printf("xの値 : ");
	scanf_s("%lf", &x);	// xの値を取得
	printf("yの値 : ");
	scanf_s("%lf", &y);	// yの値を取得
	// 加算
	printf("x + yは%lfです。\n", x + y);
	// 減算
	printf("x - yは%lfです。\n", x - y);
	// 乗算
	printf("x * yは%lfです。\n", x * y);
	// 除算
	printf("x / yは%lfです。\n", x / y);
	return 0;
}