#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main(int argc ,char *argv[])
{
     
      int fd = 0;
      char Data [100];
      int Length = 0;

      fd = open(argv[1],O_RDWR);

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
