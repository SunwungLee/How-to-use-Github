#include <stdio.h>

void foo1()
{
	printf("1st corr another branch");
	printf("2nd bug456 correct");
	return;
}

void main(void)
{
	printf("git test\n");
	printf("3rd correction 1,2 erased");
	foo();
	return;
}
