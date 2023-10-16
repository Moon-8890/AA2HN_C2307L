#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Bai 1:
//	Không su dung loop -> Yêu cau tính tong các so 1 + 2 + .. + N -> Trong dó N nhap tu bàn phím

int n,t;
   	printf("\nNhap so nguyen N = ");
   	scanf("%d",&n);
   	t=(n+1)*n/2;
   	printf("\nTong = %d", t);
   	
//	Bai 2:
//	   Nhap so nguyên N tu bàn phím. Yêu cau in ra tat ca các uoc so chung cua N
   	
 int i;
    printf("\nTat ca uoc chung cua N = ");
    for (i=1;i<n;i++){
        if(n % i == 0){
            printf("%d ",i);
        }
    }
    
//    Bài 3:
//Nhap so nguyên num tu bàn phím
//In ra bang cuu chuong cua num
//ví du:
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
