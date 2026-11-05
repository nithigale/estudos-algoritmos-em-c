#include <stdio.h>

void bubbleSort(int v[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j+1];
                v[j + 1] = temp;
            }
        }
    }
}


int main() {
    int v[] = {8, -3, 5, 8, -1, 2};
    int n = 6;
    bubbleSort(v, n);
    for (int k = 0; k < n; k++) {
        printf("%d ", v[k]);
    }
}