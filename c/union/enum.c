#include <stdio.h>
#include <stdlib.h>

enum Color{ white, black, green = 20, blue, purple, red};

int main(void)
{

	printf("%d,%d,%d,%d,%d,%d\n", white, black, green, blue, purple, red);

	enum Color co = white;
	printf("%d\n", co);


	return 0;
}