#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Khai bao mang so nguyen t[10]. Nhap cac so tu ban phim
//Tinh tong cac phan tu trong mang
//Tinh tong cac phan tu trong mang chia het cho 3 và 6
//Tinh tong cac so chia het cho 3 và 7 trong mang
//Luu cac so nguyen to vao mang moi k

int y[10],k,T1,T2,T3;
	T1 = 0;
	T2 = 0;
	T3 = 0;
	//nhap cac phan tu trong mang
	for (k = 0; k<10; k++)
	{
		printf("\nNhap phan tu y[%d] = ", k);
		scanf("%d", &y[k]);
		T1 = T1 + y[k];
	}
	printf("\nTong cac phan tu trong mang = %d", T1);
	//tinh tong cac phan tu chia het cho 3 va 6
	for (k = 0; k<10; k++)
	{
		if(y[k] % 6 ==0)
		{
		T2 = T2 + y[k];
		}
	}
	printf("\nTong cac phan tu chia het cho 3 va 6 = %d", T2);
		//tinh tong cac phan tu chia het cho 3 va 7
	for (k = 0; k<10; k++)
	{
		if(y[k] % 21 ==0)
		{
		T3 = T3 + y[k];
		}
	}
	printf("\nTong cac phan tu chia het cho 3 va 7 = %d", T3);
	//luu cac so nguyen to vao mang moi k
	
	
	return 0;

}
