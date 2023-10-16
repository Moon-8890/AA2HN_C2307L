#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	B�i 1: Viet chuong tr�nh in ra tam gi�c c�n c� do cao h
//a. Tam gi�c c�n dac nam giua m�n h�nh (H�nh n�n dac)
//� � �*
//� � **
//� �***
//� ****
//�*****
//******
//b. Tam gi�c c�n rong nam giua m�n h�nh (H�nh n�n rong)
//c. Tam gi�c vu�ng c�n dac
//*
//**
//***
//****
//*****
//******
//d. Tam gi�c vu�ng c�n rong
//*
//**
//* *
//*� *
//*� �*
//*� � *
//*******

//B�i 2: Viet chuong tr�nh in ra h�nh chu nhat c� k�ch thuoc m x n
//a. H�nh chu nhat dac
//b. H�nh chu nhat rong

//B�i 3:
//Can c� tong 200000 dong tu 3 loai giay bac 1000 dong, 2000 dong, 5000 dong. Lap chuong tr�nh de t�m ra tat ca c�c phuong �n c� the

int h,j,i;



	printf("\nNhap chieu cao h = ");
	scanf("%d",&h);
	
	printf("\nTam giac\n");
    int space = h - 1;
    for(i=0;i<h;i++) {
        //Tao do cao
        for(j=0;j<space - i;j++) {
            printf(" ");
        }
        for(j=0;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    
	for (i=0; i<h; i++)
	{printf(" ");
	}
	printf("*");
	for (i=0; i<h; i++)
	{ 
	
		for(j=i-1; j<h-1; j++)
		{
			printf(" ");
		}
		for(j=h-i; j<h;j++)
		{	
			if(j == h-i){
			printf("* ");
			}
			if (j == h-1){
			printf("*");
			}
			else {printf("  ");
			}
		}
		printf("\n");
		}
	for (i=0; i<=h; i++){
		printf("* ");
	}
	
	for (i=0; i<=h;i++){
		printf("\n");
		for (j=h-i; j<h; j++)
		{
			printf("* ");
		}
	}
	printf("\n");
	printf("\n*");
	for (i=0; i<h; i++)
	{ 
		
		for(j=h-i; j<h;j++)
		{	
			if(j == h-i){
			printf("* ");
			}
			if (j == h-1){
			printf("*");
			}
			else {printf("  ");
			}
		}
		printf("\n");
	}
	
	for (i= 0;i<=h;i++)
	{
		printf("* ");
	}
    
	int m, n;
    printf("\nNhap m = ");
    scanf("%d",&m);
    printf("\nNhap n = ");
    scanf("%d",&n);
    for (i=0;i<m;i++){
        printf("\n");
        for (j=0;j<n;j++){
            printf("*");
        }
    }
      printf("\n");
    for (j=0;j<n;j++){
    printf("* ");}
    for (i=1;i<m-1;i++){ 
        printf("\n");
        for (j=0;j<=n;j++){
            if(j == 0){
            printf("* ");}
            if(j == n){
            printf("* ");}
            else{printf(" ");}
        } 
    }
    printf("\n");
    for (j=0;j<n;j++){
    printf("* ");}
    
    int u, y, o; 
   	for (u = 0; u <= 200; ++u) 
   	for (y = 0; y <= 100; ++y) 
   	for (o = 0; o <= 40; ++o) 
   	if (u * 1000 + y * 2000 + o * 5000 == 200000) 
   	printf("\n%d to 1000(VND) - %d to 2000(VND) - %d to 5000(VND) ", u, y, o);
	
	return 0;
}
