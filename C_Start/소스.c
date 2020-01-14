#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	int* parr = arr;

	printf("%d \n", *parr);

	return 0;
}