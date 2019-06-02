#include "hello.h"
#include <stdlib.h>

int main()
{
	if( sayHello() < 0 ){
		return EXIT_FAILURE;
	}else{
		return EXIT_SUCCESS;
	}
}
