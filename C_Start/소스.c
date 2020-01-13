#include <stdio.h>

int main() {
	int a = 5;
	int b = 10;
	int* pa = &a;
	int* pb = &b;
	printf("*pa : %d / *pb : %d\n", *pa, *pb);
	int** ppa = &pa;
	int** ppb = &pb;
	int* temp = *ppa;
	*ppa = *ppb;
	*ppb = temp;
	printf("*pa : %d / *pb : %d\n", *pa, *pb);
	return 0;
}