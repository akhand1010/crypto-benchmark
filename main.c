#define MESSAGE_SIZE 4096
#define ITERATIONS   1000000

#include "openssl.h"
#include "sodium.h"

#include <stdlib.h>

int main() {
	if (!openssl_main(MESSAGE_SIZE, ITERATIONS)) {
		return EXIT_FAILURE;
	}

	if (!sodium_main(MESSAGE_SIZE, ITERATIONS)) {
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
