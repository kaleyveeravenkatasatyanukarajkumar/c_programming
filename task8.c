#include <stdio.h>
#include <string.h>
 void main()
{
  int num; 	
	int i;
	
	
	printf("Enter your number: ");
	scanf("%d",&num);
	i=1;
	while(i<=20)
	{
		printf("%d\n",(num*i));
		i++; 
	}
	
  
}
