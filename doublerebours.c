#include <stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <assert.h>

int main(int argc, char** argv)
{
	if(fork()){
		execl("./rebours","./rebours",argv[1],NULL);
	}else{
		execl("./rebours","./rebours",argv[2],NULL);
	}
	return 0;
}
