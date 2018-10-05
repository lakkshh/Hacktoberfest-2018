#include <stdio.h>

// Simple hello world program
// Build with
// gcc -o hello_world hello_world.c
// and run with
// ./hello_world
int main()
{
    int a;
    printf("Hi...please enter 1 to see hello world in capital :");
    scanf("%d",&a);
    if(a==1)
	printf("Hello World!\n");
	else 
	printf("......");
    return 0;
}
