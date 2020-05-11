#include<stdio.h>
#include<stdlib.h>
//link:https://codeforwin.org/2015/06/switch-case-programming-exercise.html
main(){
	
	 
	//8-)Write a C program to create Simple Calculator using switch case.
	int sayi1,sayi2,sec;
	printf("toplamak icin:1\ncýkartma icin:2\ncarpma icin:3\nbolme icin:4\n");
	printf("hangi islemi secmek istiyorsunuz:");
	scanf("%d",&sec);
	printf("2 tane sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	switch(sec){
		case 1:
			printf("toplam sonuc:%d",sayi1+sayi2);
			break;
		case 2:
			printf("cýkartma sonucu:%d",sayi1-sayi2);
			break;
		case 3:
			printf("carpma sonucu:%d",sayi1*sayi2);
			break;
		case 4:
			printf("bolme sonuc:%d",sayi1/sayi2);
			break;
		default:
			printf("gecersiz deger girdiniz");
			break;
	}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	//7-)Write a C program to find roots of a quadratic equation using switch case.
	


    

	
	
	/*
	//6-)Write a C program to check whether a number is positive, negative or zero using switch case.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	switch(sayi>0){
		case 1:
			printf("girdiginiz sayi pozitiftir");
			break;
		case 0:
			if(sayi==0){
				printf("girdiginiz sayi 0");
				
			}
			else{
				printf("girdiginiz sayi negatiftir");
			}
	}
	
	
	
	
	/*
	//5-)Write a C program to check whether a number is even or odd using switch case.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	switch(sayi%2==0){
		case 0:
			printf("sayi tektir");
			break;
		case 1:
			printf("sayi cifttir");
			break;
	}
	
	
	
	
	
	/*
	//4-)Write a C program to find maximum between two numbers using switch case.
	int sayi1,sayi2;
	printf("2 tane sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	switch(sayi2>sayi1){
		case 0:
			printf("en buyuk sayi:%d",sayi1);
			break;
		
		case 1:
			printf("en buyuk sayi:%d",sayi2);
			break;
		
			
		}
	
	
	
	
	
	/*
	//3-)Write a C program to check whether an alphabet is vowel or consonant using switch case.
	char harf;
	printf("bir harfe basin(kucuk harf giriniz):");
	scanf(" %c",&harf);
	switch(harf){
		case 'a':
			printf("sesli harf");
			break;
	    case 'e':
			printf("sesli harf");
			break;	
		case 'i':
			printf("sesli harf");
			break;
		case 'o':
			printf("sesli harf");
			break;	
		case 'u':
			printf("sesli harf");
			break;
		default:
			printf("sessiz harf");
			
	}
	
	
	
	
	/*
	//2-)Write a C program print total number of days in a month using switch case.
	 int ay;
    printf("herhangi bir ay numarasi giriniz(1-12):");
    scanf("%d",&ay);

    switch(ay)
    {
        case 1: 
            printf("31 gun");
            break;
        case 2: 
            printf("28 gun");
            break;
        case 3: 
            printf("31 gun");
            break;
        case 4: 
            printf("30 gun");
            break;
        case 5: 
            printf("31 gun");
            break;
        case 6: 
            printf("30 gun");
            break;
        case 7: 
            printf("31 gun");
            break;
        case 8: 
            printf("31 gun");
            break;
        case 9: 
            printf("30 gun");
            break;
        case 10: 
            printf("31 gun");
            break;
        case 11: 
            printf("30 gun");
            break;
        case 12: 
            printf("31 gun");
            break;
        default: 
            printf("gecersiz deger girdiniz");

    }
	
	
	
	
	
	/*
	//1-)Write a C program to print day of week name using switch case.
	int gun;
	printf("1-7 arasinda bir gun sayisi giriniz:");
	scanf("%d",&gun);
	switch(gun){
		case 1:
			printf("pazartesi");
			break;
		case 2:
			printf("sali");
			break;
		case 3:
			printf("carsamba");
			break;
		case 4:
			printf("persembe");
			break;
		case 5:
			printf("cuma");
			break;
		case 6:
			printf("cumartesi");
			break;
		case 7:
			printf("pazar");
			break;
		default:
			printf("gecersiz deger girdiniz");
			
	}
	*/
	
}
