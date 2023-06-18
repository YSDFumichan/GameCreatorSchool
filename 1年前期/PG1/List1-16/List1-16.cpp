#include <iostream>

int main() {
	// 模擬乱数のシード
	srand(time(NULL));
	int lucky = rand() % 10;	// 乱数を取得
	printf("今日のラッキーナンバーは%dです。\n", lucky);
	return 0;
}