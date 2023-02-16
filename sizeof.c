#include<stdio.h>

int main()
{

      int No1 = 10;
      char ch = 's';
      float f = 10.5;
      double d = 15.25;;

      printf("value of No1 %d\n",No1);
      printf("value of ch %c\n",ch);
      printf("value of float %f\n",f);
      printf("value of double %lf\n",d);
//sizeof operator it is gives the  size of any data type  in bytes //its depends on platform and architecher

      printf("size of integer is %d\n",sizeof(No1));
      printf("size of charecter is %d\n",sizeof(ch));
      printf("size of float is %d\n",sizeof(f));
      printf("size of double is %d\n",sizeof(d));

//address opertor(&)this opertor gives the address of any variable .//these address gets changedfor each time

      printf("address of integer No1 is %p\n",&No1);
      printf("address of ch %p\n",&ch);
      printf("address of f %p\n",&f);
      printf("address of d %p\n ",&d);


      return 0;
}