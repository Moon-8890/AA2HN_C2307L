#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	Cho chuoi Fibonacci nhu sau
//F(0) = 1;
//F(1) = 1;
//F(n) = F(n-1) + F(n-2);
//Nhap vào so Fibonaci max tu bàn phím
//Yêu cau : In ra chuoi fibonaci voi so lon nhat là max
//Ví du :
//max = 100; duoc nhap tu bàn phím
//Chuoi fibonaci se nhu sau
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

int f0 = 1, f1 = 1;
	int max, fn;
	printf("\nNhap so Fibonacci max = ");
	scanf("%d", &max);
	printf("\n%d %d", f0, f1);
//	fn = f0 + f1;
//	while(fn < max) {
//		printf(" %d", fn);
//		f0 = f1;
//		f1 = fn;
//		fn = f0 + f1;
//	}
//	for(;;) {
//		fn = f0 + f1;
//		if(fn > max) {
//			break;
//		}
//		printf(" %d", fn);
//		f0 = f1;
//		f1 = fn;
//	}
	
	for(fn = f0 + f1;fn <= max;fn = f0 + f1) {
		printf(" %d", fn);
		f0 = f1;
		f1 = fn;
	}
	
	return 0;
}

	
