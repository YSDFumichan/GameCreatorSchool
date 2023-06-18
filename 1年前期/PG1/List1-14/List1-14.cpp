#include <iostream>

int main() {
	double r;	// ”¼Œa
	printf("”¼Œa : ");
	scanf_s("%lf", &r);	// ”¼Œa‚ğæ“¾
	printf("‰~ü‚Ì’·‚³‚Í%f‚Å‚·B\n", 2.0f * 3.14f * r);
	printf("–ÊÏ‚Í%f‚Å‚·B\n", 3.14 * r * r);
	return 0;
}