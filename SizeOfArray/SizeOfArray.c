#include <stdio.h>

int main() {
	int arr[2][3];

	/*
	bug fix - errorcode : C6328
	원문)
	printf("%d \n", sizeof(arr));
	printf("%d \n", sizeof(arr[0]));
	*/
	printf("%llu \n", sizeof(arr)); //%llu - unsigned long long
	printf("%llu \n", sizeof(arr[0]));

	return 0;
}