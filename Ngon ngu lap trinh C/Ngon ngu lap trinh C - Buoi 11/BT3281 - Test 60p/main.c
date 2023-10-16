#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Write a function to check a number is a prime
	
	
	int n,i;
printf ("\nNhap vao so n: ");
scanf ("%d", &n);
if (n<2) {
	printf ("\n n khong phai so nguyen to"); 
	return 0;
} 
for (i=2;i<n-1;++i) {
	if (n % i == 0) {
		printf ("\nn3 khong phai la so nguyen to");
		return 0;
	}
	}
		printf("\n n la so nguyen to");
	return 0;
}
