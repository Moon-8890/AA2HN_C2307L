#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
//	Bài 2:
//Tao struct sinhvien gom các thuoc tính sau char name[50], rollno[20], int age.
//Khai báo 1 mang gom N sinh viên => N nhap tu bàn phím
//Hien thi thông tin sinh viên có tuoi là so chính phuong


struct sinhvien {
    char name[50];
    char rollno[20];
    int age;
};

int main() {
    int N,i;
    printf("Nhap so sinh vien: ");
    scanf("%d", &N);

    struct sinhvien sv[N];

    for (i = 0; i < N; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", (i + 1));
        printf("Ho va ten: ");
        fflush(stdin);
        fgets(sv[i].name, 50, stdin);
        printf("Ma sinh vien: ");
        fflush(stdin);
        fgets(sv[i].rollno, 20, stdin);
        printf("Tuoi: ");
        scanf("%d", &sv[i].age);
    }

    printf("Danh sach sinh vien co tuoi la so chinh phuong:\n");
    for (i = 0; i < N; i++) {
        int squareRoot = sqrt(sv[i].age);
        if (squareRoot * squareRoot == sv[i].age) {
            printf("Ho va ten: %s\n", sv[i].name);
            printf("Ma sinh vien: %s\n", sv[i].rollno);
            printf("Tuoi: %d\n", sv[i].age);
        }
    }

    return 0;
}
	

