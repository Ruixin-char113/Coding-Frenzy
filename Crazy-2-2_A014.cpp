#include <stdio.h>
int main()
{
	int n, p, d;
	int ans;

	int i;

	scanf("%d%d%d", &n, &p, &d);

	ans = 1;
	for (i = 0; i < p; i++)
		ans = ans * (n % d) % d;

	printf("%d", ans);
}