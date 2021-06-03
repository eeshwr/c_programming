//21 Matchstick Game: C Program
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int n, c, a;
	n=21;
	while(1){
		printf("\n the number of stick : %d", n);
		printf("\n pick the 1 or 2 or 3 or 4 stick:");
		scanf("%d", &a);
		if(a>4 || a<1)
			continue;
		n=n-a;
		printf("\n the number of stick left is %d",n );
		c=5-a;
		printf("\n the number of stick picked by CPU is : %d", c);
		n=n-c;
		printf("\n the number of stick left is %d",n );
			
		if(n==1){
			printf("\n the number of stick left: %d", n);
			printf("\n you lose");
			break;
		}
				
	}
}
