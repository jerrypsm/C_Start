﻿/* 입력 받은 배열의 10 개의 원소들 중 최대값을 출력 */
#include <stdio.h>
/* max_number : 인자로 전달받은 크기 10 인 배열로 부터 최대값을 구하는 함수 */
int max_number(int* parr);
int main() {
    int arr[10];
    int i;

    /* 사용자로 부터 원소를 입력 받는다. */
    for (i = 0; i < 10; i++) {
        scanf_s("%d", &arr[i]);
    }

    printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr));
    return 0;
}
int max_number(int* parr) {
    int i;
    int max = parr[0];

    for (i = 1; i < 10; i++) {
        if (parr[i] > max) {
            max = parr[i];
        }
    }

    return max;
}