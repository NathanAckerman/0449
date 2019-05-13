#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("hello world\n\n");
	char *example_str = "example string";
	printf("print example string: %s\n", example_str);
	char char_arr[5] = {'f', 'o', 'u', 'r', '\0'};
	printf("print char_arr: %s\n", char_arr);

	char c1 = 'A';
	char c2 = 0x41;
	printf("c1 is %c and c2 is also %c\n\n", c1, c2);

	printf("the size of a char is %ld byte\n\n", sizeof(char));
	short s = 45;
	printf("the size of a short is %ld\n\n", sizeof(s));
	printf("the size of an int is %ld\n\n", sizeof(int));
	printf("the size of an unsigned int is %ld\n\n", sizeof(unsigned int));
	printf("the size of a long is %ld\n\n", sizeof(long));
	printf("the size of a long long is %ld\n\n", sizeof(long long));

	
	unsigned int ui = 0xFFFFFFFF;
	printf("ui as an unsigned int: %u\n", ui);
	printf("ui as a signed int: %d\n\n", (int)ui);
	
	
	if (1) {
		printf("If condition satisfied by 1\n");
	}

	if (-1) {
		printf("If condition satisfied by -1\n");	
	}

	if (0) {
		printf("If condition not satisfied by 0\n");	
	}

	printf("any non zero value is true in a conditional\n");

	if (s == 45) {
		printf("yes there are also a == b conditions\n\n");
	}

	int y = 0;
	printf("the address of y is %p\n", &y);
	printf("what the heck are addresses of variables and why do we care about them?...\n");
	printf("more on address space and pointers later\n\n");

	return 0;
}
