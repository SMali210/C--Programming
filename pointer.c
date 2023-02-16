#include<stdio.h>

int main()
{
      int No1 = 10;
      int *p = &No1;
      int *r = &No1; //multiple pointer points to single variable 
//no is variable of type integer initalise  with the value 11
//p is  pointer which holds the address of integer and  currently its holds address of variable No1
      int No2 = 20;
      int *q = &No2;

      printf("value of No1 is %d\n",*p);

// * refernce opertor - by using this opertor we can fetch the data which is stored in the memory 
//whos address is stored in the pointer

      return  0;
}