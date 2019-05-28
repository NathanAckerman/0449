#include <stdio.h>

int indexing1();
int indexing2();
int indexing3();
int indexing4();
void func();
void func2();

int main(int argc, char *argv[])
{
	int x = 7;
	int y = 20;

	int *px = &x;
	int *py = &y;

	int **ppx = &px;

	int arr[10] = {0,1,2,3,4,5,6,7,8,9};

	printf("value of x is %d\n", x);
	printf("address of x is %p\n", &x);
	printf("value of px is %p\n", px);
	printf("px dereferenced is %d\n\n", *px); 

	printf("value of y is %d\n", y);
	printf("address of y is %p\n", &y);
	printf("value of py is %p\n", py);
	printf("py dereferenced is %d\n\n", *py); 

	//casted to char * because otherwise it is pointer arithmetic and will give 1
	//technically it is still pointer arithmetic but on the scale we want
	//notice that the difference is the size of one int on your system
	printf("difference in address of x and y is %ld\n\n", ((char *)py)-((char *)px));


	printf("address of px is %p\n", &px);
	printf("address of py is %p\n", &py);
	printf("the size of a pointer is %ld bytes\n\n", sizeof(px));


	printf("ppx dereferenced is %p\n", *ppx);
	printf("ppx double-dereferenced is %d\n\n", **ppx);

	printf("address of arr is %p\n", &arr);
	printf("address of arr is %p\n", arr);
	printf("address of arr+1 (plus the size of one int) is %p\n", arr+1);
	printf("address of arr[1] is %p\n\n", &arr[1]);

	printf("indexing1: %d\n", indexing1(arr, 2));
	printf("indexing2: %d\n", indexing2(arr, 2));
	printf("indexing3: %d\n", indexing3(arr, 2));
	printf("indexing4: %d\n\n", indexing4(arr, 2));



	func();
	return 0;
}

int indexing1(int *arr, int ind)
{
	return arr[ind];
}

int indexing2(int *arr, int ind)
{
	return *(arr+ind);
}


int indexing3(int arr[], int ind)
{
	return arr[ind];
}

int indexing4(int arr[], int ind)
{
	return *(arr+ind);
}

void func()
{
	int a = 8;
	int b = 10;
	printf("addr of a is %p\n", &a);
	printf("addr of b is %p\n", &b);
	func2();
}

void func2()
{

	int c = 8;
	int d = 10;
	printf("addr of c is %p\n", &c);
	printf("addr of d is %p\n", &d);
}
