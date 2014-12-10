#include <stdio.h>
#include <stdlib.h>

typedef struct logntr {
	FILE* file;
	char* msg;
} et_logentry;

int et_savelog(et_logentry* logEntry);