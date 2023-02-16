#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
      char Fname [20];
      int fd = 0;
      char Data [100];
      int Length = 0;

      printf("Enter the file name :\n");
      scanf("%s",Fname);

      fd = open(Fname,O_RDWR);

      if(fd == -1)
      {
            return -1;
      }

     while((Length = read(fd,Data,sizeof(Data)))!=0)
     {
            write(1,Data,Length); //

     }

      return 0;
}
