#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
//1. Tao 1 struct gom c�c thuoc t�nh sau -> float : dientich, float chieudai, float chieurong
//2. Tao mang list gom 5 HCN
//3. Nhap th�ng tin chieu d�i v� chieu rong cho 5 HCN tr�n
//4. T�nh dien t�ch cua tong HCN v� luu v�o bien dientich tuong ung
//5. T�nh tong dien t�ch 5 HCN tr�n

typedef struct HCN {
	float chieudai;
	float chieurong; 
	float dientich; 
};
int main(int argc, char *argv[]) {
struct HCN HCN[5]; 
int i;
float dientich;
float Tongdientich;
for(i=0;i<5;i++){
	printf("\nHinh chu nhat %d:\n",i+1);
	printf("\nChieu dai:");
	scanf("%f",&HCN[i].chieudai);
	printf("\nChieu rong:");
	scanf("%f",&HCN[i].chieurong);
} 
for(i=0;i<5;i++) {
	dientich = HCN[i].chieudai * HCN[i].chieurong;
    printf("\nDien tich hinh chu nhat %d la:%f",i+1,dientich); 
Tongdientich += dientich; 
}
printf("\nTong dien tich 5 hinh chu nhat la :%f",Tongdientich); 
	return 0;
}
	

