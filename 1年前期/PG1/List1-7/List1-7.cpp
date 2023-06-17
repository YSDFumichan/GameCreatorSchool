#include <iostream>

int main() {
	int x;	// 整数型x
	int y;	// 整数型y
	x = 63;	// xの中身は63
	y = 18;	// yの中身は18
	// 変数の値を出力
	printf("xの値は%dです。\n", x);
	printf("yの値は%dです。\n", y);
	// xとyの和を出力
	printf("合計は%dです。\n", x + y);
	// xとyの平均を出力
	printf("平均は%dです。\n", (x + y) / 2);
	return 0;
}