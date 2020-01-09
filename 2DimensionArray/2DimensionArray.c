#include <stdio.h>

int main() {
	int arr[2][3];
	
	printf("%p \n", &arr);
	printf("%p \n", arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);
	printf("%p\n", arr[1]);
	printf("%p\n", &arr[1][0]);

	int arr[2][3] = { {1,2,3}, {4,5,6} };
	printf("%d \n", sizeof(arr));
	printf("%d \n", sizeof(arr[0]));
	return 0;
}