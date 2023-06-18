#include <iostream>

int main() {
	const double PI = 3.1416;	// ‰~ü—¦
	double r;					// ”¼Œa
	printf("”¼Œa : ");
	scanf_s("%lf", &r);	// ”¼Œa‚ğæ“¾
	printf("‰~ü‚Ì’·‚³‚Í%f‚Å‚·B\n", 2 * PI * r);
	printf("–ÊÏ‚Í%f‚Å‚·B\n", PI * r * r);
	return 0;
}