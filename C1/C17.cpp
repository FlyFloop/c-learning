#include<locale.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	setlocale(LC_ALL,"Turkish");
	char random[100];
	printf("bir �lke ismi giriniz:");
	scanf("%s",&random);
	printf("%s",random);
/*	char takimismi[6] ="Bar�a";
	//bir dizi halinde almak istiyorsan %c yerine %s kullan�l�r
	for(int i=0;i<6;i++){
		printf("%c\n",takimismi[i]);
	} 
	printf("XXXXXX");
/*	char isim[6]="Alper";//ekledi�in karakterden 1 fazlas�n� tan�mlamak zorundas�n
	// c dilinde karakter dizilerinin bitti�ini anlamak i�in otomatik bir �ekilde /0 koyuyor
	printf("%s",isim); 
/*
//tek boyutlu int ve float dizileri
	float sayilar[7]={};//dizileri tan�mlarken ka� elemanl� oldu�unu mutlaka belirt
	for(int i=0;i<7;i++){
		printf("%d.eleman� giriniz:",i+1);
		scanf("%f",&sayilar[i]);
	}
	// dizi tan�mlarken []boyutu {} bu ise dizinin i�indeki elemanlar�n 0 oldu�unu tan�mlar
		for(int i=0;i<7;i++){
		printf("%.1f\n",sayilar[i]);
		
	}
/*	float sayilar[]={1.5,2.7,3.8,123.9};
		for(int i=0;i<4;i++){
		printf("%.1f\n",sayilar[i]);
	}
/*	int sayilar[]={3,6,9,12,15};
	for(int i=0;i<5;i++){
		printf("%d\n",sayilar[i]);
	}
printf("%d\n%d",sayilar[0],sayilar[1]);//dizideki say�lar� tek tek bast�rd�k.
*/
}
