#include<stdio.h>

int main()
{
      int Arr[5]={10,20,30,40,50};
      
      
      int  *p = &Arr[0];
      int *q = &Arr[3];
      
      printf("address of whole arry %p\n",&Arr);
      printf("address of whole arry %p\n",&Arr[0]);
      printf("address of whole arry %p\n",&Arr[3]);
      return 0;
}