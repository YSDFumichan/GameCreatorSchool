#include <iostream>

int main(void) {
	// ‰~‚Ìî•ñ
	float x_1, x_2;	// X²‚ÌÀ•W
	float y_1, y_2;	// Y²‚ÌÀ•W
	float r_1, r_2;	// ”¼Œa
	// 1‚Â–Ú‚Ì‰~‚Ìî•ñ‚ğæ“¾
	printf("1‚Â‚ß‚Ì‰~‚ÌÀ•W‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ (—áF3, 4 ->");
	scanf_s("%f, %f", &x_1, &y_1);	// X,YÀ•Wæ“¾
	printf("1‚Â‚ß‚Ì‰~‚Ì”¼Œa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ (—áF4.5 ->");
	scanf_s("%f", &r_1);	// ”¼Œa‚ğæ“¾
	// 2‚Â–Ú‚Ì‰~‚Ìî•ñ‚ğæ“¾
	printf("2‚Â‚ß‚Ì‰~‚ÌÀ•W‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ (—áF3, 4 ->");
	scanf_s("%f, %f", &x_2, &y_2);	// X,YÀ•Wæ“¾
	printf("2‚Â‚ß‚Ì‰~‚Ì”¼Œa‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ (—áF4.5 ->");
	scanf_s("%f", &r_2);	// ”¼Œa
	float dx = x_1 - x_2;	// XÀ•W‚Ì‹——£
	float dy = y_1 - y_2;	// YÀ•W‚Ì‹——£
	float d = dx * dx + dy * dy;	// ‹——£
	float Contacr = sqrtf(d);	// ‹——£
	if (Contacr < (r_1 + r_2)) {
		printf("“ñ‚Â‚Ì“_‚Ì‹——£‚Í%f‚Å‚·\n", Contacr);
		printf("“ñ‚Â‚Ì‰~‚ÍÕ“Ë‚µ‚Ä‚¢‚Ü‚·\n");
	}
	else if (Contacr == (r_1 + r_2)) {
		printf("“ñ‚Â‚Ì“_‚Ì‹——£‚Í%f‚Å‚·\n", Contacr);
		printf("“ñ‚Â‚Ì‰~‚ÍÚ‚µ‚Ä‚¢‚Ü‚·\n");
	}
	if (Contacr > (r_1 + r_2)) {
		printf("“ñ‚Â‚Ì“_‚Ì‹——£‚Í%f‚Å‚·\n", Contacr);
		printf("“ñ‚Â‚Ì‰~‚ÍÕ“Ë‚µ‚Ä‚¢‚Ü‚¹‚ñ\n");
	}
	return 0;
}