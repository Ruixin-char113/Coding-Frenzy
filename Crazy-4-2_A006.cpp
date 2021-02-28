#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	if (N > 0)
		printf("N>0");
	else if (N < 0)
		printf("N<0");
	else
		printf("N=0");
}
