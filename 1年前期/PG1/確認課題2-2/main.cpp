#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int moji;	// 文字取得用変数
	printf("文字を入力してください->");
	while ((moji = getchar()) != EOF) {
		switch (moji) {
		case 'a':
		case 'A':
			printf("アクセル\n");
			break;
		case 'b':
		case 'B':
			printf("バード\n");
			break;
		case 'c':
		case 'C':
			printf("サイクロン\n");
			break;
		case 'd':
		case 'D':
			printf("ダミー\n");
			break;
		case 'e':
		case 'E':
			printf("エターナル\n");
			break;
		case 'f':
		case 'F':
			printf("ファング\n");
			break;
		case 'g':
		case 'G':
			printf("ジーン\n");
			break;
		case 'h':
		case 'H':
			printf("ヒート\n");
			break;
		case 'i':
		case 'I':
			printf("アイスエイジ\n");
			break;
		case 'j':
		case 'J':
			printf("ジョーカー\n");
			break;
		case 'k':
		case 'K':
			printf("キー\n");
			break;
		case 'l':
		case 'L':
			printf("ルナ\n");
			break;
		case 'm':
		case 'M':
			printf("メタル\n");
			break;
		case 'n':
		case 'N':
			printf("ナスカ\n");
			break;
		case 'o':
		case 'O':
			printf("オーシャン\n");
			break;
		case 'p':
		case 'P':
			printf("パペティアー\n");
			break;
		case 'q':
		case 'Q':
			printf("クイーン\n");
			break;
		case 'r':
		case 'R':
			printf("ロケット\n");
			break;
		case 's':
		case 'S':
			printf("スカル\n");
			break;
		case 't':
		case 'T':
			printf("トリガー\n");
			break;
		case 'u':
		case 'U':
			printf("ユニコーン\n");
			break;
		case 'v':
		case 'V':
			printf("バイオレンス\n");
			break;
		case 'w':
		case 'W':
			printf("ウェザー\n");
			break;
		case 'x':
		case 'X':
			printf("エクストリーム\n");
			break;
		case 'y':
		case 'Y':
			printf("イエスダディ\n");
			break;
		case 'z':
		case 'Z':
			printf("ゾーン\n");
			break;
		case '\n':
			printf("文字を入力してください->");
			break;
		default:
			printf("この文字は使われていません。\n");
			printf("Ctrl + Zで終了\n");
			break;
		}
	}
	return 0;
}