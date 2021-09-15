#include<stdio.h>
int main(void)
{
	int f;
	int fact(int x);
	printf("\n how many factorial number you want ");
	scanf("%d",&f);
	printf("\n the factorial of %d is %d",f,fact(f));
}
int fact(int x)
{
if (x>0)
{
return(x*fact(x-1));
}
else
return 1;
}
