#include <iostream>

int main() {
	int a;
	printf("整数値 : ");
	scanf_s("%d", &a);	// 値を取得
	int b = -a;	// 反転
	printf("の符号を反転した値は%dです。\n", b);
	return 0;
}