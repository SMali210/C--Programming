#include<stdio.h>
int Addition(float ivalue1,float ivalue2)
{
      float ioutput = 0;
      ioutput = ivalue1 + ivalue2;
      return ioutput;
}
int main()
{
      float No1 = 0;
      printf("Enter the first Number No1\n");
      scanf("%f",&No1);

      float No2 = 0;
      printf("Enter the second number No2\n");
      scanf("%f",&No2);

      float Ans = 0;
      Ans = Addition(No1,No2);

      printf("size of first number %d\n",sizeof(No1));
      printf("address of second number is %p\n",&No2);

      printf("Addition of two number %f\n",Ans);


      return 0;
}