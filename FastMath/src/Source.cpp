#include "fmath.h"

int main()
{
	uint32_t state = 10;

	for(size_t i = 0; i < 100; i++)
	{
		float random = fm::wang_hashf(state);
		state++;
		printf("%f\n", random);
	}
	return 0;
}