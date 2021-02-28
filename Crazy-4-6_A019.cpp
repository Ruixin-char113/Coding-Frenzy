#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);
	if (100 >= input && input >= 90)
		printf("A+");
	if (90 > input && input >= 80)
		printf("A");
	if (80 > input && input >= 70)
		printf("B");
	if (70 >= input && input >= 60)
		printf("C");
	if (60 >= input && input >= 0)
		printf("D");
}