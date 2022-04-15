#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void arrangeArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    FILE *fr = fopen("input.txt", "r");
    FILE *fw = fopen("output.txt", "w");
    int n;
    fscanf(fr, "%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        fscanf(fr, "%d", &arr[i]);
    }
    arrangeArray(arr, n);
    for (int i = 0; i < n; i++) {
        fprintf(fw, "%d ", arr[i]);
    }
    fclose(fr);
    return 0;
}