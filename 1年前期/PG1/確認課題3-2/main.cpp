#include <iostream>

int main() {
	// 模擬乱数のシード
	srand(time(NULL));
	int player;
	int enemy;
	const int ROCK = 0;		// グー
	const int CAESAR = 1;	// チョキ
	const int PAPER = 2;	// パー
	printf("じゃんけんをします\n");
	printf("最初はぐ～、じゃんけんぽい\n");
	while (true) {
		while (true) {
			printf("プレイヤーの手を数字で入力！(グー:0 チョキ:1 パー:2)->");
			scanf_s("%d", &player);	// プレイヤーの手を取得
			if (player >= 0 && player <= 2) break;
			else	printf("正しい数字を入力してください！\n");	// 警告文
		}
		enemy = rand() % 3;	// エネミーの手を乱数で取得
		printf("プレイヤーの手は");
		if (player == ROCK)			printf("グー\n");
		else if (player == CAESAR)	printf("チョキ\n");
		else if (player == PAPER)	printf("パー\n");
		printf("敵の手は");
		if (enemy == ROCK)			printf("グー\n");
		else if (enemy == CAESAR)	printf("チョキ\n");
		else if (enemy == PAPER)	printf("パー\n");
		ROCK == PAPER;
		if (player == enemy) {
			printf("引き分けです\n");
			printf("あいこでしょ\n");
		}
		else break;
	}
	if ((player == ROCK) && (enemy == CAESAR) ||
		(player == CAESAR) && (enemy == PAPER) ||
		(player == PAPER) && (enemy == ROCK)) {
		printf("プレイヤーの勝ちです\n");
	}
	else if ((player == ROCK) && (enemy == PAPER) ||
		(player == CAESAR) && (enemy == CAESAR) ||
		(player == PAPER) && (enemy == ROCK)) {
		printf("プレイヤーの負けです\n");
	}
	return 0;
}