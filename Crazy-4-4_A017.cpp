/*
isosceles righttriangle
isosceles triangle
not a triangle
regular triangle
rectangular triangle
obtuse triangle
acute triangle
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	int tmp;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
		{tmp = a; a = b; b = tmp;}
	if (b > c)
		{tmp = b; b = c; c = tmp;}
	if (a > c)
		{tmp = c; c = a; a = tmp;}
	if (a > b)
		{tmp = a; a = b; b = tmp;}

	if (a + b <= c)
		printf("not a triangle");					//非三角形
	else if ((a == b || b == c || c == a) && pow(a, 2) + pow(b, 2) == pow(c, 2))
		printf("isosceles righttriangle");			//等腰直角三角形
	else if (a == b && b == c)
		printf("regular triangle");					//正三角形
	else if (a == b || b == c || c == a)
		printf("isosceles triangle");				//等腰三角形
	else if (pow(a, 2) + pow(b, 2) == pow(c, 2))
		printf("rectangular triangle");				//直角三角形
	else if (pow(a, 2) + pow(b, 2) > pow(c, 2))
		printf("acute triangle");					//銳角三角形
	else if (pow(a, 2) + pow(b, 2) < pow(c, 2))
		printf("obtuse triangle");					//鈍角三角形
}