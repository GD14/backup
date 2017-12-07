#include "rong.h"


int main(void)
{
	int n;
	int buf[MAXLINE];

	while( (n = read(STDIN_FILENO,buf,MAXLINE))>0)
		if(write(STDOUT_FILENO,buf,n)!= n)
			err_sys("write error");
    if (n < 0 )
		err_sys("read error");

	exit(0);
}
