#include "et_error.h"

void et_prnterr(ET_CODE code) {
	switch(code) {
		case ETERNOINP: 
			printf("--etes error: invalid input! \n ---- try \"etes <number_of_tests> <path_to_tests>\"\n");
			exit(ETERNOINP);
		case ETERNOFILE:
			printf("--etes error: file not found! \n");
			break;
	}
}