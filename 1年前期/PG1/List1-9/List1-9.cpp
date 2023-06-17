#include <iostream>

int main() {
	int x = 63;	// 整数型xで中身は63
	int y = 18;	// 整数型yで中身は18
	// 変数の値を出力
	printf("xの値は%dです。\n", x);
	printf("yの値は%dです。\n", y);
	// xとyの和を出力
	printf("合計は%dです。\n", x + y);
	// xとyの平均を出力
	printf("平均は%dです。\n", (x + y) / 2);
	return 0;
}