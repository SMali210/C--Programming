#include<stdio.h>
void Demo()
{
      int A = 0;
      printf("Enter the first value\n");
      scanf("%d",&A);
      A++;

      printf("value from Demo %d\n",A);
}
void Fun()
{
    static int B = 0;
    
    printf("Enter the  second value\n");
    scanf("%d",&B);
    B++;
       

      printf("value from Fun %d\n",B);


}
int main()
{
       
      Demo();
      Demo();

      Fun();
      Fun();

       return 0;
}