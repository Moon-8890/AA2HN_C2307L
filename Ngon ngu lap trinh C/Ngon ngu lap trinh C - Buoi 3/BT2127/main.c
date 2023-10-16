#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
  double nghiem;
  printf("Nhap he so a = ");
  scanf("%d", &a);
  printf("Nhap he so b = ");
  scanf("%d", &b);
  printf("Phuong trinh sau khi nhap: %dx + %d = 0",a,b);
if(a == 0) {
    if(b == 0) {
      printf("\n-> Phuong trinh tren co vo so nghiem\n");
    } else {
      printf("\n-> Phuong trinh tren vo nghiem\n");
    }
  } 
  else {
      nghiem = (double)-b/a;
      printf("\n-> Phuong trinh tren co nghiem la: x = %0.2f\n",nghiem);
  }
  
	return 0;
}
