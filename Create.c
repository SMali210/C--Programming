#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int CreatFile(char Name[])
{
      int fd = 0;
      fd = creat(Name ,0777);
      return fd;
}

int main()
{
      char Fname[20];
      int fd = 0;

      printf("Enter The file name\n");
      scanf("%s",Fname);

      fd = CreatFile(Fname);

      if(fd== -1)
      {
            printf("Unable to craete file\n");
      }
      else
      {
            printf("Sucessfuly Create File \n");
      }

      return 0;
}