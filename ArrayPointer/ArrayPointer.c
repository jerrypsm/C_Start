﻿#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* parr;
	int i;
	parr = &arr[0];

	printf("arr의 주소값 : %p\n", arr);
	printf("arr[0]의 주소값 : %p\n", &arr[0]);
	printf("parr의 값 : %p \n", parr);

	for (i = 0; i < 10; i++) {
		printf("arr[%d]의 주소값 : %p", i, &arr[i]);
		printf("(parr + %d)의 값 : %p", i, (parr + i));

		if (&arr[i] == (parr + i)) {
			printf(" --> 일치 \n");
		}
		else {
			printf("--> 불일치\n");
		}
	}
	
	printf("Github Test");

	return 0;
}