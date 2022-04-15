#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


struct Student{
    char hoTen[50];
    float DTB;
};
typedef struct Student Student;

Student inputStudent() {
    Student s;
    printf("Nhap vao ho ten: "); fflush(stdin), gets(s.hoTen);
    printf("Nhap vao diem trung binh: "); scanf("%f", &s.DTB);
    return s;
}

void createListStudent(Student listStudent[], int *n) {
    int n1;
    printf("Nhap vao so luong hoc sinh: "); scanf("%d", &n1); *n = n1;
    for(int i = 0; i < *n; i++) {
        listStudent[i] = inputStudent();
    }
}

void printListStudent(Student listStudent[], int n) {
    printf("\n----------Danh sach hoc sinh:-------------\n");
    printf("%s %20s %20s\n", "STT", "Ho ten", "Diem trung binh");
    for(int i = 0; i < n; i++) {
        printf("%d %20s %20.2f\n", i + 1, listStudent[i].hoTen, listStudent[i].DTB);
    }
}

void findDTBMax(Student listStudent[], int n) {
    float max = listStudent[0].DTB;
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(listStudent[i].DTB > max) {
            max = listStudent[i].DTB;
            index = i;
        }
    }
    printf("\n----------Hoc sinh co diem trung binh cao nhat:-------------\n");
    printf("%s %20s %20s\n", "STT", "Ho ten", "Diem trung binh");
    printf("%d %20s %20.2f\n", index + 1, listStudent[index].hoTen, listStudent[index].DTB);
}

void printListStudentResultAboveAverage(Student listStudent[], int n) {
    printf("\n----------Hoc sinh dat ket qua kha-------------\n");
    printf("%s %20s %20s\n", "STT", "Ho ten", "Diem trung binh");
    for(int i = 0; i < n; i++) {
        if(listStudent[i].DTB >= 7) {
            printf("%d %20s %20.2f\n", i + 1, listStudent[i].hoTen, listStudent[i].DTB);
        }
    }
}

void arrangeListStudentByName(Student listStudent[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(listStudent[i].hoTen, listStudent[j].hoTen) > 0) {
                Student temp = listStudent[i];
                listStudent[i] = listStudent[j];
                listStudent[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    Student listStudent[20]; 
    while(true) {
        system("cls");
        printf("\n----------Chon chuc nang:-------------\n");
        printf("1. Nhap danh sach hoc sinh\n");
        printf("2. In danh sach hoc sinh\n");
        printf("3. Tim hoc sinh co diem trung binh cao nhat\n");
        printf("4. In ra danh sach hoc sinh dat loai kha\n");
        printf("5. Sap xep theo ho ten\n");
        printf("6. Thoat\n");
        printf("-----------------------------------------\n");
        int choose; printf("Nhap vao chuc nang: "); scanf("%d", &choose);
        switch(choose) {
            case 1: createListStudent(listStudent, &n); break;
            case 2: printListStudent(listStudent, n); system("pause"); break;
            case 3: findDTBMax(listStudent, n);system("pause"); break;
            case 4: printListStudentResultAboveAverage(listStudent, n);system("pause"); break;
            case 5: arrangeListStudentByName(listStudent, n);printListStudent(listStudent, n);system("pause"); break;
            case 6: return 0;
            default: printf("Nhap sai chuc nang!\n");
        }
    }
    return 0;
}