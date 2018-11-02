#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x = 100;
	int y = addbyone(&x);
	printf("x=%d\n", x);
	system("pause");
	return 0;
}
int addbyone(int* xptr)
{
	(*xptr)++;
	printf("x=%d\n", *xptr);
	return *xptr;
}