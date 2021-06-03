/*Enter any 10 number and display only these number which are prime.   

Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a, b, i,x;
	printf("\n enter the number a: ");
	scanf("%d", &a);
	printf("\n enter the number b: ");
	scanf("%d", &b);
	i=1;
	x=b;
	while(b!=0){
		i=i*a;
		b=b-1;
	}
	printf("%d",i);
 	
}
