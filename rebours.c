#include <stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <assert.h>


int main(int argc, char** argv)
{
    printf("Bonjour je suis '%s'\n",argv[0]);
    int pid = getpid();
    int nb = atoi(argv[1]);
    assert(nb>0);
    printf("%d: debut\n\r",pid);
    for(;nb>0;nb--)
    {
      printf("%d: %d\n\r",pid,nb);
      sleep(1);
    }
    printf("%d: fin\n\r",pid);
	
    return 0;
}
