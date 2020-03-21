#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
/*
Bu yapý yazýlým dilinde enum, enumaration ya da enum sabitleri olarak adlandýrýlýr.   
Programda birçok deðiþkene tek tek sayýsal deðer vermek yerine "enum" kullanýlabilir.
Deðiþkenlerin alabileceði deðerlerin sabit (belli) olduðu durumlarda programý daha okunabilir hale getirmek için kullanýlýr
 Özet olarak "enum" yapýsý sayýlarý anlamlý þekilde isimlendirerek kullanabilmeye izin verir.
 */
enum sehirler
{
	// enum mainden önce açýlýr kelimeleri içinde
	//kelimeler sonuna ; koyulamaz sadece blok kapatmak için blok sonuna koyulur
	adana=1,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
};

main(){
	enum sehirler il;//enuma bir komut atadýk artýk il aracýlýðý ile enumu kullanýcaz
	setlocale(LC_ALL,"Turkish");
	il=ankara;
	printf("%d",il);
//5 demesinin sebebi indeksin ilk elemaýnýn 0 olarak tanýmasý
}
