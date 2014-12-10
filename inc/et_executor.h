/**
	**	ETES - Executor De Testes Extremamente Simples (Extremely Simple Test Runner)
	**	@author: Bernardo Lins
	**	@contact: bernardolins28@gmail.com

	Executor - Calls the group of compiled files who need to be tested
**/

#include <unistd.h> //execve
#include <sys/types.h> //fork
#include <sys/wait.h> //waitpid
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "et_recorder.h"

///call the program to be tested. You need to
/// pass the number of mutants, the path of mutants and the input file
void et_call(int num, char* path, char* input, char* output);

void et_handler();
