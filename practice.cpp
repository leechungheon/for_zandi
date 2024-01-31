//2693
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do { type t = x; x = y; y = t; } while (0)
void quick(int a[], int left, int right)
{
    int pl = left;              // 왼쪽 커서
    int pr = right;             // 오른쪽 커서
    int x = a[(pl + pr) / 2];   // 피벗은 가운데 요소를 선택
    do {
        while (a[pl] < x) pl++;
        while (a[pr] > x) pr--;
        if (pl <= pr) {
            swap(int, a[pl], a[pr]);
            pl++;
            pr--;
        }
    } while (pl <= pr);
    if (left < pr)  quick(a, left, pr);
    if (pl < right) quick(a, pl, right);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int* a = (int*)calloc(10, sizeof(int));
        for (int j = 0; j < 10; j++) {
            scanf("%d", &a[j]);
        }
        //정렬

        quick(a, 0, 9);

        //a[3] 출력
        printf("%d\n", a[7]);
        free(a);
    }
    return 0;
}