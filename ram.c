/*
 * =====================================================================================
 *
 *       Filename:  ram.c
 *
 *    Description: jjj 
 *
 *        Version:  1.0
 *        Created:  20/5/21 09:51:25 अपराह्न +0545
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 
 If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle.
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int a, b , c ,a_square, b_square, c_square;
	printf("\n enter side a: \t");
	scanf("%d", &a);
	printf("\n enter side b: \t");
	scanf("%d", &b);
	printf("\n enter side c: \t");
	scanf("%d", &c);
	if(a==b && b==c && c==a)
		printf("\n the triangle is equillibrium");
	else
	{
		if(a==b || b==c || c==a)
			printf("\n the triangle is isosceles");
		
		else
		{
			a_square = pow(a,2);
			b_square = pow(b,2);
			c_square = pow(c,2);
			
			if((a_square == (b_square+c_square)) || (b_square == (a_square + c_square)) || (c_square == (b_square+a_square)))
				printf("\n the triangle is right angled traingle");
			else
				printf("\n the triangle is scalene");
		}
	}
}

