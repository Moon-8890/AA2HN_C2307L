#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
printf("Nhap a :");
scanf("%d", &a);
printf("Nhap b :");
scanf("%d", &b);
printf("Nhap c :");
scanf("%d", &c);
printf("Nhap d :");
scanf("%d", &d);


if(a>=b && a>=c && a>=d) {
	printf("max=%d", a);
}
else if(b>=a && b>=c && b>=d) {
	printf("max=%d", b);
}

else if(c>=a && c>=b && c>=d) {
	printf("max=%d", c);
}
else if(d>=a && d>=b && d>=c) {
	printf("max=%d", d);
}



if(a<=b && a<=c && a<=d) {
	printf("\nmin=%d", a);
}
else if(b<=a && b<=c && b<=d) {
	printf("\nmin=%d", b);
}

else if(c<=a && c<=b && c<=d) {
	printf("\nmin=%d", c);
}
else if(d<=a && d<=b && d<=c) {
	printf("\nmin=%d", d);
}
	return 0;
}
