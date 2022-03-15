#include <stdio.h>
#include <stdlib.h>
void endexit(void);
void init(void);
void init(void){
	puts("\ec\e[47;30m\nmodule init\n");
}
void endexit(void){
	puts("\e[47;30m\nmodule ends\n");
}
