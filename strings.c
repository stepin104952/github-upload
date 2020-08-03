#include<stdio.h>
#include<conio.h>
float a,b;
void main()
{
 int array[10];
 int i;
 printf("Enter the no.s of the required array");
 for(i=0;i<10;i++)
 {
 	scanf("\n %d",&array[i]);
 }
 
 int s=0;
 
 for(i=0;i<10;i++)
 {
 

 	s=s+array[i];
 	
}
printf("\n%d",s);
a=s;
b=a/10;

printf("\nThe average is= %f",a);


}
