#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char** argv)
{
    printf("Bonjour je suis '%s'\n",argv[0]);

    int det = fork();
    int pid = getpid();

    if(det==0)
    {
      printf("%d:Bonjour je suis l'enfant\n",pid);
    }
    else
    {
      printf("%d:Bonjour je suis le parent\n",pid);
    }
    

    return 0;
}
