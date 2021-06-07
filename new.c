/*Enter any 10 number and display only these number which are prime.   

Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a, num, n, sum;
	printf("\n enter the number: ");
	scanf("%d", &a);
	
	sum=0;
	while(a>0){
		num=a%10;
		n=1;
		while(num>0){
			n=n*num;
			num=num-1;
			printf("\n the number is %d", num);
		}
		sum=sum+n;
		a=a/10;
		
	}
	//if(sum!=a){
	//		printf("\n the number is not armstrong number");
	//	}
	//else{
	//		printf("\n the number is armstrong number");
	//	}
	return 0;
}
