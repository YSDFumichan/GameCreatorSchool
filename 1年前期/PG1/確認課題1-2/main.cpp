#include <iostream>

int main() {
	const char* name = "吉田文也";	// 名前
	int age = 20;					// 年齢
	float height = 166.7f;			// 身長
	// %s = 文字列(const char*), %d = 整数(int), %f = 実数(float)%.1fは小数点1桁目まで
	printf("%s（%d歳）身長（%.1fcm）\n", name, age, height);
	return 0;
}