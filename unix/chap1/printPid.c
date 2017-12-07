#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main(void)
{
	pid_t n;
	printf("process ID %ld \n",(long)getpid());
	exit(0);
}
