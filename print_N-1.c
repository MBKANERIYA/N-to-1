#include<stdio.h>

main()
{
	int n;
	
	printf("Enter value N = ");
	scanf("%d",&n);
	
	while(n>=1)
	{
		printf("%d\n",n);
		n--;
	}
}