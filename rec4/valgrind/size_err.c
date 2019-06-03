#include <stdio.h>
#include <stdlib.h>

int main()
{	
	long *arr = malloc(sizeof(int)*10);
	int i;
	for (i = 0; 10; i++) {
		arr[i] = i;
	}

	free(arr);
	return 0;
}
