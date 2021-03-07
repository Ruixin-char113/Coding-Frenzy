#include <stdio.h>

int main()
{
	int input;

	scanf("%d", &input);

	if (input % 400 == 0)
		printf("Yes");
	else if (input % 4 == 0 && input % 100 != 0)
		printf("Yes");
	else
		printf("No");
}