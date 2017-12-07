#include "rong.h"
#include <fcntl.h>


int main(int argc,char*argv[]){
	char 	buf[MAXLINE];

	if(argc!=2)
		err_quit("usage a.out finename");
	
	int fd;
	if((fd=open(argv[1],O_RDONLY))<0)
		err_sys("open error");
	
	int n;
	while((n=read(fd,buf,MAXLINE))>0)
		if(write(STDOUT_FILENO,buf,n)!=n)
			err_sys("write error\n");
	exit(0);
}
