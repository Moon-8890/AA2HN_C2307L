#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	Trong hàm main khai báo các bien sau.
//- Mang so nguyên dataList có so phan tu toi da là 100 phan tu
//Yêu cau thiet ke menu chuong trình sau
//1. Nhap vào so nguyên x => thêm vào mang dataList
//2. Sap xep theo thu tu tang dan 
//3. Tìm kiem phan tu trong mang
//4. Xoá phan tu trong mang
//5. Hien thi 
//6. Thoát
//- Khi nguoi dùng chon 1: hoi nguoi dùng nhap vào bien x => thêm vào mang dataList
//- Khi nguoi dùng chon 2: Sap xep mang dataList theo thu tu tang dan và hien thi ra màn hình
//- Khi nguoi dùng chon 3: Hoi nguoi dùng nhap so can tìm => hien thi ra so phan tu tìm dc trong mang dataList có giá tri bang giá tri vua nhap vào
//- Khi nguoi dùng chon 4: Hoi nguoi dùng nhap vào so can xoá => Yêu cau xoá tat ca các giá tri có giá tri bang vs bien vua nhap vào.
//- Khi nguoi dùng chon 5: Hien thi danh sách các phan tu
//- Khi nguoi dùng chon 6: Thoát

int dataList[100];
	char choose;
	int x, index = 0, i, j, count,newSize;
	
	
	do {
		printf("\n1. Them phan tu vao mang");
		printf("\n2. Sap xep");
		printf("\n3. Tim kiem");
		printf("\n4. Xoa");
		printf("\n5. Hien thi");
		printf("\n6. Thoat");
		printf("\nChon: ");
		fflush(stdin);fflush(stdout);
		scanf("%c", &choose);
		
		switch(choose) {
			case '1': {
				printf("\nNhap phan tu can them: ");
				scanf("%d", &x);
				dataList[index++] = x;
				break;
			}
			case '2': {
				//Phan 1: Sap xep mang dataList theo thu tu tang dan
				for(i=0;i<index-1;i++) {
					for(j=i+1;j<index;j++) {
						if(dataList[i] > dataList[j]) {
							x = dataList[i];
							dataList[i] = dataList[j];
							dataList[j] = x;
						}
					}
				}
				printf("\nKet qua sap xep: ");
				for(i=0;i<index;i++) {
					printf("%d ", dataList[i]);
				}
				printf("\n");
				break;
			}
			case '3': {
				printf("\nNHap phan tu can tim: ");
				scanf("%d", &x);
				count = 0;
				for(i=0;i<index;i++) {
					if(dataList[i] == x) {
						count++;
					}
				}
				printf("\nSo phan tu %d tim thay trong mang la: %d", x, count);
				break;
			}
			case '4': {
				printf("\nNhap so can xoa: ");
				scanf("%d", &x);
				newSize =0;
				int arr[100];
				for(i=0; i<index;i++) {
					if (dataList[i] != x) {
						arr[newSize] = dataList[i];
						newSize++;
					}
				}
				index = newSize;
				printf("\nDanh sach phan tu: ");
				for(i=0;i<newSize;i++){
					dataList[i] = arr[i];
					printf("%d ", dataList[i]);
				}
				printf("\n");
				break;
			}
			case '5': {
				printf("\nDanh sach phan tu: ");
				for(i=0;i<index;i++){
					printf("%d ", dataList[i]);
				}
				printf("\n");
				break;
			}
			case '6': {
				printf("\nThoat!!!");
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
	} while(choose != '6');
	
	return 0;
}
