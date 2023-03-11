 /*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* average.c (Chapter 9, page 185) */
/* Computes pairwise averages of three numbers */

#include <stdio.h>

double average(double a, double b,double c);/* DECLARATION */


int main(void)
{
  double x, y, z;

  printf("Enter three numbers: ");
  scanf("%lf%lf%lf", &x, &y, &z);
  printf("Average is %.2f.\n", average(x, y, z));
  

  return 0;
}

double average(double a, double b,double c)
{
  return (a + b+ c) / 3;
}
