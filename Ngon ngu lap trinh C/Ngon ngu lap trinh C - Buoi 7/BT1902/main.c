#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
//	Bài 1:
//Viet hàm dat tên là showInfor() => Hien thi thông tin cá nhân cua ban gom tên, tuoi, dia chi, email, sdt
//Trong hàm main thuc hien goi hàm showInfor()
//Bài 2:
//Viet hàm dat tên là showMessage có 1 tham so truyen vào int msg => Hien thi dòng Hello msg
//Trong hàm main lân luot goi 3 lan hàm showMesage voi các giá tri khác nhau
//Bài 3:
//Viet hàm tính giaithua => tham so truyen vào n => tra ve ket qua tính giai thua N
//Viet hàm tính tong => tham so truyen vào m => tra ve ket qua tính tong cua 1->m
//trong hàm main thuc hien tính giai thua cua 5 và tong 1-10
//so sánh 2 ket qua trên.


void showInfor() {
    char name[] = "Dang Thi Nhu Nguyet";
    int age = 33;
    char address[] = "691, Giai Phong, Giap Bat, Hoang Mai, Ha Noi";
    char email[] = "nguyet.dn.2354@aptechlearning.edu.vn";
    char phone[] = "0974 781 436";

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
}
void showMessage(int msg) {
	printf ("\nHello\n",msg);}
int main() {
    showInfor();

	showMessage(1);
	showMessage(2);
	showMessage(3);
	
int tinhGiaiThua(int n) {
    int i;
	int giaiThua = 1;
    for (i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}
int tinhTong(int m) {
    int i;
	int tong = 0;
    for (i = 1; i <= m; i++) {
        tong += i;
    }
    return tong;
}

int main() {
    int n = 5;
    int m = 10;

    int giaiThuaN = tinhGiaiThua(n);
    int tongM = tinhTong(m);

    printf("Giai thua cua %d la: %d\n", n, giaiThuaN);
    printf("Tong cua 1 den %d la: %d\n", m, tongM);

    if (giaiThuaN > tongM) {
        printf("Giai thua lon hon tong\n");
    } else if (giaiThuaN < tongM) {
        printf("Tong lon hon giai thua\n");
    } else {
        printf("Giai thua bang tong\n");
    }

    return 0;
}
}

