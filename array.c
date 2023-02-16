#include<stdio.h>

int main()
{
    int Arr[5]={10,20,30,40};
//name of array is internally consider as based address of first element of that array
      printf("Base address of array is %p\n",Arr); 
      printf("Base address of array is %p\n",&Arr);
      printf("size of whole array is %d\n",sizeof(Arr));

      printf("%d\n",Arr[0]);
      printf("%d\n",Arr[2]);
//array is internaly consider as pointer /we can access and featch the value oa array using 
//subscript opertor i.e []
      return 0;

}