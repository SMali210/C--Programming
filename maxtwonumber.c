/*
* c program two find maximu between two numbers
*/

#include<stdio.h>

int main()
{
      int num1;
      int num2;

      printf("Enter two numbers\n");
      scanf("%d",&num1);
      scanf("%d",&num2);

      //if num1 is maximum
      if(num1 > num2)
      {
            printf("%d is maximum ",num1);

      }
      //if num2 is maximum 
      if(num2 > num1)
      {

            printf("%d is maximum ",num2);
      }
      if(num1 == num2)
      {
            printf("Both are equal \n");
      }

      return 0;
}