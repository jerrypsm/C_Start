#include <stdio.h>

int main() {
	int arr[3] = { 1,2,3, };
	int (*parr)[3] = &arr;

	printf("arr[1] : %d \n", arr[1]);
	printf("parr[1] : %d \n", (*parr)[1]);

	//test
	printf("arr : %p \n", arr);
	printf("arr[0] : %p \n", &arr[0]);

	printf("arr : %p \n", arr);
	printf("parr : %p \n", parr);

	return 0;
}