#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
//Kullanýcýdan veri alma iþlemleri
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
	float kesirlisayi;
	double kesirlisayi2;
	char karakter;
	char karakterdizisi[5];
	printf("Lütfen bir sayý deðeri giriniz:");
	scanf("%d",&sayi);
	printf("Lütfen bir sayý deðeri giriniz:");
	scanf("%f",&kesirlisayi);//float deðeri konsoldan girilirken virgülle girilir örn:5,6
	printf("Lütfen bir sayý deðeri giriniz:");
	scanf("%lf",&kesirlisayi2);
	printf("Lütfen bir karakter giriniz:");
	scanf(" %c",&karakter);//c de çok fazla scanf fonksiyonu varsa istisna olarak %c yazýlmadan önce 1 boþluk býrakýlýp yazýlýr 
	printf("Lütfen bir karakter dizisi giriniz:");
	scanf("%s",&karakterdizisi);
	
	printf("Girdiðiniz sayý:%d",sayi);
	printf("\nGirdiðiniz sayý:%f",kesirlisayi);
	printf("\Girdiðiniz sayý:%lf",kesirlisayi2);
	printf("\nGirdiðiniz karakter:%c",karakter);
	printf("\nGirdiðiniz karakterdizisi:%s",karakterdizisi);
	
	
}
