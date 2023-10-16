#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//	Bài 1: Viet chuong trình in ra tam giác cân có do cao h
//a. Tam giác cân dac nam giua màn hình (Hình nón dac)
//     *
//    **
//   ***
//  ****
// *****
//******
//b. Tam giác cân rong nam giua màn hình (Hình nón rong)
//c. Tam giác vuông cân dac
//*
//**
//***
//****
//*****
//******
//d. Tam giác vuông cân rong
//*
//**
//* *
//*  *
//*   *
//*    *
//*******

//Bài 2: Viet chuong trình in ra hình chu nhat có kích thuoc m x n
//a. Hình chu nhat dac
//b. Hình chu nhat rong

//Bài 3:
//Can có tong 200000 dong tu 3 loai giay bac 1000 dong, 2000 dong, 5000 dong. Lap chuong trình de tìm ra tat ca các phuong án có the

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
