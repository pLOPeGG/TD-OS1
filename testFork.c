#include<stdio.h>
#include<unistd.h>

void main(void)
{
  if(fork()){

  }else{
    fork();
    if(fork())
      {
        fork();
      }
    sleep(1);
  }
  printf("A");
}
