/**
	**	ETES - Executor De Testes Extremamente Simples (Extremely Simple Test Runner)
	**	@author: Bernardo Lins
	**	@contact: bernardolins28@gmail.com
**/

#include "et_error.h"
#include "et_executor.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{	
	if(argc < 5) {
		et_prnterr(ETERNOINP);
	}

	et_call(atoi(argv[1]), (char*)argv[2], (char*)argv[3], (char*)argv[4]);

	return 0;
}