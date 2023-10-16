#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
//	Cho menu chuong tr�nh nhu sau
//1. Nhap v�o N so nguy�n
//2. Hien thi danh s�ch c�c phan tu trong mang
//3. T�nh tong c�c phan tu trong mang
//4. Sap xep c�c phan tu trong mang theo thu tu tang dan
//5. Tho�t
//Y�u cau :
//Khai b�o bien con tro t trong chuong tr�nh
//- Khi nguoi d�ng lua chon 1 -> thuc hien hoi nguoi d�ng so phan tu can them v�o mang t. Sau d� nhap c�c phan tu duoc th�m v�o cho mang t
//sau khi nhap -> hien thi lai menu chuong tr�nh
//- Khi nguoi d�ng lua chon 2 -> thuc hien theo y�u c�u ->�sau khi thuc hien xong -> hien thi lai menu chuong tr�nh
//- Khi nguoi d�ng lua chon 3 ->�thuc hien theo y�u c�u -> sau khi thuc hien xong -> hien thi lai menu chuong tr�nh
//- Khi nguoi d�ng lua chon 4 ->�thuc hien theo y�u c�u -> sau khi thuc hien xong -> hien thi lai menu chuong tr�nh
//- Khi nguoi d�ng lua chon 5 -> tho�t chuong tr�nh


	void nhapMang(int** arr, int* n) {
    int i;
	printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    arr = (int)malloc((n) );sizeof(int*);
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &(arr)[i]);
    }
}

void hienThiMang(int* arr, int n) {
    int i;
	printf("Danh sach cac phan tu trong mang: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int tinhTongMang(int* arr, int n) {
    int i;
	int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void sapXepMang(int* arr, int n) {
    int i,j;
	for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int* arr = NULL;
    int n;
    int choice;

    while (1) {
        printf("Menu chuong trinh: \n");
        printf("1. Nhap vao N so nguyen\n");
        printf("2. Hien thi danh sach cac phan tu trong mang\n");
        printf("3. Tinh tong cac phan tu trong mang\n");
        printf("4. Sap xep cac phan tu trong mang theo thu tu tang dan\n");
        printf("5. Thoat\n");
        printf("Chon chuc nang (1-5): ");
        scanf("%zu", &choice);

        switch (choice) {
        case 1:
            nhapMang(&arr, &n);
            break;
        case 2:
            hienThiMang(arr, n);
            break;
        case 3:
            printf("Tong cac phan tu trong mang: %d\n", tinhTongMang(arr, n));
            break;
        case 4:
            sapXepMang(arr, n);
            printf("Da sap xep cac phan tu trong mang\n");
            break;
        case 5:
            free(arr);
            exit(0);
        default:
            printf("Vui long nhap lua chon hop le (1-5)!\n");
        }
    }

    return 0;
}

