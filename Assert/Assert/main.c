#define NDEBUG
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
	int x = 7;

	x = 9;

	assert(x == 7);

	return 0;
}
