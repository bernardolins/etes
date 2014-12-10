#include "et_executor.h"

void et_call(int num, char* path, char* input, char* output) {
    int i;
    pid_t pid;
    char buffer[8];
    char compath[512]; //complete path
	
	
    
    for(i = 0; i < num; i++) {

    	sprintf(buffer, "%d", i+1);
    	strcpy(compath, path);
    	strcat(compath, "/");
    	strcat(compath, buffer);
    	strcat(compath, "/src/test");

    	char* argv[4] = { compath, input, output, NULL };
    	char* env[1] = { NULL };

    	//printf("---etes says: running %s\n", compath);	
	    if((fork()) > 0) {
			printf("%d\n", execve(compath, argv, env));
			break;
	    }
    }

    //collecting children
    while((pid = waitpid(-1, NULL, 0)) > 0);
}