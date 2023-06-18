#include <iostream>

int main() {
	int a, b;
	printf("整数a：");
	scanf_s("%d", &a);	// Aの整数を取得
	printf("整数b：");
	scanf_s("%d", &b);	// Bの整数を取得
	if (a == b) printf("二つの値は等しいです。\n");
	else printf("二つの値は等しくないです。\n");
	return 0;
}