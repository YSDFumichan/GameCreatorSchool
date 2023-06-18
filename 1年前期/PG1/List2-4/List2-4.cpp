#include<iostream>

int main() {
	int n;
	printf("整数値：");
	scanf_s("%d", &n);	// 整数を取得
	if (!n)	printf("その値はゼロです。\n");
	else printf("その値はゼロではありません。\n");
	return 0;
}