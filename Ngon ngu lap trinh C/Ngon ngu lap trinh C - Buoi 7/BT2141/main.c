#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	Viet function sau
//- Tinh tong: có 2 tham so dau vào float a, float b => kieu du lieu tra ve là float
//- Tinh hieu: có 2 tham so dau vào float a, float b => kieu du lieu tra ve là float
//- Tinh tích: có 2 tham so dau vào float a, float b => kieu du lieu tra ve là float
//- Tinh thuong: có 2 tham so dau vào float a, float b => kieu du lieu tra ve là float


float a,b; 
void  tong(a,b); {
printf("\nNhap a:");
scanf("%f",&a);
printf("\nNhap b:");
scanf("%f",&b);
float Tong = a+b;
printf("\nTong cua a va b la :%f",Tong);
}

void  hieu(a,b); {
printf("\nNhap a:");
scanf("%f",&a);
printf("\nNhap b:");
scanf("%f",&b);
float Hieu = a-b;
printf("\nHieu cua a va b la :%f",Hieu);
}

void  Tich(a,b); {
printf("\nNhap a:");
scanf("%f",&a);
printf("\nNhap b:");
scanf("%f",&b);
float Tich = a*b;
printf("\nTich cua a va b la :%f",Tich);
}

void  Thuong(a,b); {
printf("\nNhap a:");
scanf("%f",&a);
printf("\nNhap b:");
scanf("%f",&b);
float Thuong = a/b;
printf("\nThuong cua a va b la :%f",Thuong);
}
	
	return 0;
}
