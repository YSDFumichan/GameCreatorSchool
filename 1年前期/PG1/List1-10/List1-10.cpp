#include <iostream>

int main() {
	int x;
	int y;
	printf("xとyを加減乗除します。\n");
	printf("xの値 : ");
	scanf_s("%d", &x);	// xの値を取得
	printf("yの値 : ");
	scanf_s("%d", &y);	// yの値を取得
	// 加算
	printf("x + yは%dです。\n", x + y);
	// 減算
	printf("x - yは%dです。\n", x - y);
	// 乗算
	printf("x * yは%dです。\n", x * y);
	// 除算
	printf("x / yは%dです。\n", x / y);
	// 余り算
	printf("x % yは%dです。\n", x % y);
	return 0;
}