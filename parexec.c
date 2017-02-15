#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <assert.h>
#include <sys/wait.h>



int main(int argc, char** argv)
{
  	printf("Bonjour je suis '%s'\n",argv[0]);
	int N=atoi(argv[2]);
	int nb_cours=0;
	int i = 3;
	int* status=(int *) malloc(sizeof(int));
	for(;i<argc;i++)
	{
		if(nb_cours==N){
			wait(status);
			if(*status){
				//nb_cours--;
				//break;
				execl("/bin/kill","kill","0",NULL);			
			}	
		}else{
			nb_cours++;		
		}
		if(!fork())
		{	
			execl(argv[1],argv[1],argv[i],NULL);
		}	
	}
	while(nb_cours>0)
	{
		wait(status);
		if(*status){
			execl("/bin/kill","kill","0",NULL);			
		}
		nb_cours--;
	}
	return 0;
}
