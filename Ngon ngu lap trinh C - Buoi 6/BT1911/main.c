#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


// Khai b�o con tro *p
//- Cap ph�t mang p gom 10 phan tu
//- Nhap c�c phan tu trong mang
//- T�nh tong c�c so chia het cho 2 trong mang p�

int *p;
	p= (int *) malloc (10 * sizeof(int));
	int i,t=0;
	for (i=0;i<10;i++)
	{
		printf("\nNhap p[%d] = ",i);
		scanf("%d",p + i);
		if (p[i] % 2 == 0)
		{
			t= t+p[i];
		}
	}
	free (p);
	printf("\nTong cac so chia het cho 2 = %d",t);

	return 0;
}
