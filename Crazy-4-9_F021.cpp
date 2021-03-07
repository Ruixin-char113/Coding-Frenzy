#include <stdio.h>

int main()
{
	int input;

	scanf("%d", &input);

	if (input % 2 == 1)
		printf("odd");
	else
		printf("even");
}