#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include <string.h>//strcpy komutunu kullanmak i�in bu k�t�phaneyi ekledik


struct alper{
	int a1;
	int b1;
}d;
//union ile fark� �udur:
// union ayn� anda tek de�iken kullanmas�na izin verir structda b�yle bir s�n�rlama yoktur

main(){
	setlocale(LC_ALL,"Turkish");
	d.a1=14;
	printf("%d",d.a1);
	char str1[]="Benim adim sadi";
  //strcpy komutunun kullan�m� anlat�ld�
  char str2[40];
  char str3[40];
  strcpy(str2,str1);//str1 -->str2'ye kopyalan�yor
  strcpy(str3,"basriyla kopyalandi");//yaz�lan string---->str3'e kopyalan�yor
  printf("str1: %snstr2: %snstr3: %sn",str1,str2,str3);
	
}





/*
Bu yap� yaz�l�m dilinde enum, enumaration ya da enum sabitleri olarak adland�r�l�r.   
Programda bir�ok de�i�kene tek tek say�sal de�er vermek yerine "enum" kullan�labilir.
De�i�kenlerin alabilece�i de�erlerin sabit (belli) oldu�u durumlarda program� daha okunabilir hale getirmek i�in kullan�l�r
 �zet olarak "enum" yap�s� say�lar� anlaml� �ekilde isimlendirerek kullanabilmeye izin verir.
 
 
enum sehirler
{
	// enum mainden �nce a��l�r kelimeleri i�inde
	//kelimeler sonuna ; koyulamaz sadece blok kapatmak i�in blok sonuna koyulur
	adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
	//istenirse enumlara numara verilebilir �rne�in adana=1 denebilir
};

main(){
	enum sehirler il;//enuma bir komut atad�k art�k il arac�l��� ile enumu kullan�caz
	setlocale(LC_ALL,"Turkish");
	il=ankara;
	printf("%d",il);
//5 demesinin sebebi indeksin ilk elema�n�n 0 olarak tan�mas�
}
*/
