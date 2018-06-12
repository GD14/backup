#include "rong.h"

char line[MAXLINE];

int main(){
		
	int 	fd[2];
	pid_t 	pid;
	int 	n;

	if(pipe(fd)<0)
		err_sys("pipe error");
	if((pid=fork())<0)
		err_sys("fork error");
	else if (pid>0){
		write(fd[1],"a",1);		
		waitpid(pid,NULL,0);
		n=read(fd[0],line,MAXLINE);
		write(STDOUT_FILENO,line,n);

	}else {
		write(fd[1],"b",1);	
	}
	exit(0);	
}
