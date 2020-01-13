#include <stdio.h>

int add_number(int *parr);
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
	add_number(arr);
	for (i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
int add_number(int *parr) {
	int i;
	for (i = 0; i < 5; i++) {
		parr[i]++;
	}
	return 0;
}