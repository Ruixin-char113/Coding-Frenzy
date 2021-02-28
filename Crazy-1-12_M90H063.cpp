#include <stdio.h>
#include <math.h>
int main()
{
	int a1, a2, a3;
	scanf("%d%d%d", &a1, &a2, &a3);
	
	printf("%g", -(pow(a2, 2) - 4 * a1 * a3) / (4 * a1));
}