#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>

int main(){
	void *handler;
	void (*initstart)(void);
	void (*endexit)(void);
	puts("\ec\e[47;31m\n\n");
	handler=dlopen("./module1.so",RTLD_LAZY);
	if (!handler){
		puts("error on load lib");
		exit(1);
	}
	initstart=dlsym(handler,"init");
	if(dlerror()!=NULL){
		puts("error on load function");
		exit(1);
	}
	endexit=dlsym(handler,"endexit");
	if(dlerror()!=NULL){
		puts("error on load function");
		exit(1);
	}
	initstart();
	endexit();
	dlclose(handler);
	return 0;
}
