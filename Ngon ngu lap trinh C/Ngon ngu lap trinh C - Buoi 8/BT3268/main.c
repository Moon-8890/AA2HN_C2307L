#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
//	Y�u cau viet chuong tr�nh sau:
//1. Nhap v�o so nguy�n N
//2. Tinh N!
//3. T�nh tong 1 -> N
//4. So sanh N! v� tong 1->N
//5. Tho�t
//Y�u cau: Su dung function cho tat ca c�c chuc nang tr�n.
//function: hien thi menu, nhap N, t�nh giai thua, t�nh tong, so s�nh

int i;
void displayMenu() {
    printf("1. Nhap N\n");
    printf("2. Tinh N!\n");
    printf("3. Tinh tong 1->N\n");
    printf("4. So sanh N! va tong 1->N\n");
    printf("5. Thoat\n");
}

int inputN() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);
    return N;
}

int giaithua(int N) {
    int factorial = 1;
    for (i = 1; i <= N; i++) {
        factorial *= i;
    }
    return factorial;
}

int tong(int N) {
    int sum = 0;
    for (i = 1; i <= N; i++) {
        sum += i;
    }
    return sum;
}

void sosanh(int N) {
    int factorial = giaithua(N);
    int sum = tong(N);
    if (factorial > sum) {
        printf("N! > Tong 1->N\n");
    } else if (factorial < sum) {
        printf("N! < Tong 1->N\n");
    } else {
        printf("N! = Tong 1->N\n");
    }
}

int main() {
    int N;
    char choice;
    do {
        displayMenu();
        printf("Chon chuc nang: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                N = inputN();
                break;
            case '2':
                printf("%d! = %d\n", N, giaithua(N));
                break;
            case '3':
                printf("Tong 1->N = %d\n", tong(N));
                break;
            case '4':
                sosanh(N);
                break;
            case '5':
                break;
            default:
                printf("Chuc nang khong hop le!\n");
        }
    } while(choice != '5');

    return 0;
}
