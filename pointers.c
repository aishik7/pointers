#include <stdio.h>
int main()
{
	int x=20;
	int *p;
	p=&x; 
	printf("Value at address pointed by p: %d \n",*p);
	printf("Value of x: %d \n",x);
	printf("Address of x: %d \n",&x);
	printf("Value of p: %d \n",p);
	printf("Address of p: %d \n",&p);
return 0;
}
