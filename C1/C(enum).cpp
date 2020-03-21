#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
/*
Bu yap� yaz�l�m dilinde enum, enumaration ya da enum sabitleri olarak adland�r�l�r.   
Programda bir�ok de�i�kene tek tek say�sal de�er vermek yerine "enum" kullan�labilir.
De�i�kenlerin alabilece�i de�erlerin sabit (belli) oldu�u durumlarda program� daha okunabilir hale getirmek i�in kullan�l�r
 �zet olarak "enum" yap�s� say�lar� anlaml� �ekilde isimlendirerek kullanabilmeye izin verir.
 */
enum sehirler
{
	// enum mainden �nce a��l�r kelimeleri i�inde
	//kelimeler sonuna ; koyulamaz sadece blok kapatmak i�in blok sonuna koyulur
	adana=1,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
};

main(){
	enum sehirler il;//enuma bir komut atad�k art�k il arac�l��� ile enumu kullan�caz
	setlocale(LC_ALL,"Turkish");
	il=ankara;
	printf("%d",il);
//5 demesinin sebebi indeksin ilk elema�n�n 0 olarak tan�mas�
}
