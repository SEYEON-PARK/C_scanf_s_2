#include <stdio.h>

int main()
{
	int a;
	char b;
	float c;
	double d;
	long e;

	printf("int char float double long 순서대로 입력하시오.");
	scanf_s("%d %c %f %lf %d", &a, &b, sizeof(b), &c, &d, &e);
	printf("%d %c %f %lf %d", a, b, c, d, e);

	return 0;
}