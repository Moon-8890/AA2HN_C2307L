#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	B�i 1 : Nhap v�o mang gom N so nguy�n - In ra danh s�ch nguoc cua mang d�
//V� du : mang nhap v�o l� : 1, 2, 3, 4, 5, 6 -> In ra ket qua nhu sau : 6, 5, 4, 3, 2, 1
//B�i 2 : Nhap v�o mang gom N so nguyen -> Thuc hien ho�n doi nguoc lai ve tri cua mang
//v� du : mang a gom c�c phan tu 1, 2, 3, 4, 5, 6 -> y�u cau chuyen doi de mang a chua danh s�ch nguoc : 6, 5, 4, 3, 2, 1
	
	int n;
	printf("\nNhap N = ");
	scanf("%d",&n);
	int p[n];
	int i;
	for (i=0;i<n;i++)
	{
		printf("Nhap phan tu p[%d] = ",i+1);
		scanf("%d",&p[i]);
	}
	for (i=n-1;i>=0;i--)
	{
		printf("%d, ",p[i]);
	}
	int temp;
	for (i=0;i<n/2;i++)
	{
		p[i]=p[i]+p[n-i-1];
		p[n-1-i]=p[i]-p[n-i-1];
		p[i]=p[i]-p[n-i-1];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	
	return 0;
}
