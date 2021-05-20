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


#include<stdio.h>
#include<conio.h>
int print_sum();
void main()
{
   print_sum(); 
}
int print_sum()
{
    int a, b, sum;
    printf("\n enter a:");
    scanf("%d", &a);
    printf("\n enter b:");
    scanf("%d", &b);
    sum=a+b;
    printf("sum of the number is %d", sum);
    getch();
}

