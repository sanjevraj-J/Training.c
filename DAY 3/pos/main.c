#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c;
	
	scanf("%d %d %d",&a, &b ,&c);
	
	
	if(a>b && a>c)
	{	
	    printf("a is greater");
	}
	else if (a<b && b>c)
	{
		printf("b is greater");
	}
	else {
		printf("c is greater");
	}

	return 0;
}