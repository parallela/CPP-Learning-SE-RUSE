#include<stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

/*
 * Любомир Станков - 206284 51А група SE.
 */

int main() {

    int *a, n, x, y;

    printf("Vuvedete N: ");
    scanf_s("%d", &n);
    printf("Vuvedete X: ");
    scanf_s("%d", &x);

    a = new int[n];

    if (!a) {
        printf("Masiva ne e suzdaden!");
        exit;
    }

    for (int i = 0; i < n; ++i) {
        printf("A: ");
        scanf_s("%d", &a[i]);
    }
    y = a[0];

    for (int i = 0; i < n; ++i)
        // Решаване на полинома по закона на Хорнер.
        y = y * x + a[i];

    printf("P(%d) = %d", x, y);
    delete[]a;

    return 0;
}