#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,i=0;
	printf("Enter any no:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
    {
    	if(i*i>=a)
    	{
    		if(a%i==0)
    		break;
    		else
    		printf("prime");
    	 
		}
		
	}
	printf("its not prime");
	
	
}
