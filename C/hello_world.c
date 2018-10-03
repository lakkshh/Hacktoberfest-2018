#include <stdio.h>

// Simple hello world program
// Build with
// gcc -o hello_world hello_world.c
// and run with
// ./hello_world
int main(void)
{
    int a;
	scanf("%d",&a);
	if(a==1)
	printf("HELLO WORLD!!!!!\n");
    else
    printf("wrong entry");
	return 0;
}
