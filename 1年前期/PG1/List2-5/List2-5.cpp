#include <iostream>

int main() {
	int n;
	printf("整数値：");
	scanf_s("%d", &n);	// 整数を取得
	if (n > 0) printf("その値は正です。\n");
	else if (n < 0) printf("その値は負です。\n");
	else printf("その値はゼロです。\n");
	return 0;
}