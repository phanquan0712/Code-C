#include <stdio.h>
#include <string.h>

int findMax(int a, int b, int c, int d) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    return max;
}

int main()
{
    char str[100]; printf("Nhap vao chuoi: "); fflush(stdin); gets(str);
    int cntAplabet = 0, cntNumber = 0, cntSpace = 0, cntOther = 0;
    int lengthString = strlen(str);
    for(int i = 0; i < lengthString; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            cntAplabet++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            cntNumber++;
        }
        else if(str[i] == ' ') {
            cntSpace++;
        }
        else {
            cntOther++;
        }
    }
    printf("So ki tu chu: %d\n", cntAplabet);
    printf("So ki tu 0-9: %d\n", cntNumber);
    printf("So ki tu khoang trang: %d\n", cntSpace);
    printf("So ki tu khac: %d\n", cntOther);
    int max = findMax(cntAplabet, cntNumber, cntSpace, cntOther);
    if(max == cntAplabet) {
        printf("Chuoi co chu cai");
    }
    else if(max == cntNumber) {
        printf("Chuoi co so");
    }
    else if(max == cntSpace) {
        printf("Chuoi co khoang trang");
    }
    else {
        printf("Chuoi co ki tu khac");
    }
    return 0;
}