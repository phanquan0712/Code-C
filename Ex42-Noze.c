#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int checkStringSymmetry(char *str) {
    int i = 0, j = strlen(str) - 1;
    while(i < j) {
        if(str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main() {
    char str[50]; printf("Nhap vao chuoi: "); fflush(stdin); gets(str);
    if(checkStringSymmetry(str)) {
        printf("Chuoi doi xung\n");
    }
    else {
        printf("Dao nguoc chuoi: %s\n", strrev(str));
    }
    return 0;
}