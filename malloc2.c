#include<stdio.h>
#include<stdlib.h>

int main()
{
      int Arr[5] = {10,20,30,40,50};   //5*4=20 byte static memory gets allocte

      int *p = NULL;  

      p = (int *)malloc(sizeof(int)*5);  //dynamic memory gets allocate

      printf("value of the arry %d\n",Arr[0]); //10
      printf("size of array %d\n",sizeof(Arr));  //20
      free(p); //dynamic memory deallocte

      int size = 0; 
      int *Brr = NULL;

      printf("enter the size of array\n");
      scanf("%d",&size);

      Brr =(int *)malloc(sizeof(int)*size);

      free(Brr);
      
      printf("value of arry is %d\n",Arr[2]);

      return 0;
}