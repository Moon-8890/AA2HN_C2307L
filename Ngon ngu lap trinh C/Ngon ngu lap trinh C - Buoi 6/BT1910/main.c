#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	Nhap vào mot mang so nguyên t gom N phan tu. Trong dó N duoc nhap tu bàn phím
//Yêu cau : sap xep mang N theo thu tu giam dan
//Ví du: mang nhap vào là 1, 6, 2, 5, 10, 80
//Mang sau khi sap xep : 80, 10, 6, 5, 2, 1

int n;
	printf("\nNhap so phan tu cua mang = ");
	scanf("%d",&n);
	int p[n];
	int i,j;
	for (i=0;i<n;i++)
	{
		printf("\nNhap phan tu p[%d] = ",i);
		scanf("%d",&p[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=n;j>i;j--)
		{
		if (p[i]>p[j])
		{
			p[i]=p[i]+p[j];
			p[j]=p[i]-p[j];
			p[i]=p[i]-p[j];
		}
		}
	}
	for (i=n-1;i>=0;i--)
	{
		printf("%d, ",p[i]);
	}
	
	return 0;
}
