#include<stdio.h>

int main()
{
      int Arr[4] = {10,20,30,40};   ///memeber initalistion list
      int Brr[5];
      Brr[0]= 10;
      Brr[1]= 20;  //member by member initalistion
      Brr[2]= 30;  

      printf("value of array is %d\n",Arr[1]);
      printf("value of Brr of Array is %d\n",Brr[2]);

      return 0;

}