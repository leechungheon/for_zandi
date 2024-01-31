//2693
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int* a = (int*)calloc(10, sizeof(int));
        for (int j = 0; j < 10; j++) {
            scanf("%d", a[j]);
        }
        //정렬


        //a[3] 출력
        printf("%d\n", a[3]);
        delete a;
    }
}