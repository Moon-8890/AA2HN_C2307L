#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
//	B�i 1 : Nhap v�o chuoi -> in ra do dai cua chuoi d�
//B�i 2 : Nhap v�o 2 chuoi s1, s2 -> Thuc hien noi chuoi s2 v�o s1 -> In ra do d�i cua chuoi s1
//B�i 3 : Nhap v�o chuoi str -> in ra m�n h�nh moi k� tu trong chuoi tr�n 1 d�ng
//V� du : chuoi nhap : gokisoft.com
//Ket qua in :
//g
//o
//k
//i
//s
//o
//f
//t
//.
//c
//o
//m

int main(int argc, char *argv[]) {
char str[100000]; 
int length; 
printf ("Nhap vao chuoi :");
gets(str);
length = strlen(str);
printf ("\nDo dai cua chuoi la :%d",length); 

char s1[100000];
char s2[100000];
printf ("\nNhap vao chuoi s1:"); 
scanf ("%s",&s1);
printf ("\nNhap vao chuoi s2:"); 
scanf ("%s",&s2);
strcat (s1,s2);
printf ("\nChuoi sau khi noi s2 vao s1 la: %s",s1); 

char string[100000];
int i;
printf("\nNhap vao mot chuoi:");
scanf("%c",&string);
gets(string);
for (i=0;string[i] != '\0';i++) {
	printf("%c\n",string[i]);
}
	
	return 0;
}
