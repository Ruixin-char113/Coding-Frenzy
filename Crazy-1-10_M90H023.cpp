#include <stdio.h>

int main()
{
	double a1, a2, b1, b2, c1, c2;
	scanf("%lf%lf%lf%lf%lf%lf", &a1, &a2, &b1, &b2, &c1, &c2);

	printf("(%.3lf,%.3lf)", (a1 + b1 + c1) / 3, (a2 + b2 + c2) / 3);
}