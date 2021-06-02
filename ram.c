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
	int dl, phy , math , cprogram, iit, per;
	printf("\n enter marks of dl: \t");
	scanf("%d", &dl);
	printf("\n enter marks of phy: \t");
	scanf("%d", &phy);
	printf("\n enter marks of math: \t");
	scanf("%d", &math);
	printf("\n enter marks of cprogram: \t");
	scanf("%d", &cprogram);
	printf("\n enter marks of iit: \t");
	scanf("%d", &iit);
	per=(dl+phy+math+cprogram+iit)/5;
	if(per>=80)
	{
		printf("\n distinction");
	}
	else if(per<80 && per>=70)
	{
		printf("\n first division");
	}
	else if(per<70 && per>=60)
	{
		printf("\n second division");
	}
	else if(per<60 && per>=50)
	{
		printf("\n third division");
	}
		
	
}

