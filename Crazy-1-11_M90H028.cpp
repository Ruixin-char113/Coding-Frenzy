#include <stdio.h>

int main()
{
	double a1, a2, b1, b2;
	scanf("%lf%lf%lf%lf", &a1, &a2, &b1, &b2);

	if ((int)(a1 + b1) % 2 != 0)
		printf("(%.1lf,", (a1 + b1) / 2);
	else
		printf("(%.0lf,", (a1 + b1) / 2);

	if ((int)(a2 + b2) % 2 != 0)
		printf("%.1lf)", (a2 + b2) / 2);
	else
		printf("%.0lf)", (a2 + b2) / 2);
}