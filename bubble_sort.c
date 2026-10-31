#include <stdio.h>

void bubbleSort(int v[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int v[] = {9, 7, 5, 3, 1};
    int n = 5;
    
    bubbleSort(v, n);

    for(int j = 0; j < n; j++){
        printf("%d ", v[j]);
    }
}