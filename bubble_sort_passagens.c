#include <stdio.h>

void bubbleSort(int v[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        if (v[j] > v[j + 1]) {
            temp = v[j];
            v[j] = v[j + 1];
            v[j + 1] = temp;
        }
    }

    for (int k = 0; k < n; k++) {
        printf("%d ", v[k]);
    }
    printf("\n");
}
}

int main() {
    int v[] = {5, 3, 8, 2};
    int n = 4;
    bubbleSort(v, n);
    
}