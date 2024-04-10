#include <stdio.h>
#include <stdlib.h>
void endexit(void);
void init(void);
void init(void){
	puts("\ec\e[43;37m\nmodule init\n");
}
void endexit(void){
	puts("\e[43;37m\nmodule ends\n");
}
