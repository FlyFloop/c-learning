#include<stdio.h>
#include<stdlib.h>
//link:https://codeforwin.org/2015/05/if-else-programming-practice.html
main(){
	
	
	
	//4-)Write a C program to check whether a number is divisible by 5 and 11 or not.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi%5==0 && sayi%11==0){
		printf("girdiginiz sayi 5 ve 11 e bolunebiliyor");
	}
	else{
		printf("girdiginiz sayi 5 ve 11 e bolunemiyor");
	}
	
	
	
	/*
	
	//3-)Write a C program to check whether a number is negative, positive or zero.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi>0){
		printf("girdiginiz sayi pozitiftir.");
	}
	else if (sayi==0){
		printf("girdiginiz sayi 0 dir");
	}
	else{
		printf("girdiginiz sayi negatiftir");
	}
	
	
	
	/*
	
	//2-)Write a C program to find maximum between three numbers.
	int sayi1,sayi2,sayi3,buyuk;
	printf("3 tane sayi giriniz:");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	buyuk=sayi1;
	if(sayi2>buyuk){
		buyuk=sayi2;
	}
	if(sayi3>buyuk){
		buyuk=sayi3;
	}
	printf("en buyuk sayi:%d",buyuk);
	
	
	
	/*
	
	//1-)Write a C program to find maximum between two numbers.
	int sayi1,sayi2,buyuk;
	printf("2 tane sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	buyuk=sayi1;
	if(sayi2>buyuk){
		buyuk=sayi2;
	}
	printf("en buyuk sayi:%d",buyuk);
	*/
	
}
