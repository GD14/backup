#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(void){

    printf("hello world form process %ld\n",(long)getpid());

return 0;
}
