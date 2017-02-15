#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <assert.h>
#include <sys/wait.h>



int main(int argc, char** argv)
{
  	printf("Bonjour je suis '%s'\n",argv[0]);
	int i = 2;
	for(;i<argc;i++)
	{
		if(!fork())
		{	
			execl(argv[1],argv[1],argv[i],NULL);
		}	
	}
	i=i-2;
	while(i>0)
	{
		wait(NULL);
		i--;
	}
	return 0;
}
