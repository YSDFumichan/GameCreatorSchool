#include <iostream>

int main() {
	char c;	// 文字
	printf("文字を入力してください : ");
	scanf_s("%c", &c);	// 文字を取得
	printf("打ち込んだ文字は%cです。\n", c);
	return 0;
}