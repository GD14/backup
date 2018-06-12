#include "rong.h"

int main(void){
	char*ptr;
	size_t size=200;
	ptr=calloc(size,sizeof(char));
	char *str=getcwd(ptr,size);
	printf("%s\n",str);
	return 0;
}
