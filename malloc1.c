#include<stdio.h>
#include<stdlib.h>

struct Demo
{
      int i;
      float f;
      double d;
};

int main()
{
      struct Demo obj;

      struct Demo *ptr = NULL;
      ptr =(struct Demo*)malloc(sizeof(struct Demo));

      obj.i = 10;
      obj.f  = 11.2;
      obj.d  = 22.225;

      ptr->i = 10;
      ptr->f = 20.2;
      ptr->d = 21.222l;



      printf("%d\n",obj.i);
      printf("%f\n",obj.f);
      printf("%lf\n",obj.d);

      printf("%d\n",ptr->i);
      printf("%f\n",ptr->f);

      free(ptr);

      return 0;

}