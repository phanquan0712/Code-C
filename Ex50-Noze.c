#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


int main() {
    for(int i = 1; i <= 20; i++) {
        for(int j = 1; j <=33 ; j++) {
            if(i * 5 + j * 3 + (100 - (i + j))/3 == 100) {
                printf("%d %d %d\n", i, j, (100 - (i + j)));
            }
        }
    }
    return 0;
}