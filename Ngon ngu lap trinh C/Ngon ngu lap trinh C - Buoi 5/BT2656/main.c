#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Bai 1:
//	Kh�ng su dung loop -> Y�u cau t�nh tong c�c so 1 + 2 + .. + N -> Trong d� N nhap tu b�n ph�m

int n,t;
   	printf("\nNhap so nguyen N = ");
   	scanf("%d",&n);
   	t=(n+1)*n/2;
   	printf("\nTong = %d", t);
   	
//	Bai 2:
//	   Nhap so nguy�n N tu b�n ph�m. Y�u cau in ra tat ca c�c uoc so chung cua N
   	
 int i;
    printf("\nTat ca uoc chung cua N = ");
    for (i=1;i<n;i++){
        if(n % i == 0){
            printf("%d ",i);
        }
    }
    
//    B�i 3:
//Nhap so nguy�n num tu b�n ph�m
//In ra bang cuu chuong cua num
//v� du:
//num = 5
//Ket qua:
//1 * 5 = 5
//2 * 5 = 10
//3 * 5 = 15
//4 * 5 = 20
//5 * 5 = 25
//6 * 5 = 30
//7 * 5 = 35
//8 * 5 = 40
//9 * 5 = 45
//10 * 5 = 50
    
     int num;
    printf("\nNhap num = ");
    scanf("%d",&num);
    for (i=1; i<=10; i++){
        printf("\n%d * %d = %d",i , num, i*num);
    }
	
	return 0;
}
