#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=26;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c\t",j+64);
			
		}
		printf("\n");
	}
}