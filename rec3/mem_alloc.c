#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *arr;
	int int_input;
	printf("enter a number (a number between 9 and 20):\n");
	scanf("%d", &int_input);
	arr = malloc(sizeof(int)*int_input);
	printf("arr after malloc = %p\n", arr); 

	int i;
	for(i = 0; i < int_input; i++){
		arr[i] = i;
	}

	printf("arr[8] = %d\n", arr[8]);


	printf("enter an new larger int (try twice, once 25, once 200000):\n");
	scanf("%d", &int_input);
	arr = realloc(arr, sizeof(int)*int_input);
	printf("arr after realloc = %p\n", arr); 
	printf("arr[8] = %d\n", arr[8]);
	arr[22] = 22;
	printf("arr[22] = %d\n", arr[22]);


	free(arr);
	return 0;
}
