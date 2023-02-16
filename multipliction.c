#include<stdio.h>

int Multipliction(int iNo1,int iNo2)
{
      int iAns = 0;
      iAns = iNo1 * iNo2;
      return iAns;
}
int main()
{

      int ivalue1 = 0;
      printf("Enter the first value\n");
      scanf("%d",&ivalue1);

      int ivalue2 = 0;
      printf("Enetr the second value\n");
      scanf("%d",&ivalue2);
      
      int Ret = 0;

      Ret = Multipliction(ivalue1,ivalue2);

      printf("Multipliction of two numbers %d",Ret);

      return 0;
}