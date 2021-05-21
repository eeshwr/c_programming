/*
 * =====================================================================================
 *
 *       Filename:  hello.c
 *
 *    Description: 
 *
 *        Version:  1.0
 *        Created:  20/5/21 08:44:50 अपराह्न +0545
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

/*If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   	int a,b,c;
	printf("\n enter a");
    scanf("%d", &a);
    printf("\n enter b");
    scanf("%d", &b);
    printf("\n enter c");
    scanf("%d", &c);
    if((a>b && a>c && b+c>a) || (b>c && b>a && a+c>b) || (c>a && c>b && a+b>c))
    	printf("\n the triangle is valid");
    else
    	printf("\n the triangle is not valid");
    		
    	
}

