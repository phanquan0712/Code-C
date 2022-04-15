#include<stdio.h>
#include<math.h>

int main() {
    int cntChicken, cntDog;
    for(int i = 9; i <=25 ;i++) {
        if(i * 4 + (36 - i) * 2 == 100) {
            cntChicken = i;
            cntDog = 36 - i;
        }
    }
    printf("%d %d", cntChicken, cntDog);
    return 0;
}