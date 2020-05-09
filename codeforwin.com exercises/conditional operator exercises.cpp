#include<stdlib.h>
#include<stdio.h>


//link:https://codeforwin.org/2015/06/c-program-to-find-maximum-using-ternary-operator.html
main(){
	
	//5-)Write a C program to check whether character is an alphabet or not using conditional operator.
	char karakter;
	printf("lutfen bir karakter giriniz(buyuk harf kullanmayin):");
	scanf(" %c",&karakter);
	(karakter>='a' && karakter<='z')? printf("girdiginiz karakter alfabedendir") : printf("girdiginiz karakter alfabeden degildir");
	
	
	
	/*
	
	//4-)Write a C program to check whether year is leap year or not using conditional operator.
	int yil;
	printf("lutfen bir yil giriniz:");
	scanf("%d",&yil);
	(yil%4==0 && yil%100!=0) ? printf("artik yildir") : (yil%400==0) ? printf("artik yil") : printf("degildir");
	
	
	
	/*
	
	//3-)Write a C program to check whether a number is even or odd using conditional operator.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	(sayi%2==0) ? printf("sayi cifttir") : printf("sayi tektir");
	
	
	/*
	
	//2-)Write a C program to find maximum between three numbers using conditional operator.
	int sayi1,sayi2,sayi3,buyuk;
	printf("3tane sayi giriniz:");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	
	(sayi1>sayi2 && sayi1>sayi3) ? buyuk=sayi1: (sayi2>sayi3) ? buyuk=sayi2:buyuk=sayi3;
		printf("buyuk sayi:%d",buyuk);
	
	/*
	
	//1-)Write a C program to find maximum between two numbers using conditional operator.
	int sayi1,sayi2,buyuk;
	printf("2 tane sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	
	(sayi2>sayi1) ? buyuk=sayi2:buyuk=sayi1;

	printf("buyuk sayi:%d",buyuk);
	*/


}
