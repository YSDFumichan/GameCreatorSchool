#include<iostream>

int main() {
	int n;
	printf("整数値");
	scanf_s("%d", &n);	// 整数を取得
	if (n > 0)	printf("その値は正です。\n");
	return 0;
}