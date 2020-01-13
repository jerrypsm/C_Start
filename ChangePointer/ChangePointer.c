#include <stdio.h>

int pswap();
int main() {
	int a = 5;
	int b = 10;
	int* pa = &a;
	int* pb = &b;
	printf("*pa : %d / *pb : %d\n", *pa, *pb);
	printf("&pa : %p / &pb : %p\n", &pa, &pb);
	/*
	int** ppa = &pa;
	int** ppb = &pb;
	int* temp = *ppa;
	*ppa = *ppb;
	*ppb = temp;
	*/
	pswap(&pa, &pb);
	printf("*pa : %d / *pb : %d\n", *pa, *pb);
	printf("&pa : %p / &pb : %p\n", &pa, &pb);
	return 0;
}
int pswap(int **ppa, int **ppb) {
	printf("-----pswap 시작-----\n");
	int* temp = *ppa;
	*ppa = *ppb;
	*ppb = temp;
	printf("-----pswap 종료-----\n");
	return 0;
}