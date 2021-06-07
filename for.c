//Write a program to print all prime numbers from 1 to 300. (Hint:
//Use nested loops, break and continue)


#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n, i, num, number;
	n=1;
	for(n=1; n<=300; n++){
		for(i=2; i<n; i=i+1){
			num=n%i;
			if(n%i==0){
				break;
			}
			else{
				number=n;
				continue;
				
			}
			
		}
		printf("\n the prime number is %d", number);
	}
	
	
	return 0;
	
}
