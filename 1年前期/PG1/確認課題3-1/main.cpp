#include <iostream>

int main() {
	int age;	// 年齢
	printf("年齢を入力してください->");
	scanf_s("%d", &age);		// 年齢を取得
	if (age >= 126)		printf("生きてますか～\n");		// 126歳以上は生きてる？
	else if (age >= 75) printf("老年\n");				// 75歳以上,125歳以下は老年
	else if (age >= 65) printf("高年\n");				// 65歳以上,74歳以下は高年
	else if (age >= 45) printf("中年期\n");				// 45歳以上,64歳以下は中年期
	else if (age >= 30) {
		if (age != 40)	printf("壮年期\n");				// 30歳以上,44歳以下は壮年期
		else			printf("初老\n");				// 40歳は初老
	}
	else if (age >= 15) {
		if (age != 20)	printf("青年期\n");				// 15歳以上,29歳以下は青年期
		else			printf("二十歳は特別！！！\n");	// 20歳は特別
	}
	else if (age >= 5)	printf("少年期\n");				// 5歳以上,14歳以下は少年期
	else if (age >= 0)	printf("幼年期\n");				// 0歳以上,4歳以下は幼少期
	else if (age < 0) 	printf("生まれていない\n");		// 0歳未満は生まれてない
	return 0;

}