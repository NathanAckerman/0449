#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ip = malloc(sizeof(int));

	//lets say we do a bunch of stuff but forget to free ip
	return 0;
}
