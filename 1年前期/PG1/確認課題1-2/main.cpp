#include <stdio.h>

int main(void) {
	const char* name = "吉田 文也";	// 名前
	int age = 20;	// 年齢
	float height = 166.7f;	// 身長
	//%s = 文字列, %d = 整数(int), %f = 実数(float)
	printf("%s（%d歳）身長（%.1fcm）\n", name, age, height);
}