#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
//	B�i 1:
//Viet h�m dat t�n l� showInfor() => Hien thi th�ng tin c� nh�n cua ban gom t�n, tuoi, dia chi, email, sdt
//Trong h�m main thuc hien goi h�m showInfor()
//B�i 2:
//Viet h�m dat t�n l� showMessage c� 1 tham so truyen v�o int msg => Hien thi d�ng Hello msg
//Trong h�m main l�n luot goi 3 lan h�m showMesage voi c�c gi� tri kh�c nhau
//B�i 3:
//Viet h�m t�nh giaithua => tham so truyen v�o n => tra ve ket qua t�nh giai thua N
//Viet h�m t�nh tong => tham so truyen v�o m => tra ve ket qua t�nh tong cua 1->m
//trong h�m main thuc hien t�nh giai thua cua 5 v� tong 1-10
//so s�nh 2 ket qua tr�n.


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

