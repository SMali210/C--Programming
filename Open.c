#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>


int OpenFile(char Name[])
{
      int fd = 0;

      fd = open(Name,O_RDWR);

      return fd;
}

int main()
{
      char Fname[20];
      int fd = 0;

      printf("Enter The File name\n");
      scanf("%s",Fname);

      fd = OpenFile(Fname);

      if(fd == -1)
      {
            printf("Unable to Open File \n");
      }
      else
      {
            printf("Successfuly Open file\n");
      }

      return 0;
}