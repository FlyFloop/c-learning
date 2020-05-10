#include<stdio.h>
#include<stdlib.h>
//link:https://codeforwin.org/2015/05/if-else-programming-practice.html
main(){
	
	
	//10-)Write a C program to check whether a character is uppercase or lowercase alphabet.
	char karakter;
	printf("bir karakter giriniz:");
	scanf(" %c",&karakter);
	if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter kucuk harftir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karakter buyuk harftir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	
	/*
	
	//9-)Write a C program to input any character and check whether it is alphabet, digit or special character.
	char karakter;
	printf("bir seye basin:");
	scanf(" %c",&karakter);
	if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karkater alfabedendir");
	}
	else if(karakter>='1' && karakter<='9'){
		printf("girdiginiz karakter sayidir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	/*
	
	//8-)Write a C program to input any alphabet and check whether it is vowel or consonant.
	char karakter;
	printf("karakter giriniz:");
	scanf(" %c",&karakter);
	if(karakter=='a'||karakter=='e'||karakter=='i'||karakter=='o'||karakter=='u'){
		printf("girdiginiz karakter sesli bir harftir");
		
	}
	else if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	/*
	
	//7-)Write a C program to check whether a character is alphabet or not.
	char karakter;
	printf("bir karakter giriniz:");
	scanf(" %c",&karakter);
	if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	/*
	
	
	//6-)Write a C program to check whether a year is leap year or not.
	int yil;
	printf("bir yil giriniz:");
	scanf("%d",&yil);
	if(yil%4==0 && yil%100!=0){
		printf("sicrama yili");
	}
	else if(yil%400==0){
       printf("sicrama yili");
	}
	else{
		printf("sicrama yili degil");
	}
	
	
	
	/*
	
	//5-)Write a C program to check whether a number is even or odd.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi%2==0){
		printf("girdiginiz sayi cifttir");
		
	}
	else if(sayi==0){
		printf("girdiginiz sayi 0 dir");
	}
	else{
		printf("girdiginiz sayi negatiftir");
	}
	
	
	/*
	
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
