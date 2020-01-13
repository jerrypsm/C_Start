#include <stdio.h>

int add_number(int(*parr)[3]);
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	int i;
	int j;

	add_number(arr);

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\n", arr[i][j]);
		}
	}
	return 0;
}
int add_number(int(*parr)[3]) {
	int i;
	int j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			parr[i][j]++;
		}
	}
	return 0;
}