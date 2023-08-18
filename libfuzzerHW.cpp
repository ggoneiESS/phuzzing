#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <iostream>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {

	std::cout << "Testing input " << data;

	if(    size > 0 && data[0] == 'H'
			&& size > 1 && data[1] == 'I'
			&& size > 2 && data[2] == '!'
	  )
		abort();	//	raise SIGABRT

	std::cout << " and it was ok" << std::endl;

  return 0;

}
