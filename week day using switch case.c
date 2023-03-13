/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a;
  printf("enter the no.");
  scanf("%d",&a);
  switch(a)
  {
      case 1:
      printf("the day is monday");
       break;
      case 2 :
      printf("the day is tuesday");
       break;
      case 3:
      printf("the day is wednesday");
       break;
      case 4 :
      printf("the day is thrusday");
       break;
      case 5:
      printf("the day is friday");
       break;
      case 6:
      printf("the day is saturday");
       break;
      case 7:
      printf("the day is sunday");
      break;
      
  
default:
printf("invalid entry");
}

    return 0;
}
