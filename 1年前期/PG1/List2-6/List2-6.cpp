#include<iostream>

int main() {
	int n;
	printf("整数値：");
	scanf_s("%d", &n);	// 整数を取得
	if (n > 0) {
		if (n % 2 == 0) printf("その値は偶数です。\n");
		else printf("その値は奇数です。\n");
	}
	else printf("正ではない値が入力されています。\n");
	return 0;
}