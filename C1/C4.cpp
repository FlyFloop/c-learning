#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
//Kullan�c�dan veri alma i�lemleri
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
	float kesirlisayi;
	double kesirlisayi2;
	char karakter;
	char karakterdizisi[5];
	printf("L�tfen bir say� de�eri giriniz:");
	scanf("%d",&sayi);
	printf("L�tfen bir say� de�eri giriniz:");
	scanf("%f",&kesirlisayi);//float de�eri konsoldan girilirken virg�lle girilir �rn:5,6
	printf("L�tfen bir say� de�eri giriniz:");
	scanf("%lf",&kesirlisayi2);
	printf("L�tfen bir karakter giriniz:");
	scanf(" %c",&karakter);//c de �ok fazla scanf fonksiyonu varsa istisna olarak %c yaz�lmadan �nce 1 bo�luk b�rak�l�p yaz�l�r 
	printf("L�tfen bir karakter dizisi giriniz:");
	scanf("%s",&karakterdizisi);
	
	printf("Girdi�iniz say�:%d",sayi);
	printf("\nGirdi�iniz say�:%f",kesirlisayi);
	printf("\Girdi�iniz say�:%lf",kesirlisayi2);
	printf("\nGirdi�iniz karakter:%c",karakter);
	printf("\nGirdi�iniz karakterdizisi:%s",karakterdizisi);
	
	
}
