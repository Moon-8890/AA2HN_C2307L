#include<stdio.h>

//Nhap 2 so nguyen a, b. Tinh tong cac phan tu tu giua a va b
//Nhap vao so N -> Thuc hien in tat ca cac so nguyên to tu 1 -> N. Tinh tong cac so nguyen to do

int main()
{
    int a,b,i,sum=0;
    printf("Nhap vao so nguyen a: ");
    scanf("%d",&a);
    printf("\nNhap vao so nguyen b: ");
    scanf("%d",&b);
    if (a>=b) {
        printf("a phai lon hon b");
        return 0;
    } else
        for (i=a; i<=b; i++) {
            sum=sum+i;
        }
    printf("\nTong cac so nguyen tu a den b la %d",sum);

    int N,c,tong;
    printf ("\nNhap vao so N >= 1: ");
    scanf ("%d", &N);
    if (N<1) {
        printf ("N phai lon hon hoac bang 1");
        return 0;
    } else
        for (c=1; c<=N; c++) {
            tong=tong+c;
        }
    printf("\nTong cac so nguyen tu 1 den N la %d", tong);
    return 0;
}
