/*Enter any 10 number and display only these number which are prime.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,i;
	printf("\n enter the number between 1 to 100: ");
	scanf("%d", &a);
	i=1;
	while(i<=100){
		if(a%i==0){
			printf("the factorial is %d\n", i);
		}
		i++;
	}
	return 0;
	
 	
}
