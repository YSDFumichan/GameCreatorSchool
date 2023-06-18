#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	// 模擬乱数のシード
	srand(time(NULL));
	// サイコロの出目
	int result = (rand() % 6) + 1;
	// 出力
	printf("サイコロの目 : %d\n", result);
	return 0;
}