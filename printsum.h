/*
 * =====================================================================================
 *
 *       Filename:  printsum.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/5/21 09:50:44 अपराह्न +0545
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

// header files
#include<stdio.h> // print(), scanf()
#include<conio.h> // getch()
int print_sum() //function defination
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

