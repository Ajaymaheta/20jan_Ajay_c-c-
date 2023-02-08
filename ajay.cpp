#include<stdio.h>
main()
{
	int year;
	printf("enter your brith year");
	scanf("%d",&year);
	if (year<2004)
	{
		printf("You are able to vote");
	}
	else{
		printf("You are not able to vote");
	}
}
