#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include <string.h>//strcpy komutunu kullanmak için bu kütüphaneyi ekledik


struct alper{
	int a1;
	int b1;
}d;
//union ile farký þudur:
// union ayný anda tek deðiken kullanmasýna izin verir structda böyle bir sýnýrlama yoktur

main(){
	setlocale(LC_ALL,"Turkish");
	d.a1=14;
	printf("%d",d.a1);
	char str1[]="Benim adim sadi";
  //strcpy komutunun kullanýmý anlatýldý
  char str2[40];
  char str3[40];
  strcpy(str2,str1);//str1 -->str2'ye kopyalanýyor
  strcpy(str3,"basriyla kopyalandi");//yazýlan string---->str3'e kopyalanýyor
  printf("str1: %snstr2: %snstr3: %sn",str1,str2,str3);
	
}





/*
Bu yapý yazýlým dilinde enum, enumaration ya da enum sabitleri olarak adlandýrýlýr.   
Programda birçok deðiþkene tek tek sayýsal deðer vermek yerine "enum" kullanýlabilir.
Deðiþkenlerin alabileceði deðerlerin sabit (belli) olduðu durumlarda programý daha okunabilir hale getirmek için kullanýlýr
 Özet olarak "enum" yapýsý sayýlarý anlamlý þekilde isimlendirerek kullanabilmeye izin verir.
 
 
enum sehirler
{
	// enum mainden önce açýlýr kelimeleri içinde
	//kelimeler sonuna ; koyulamaz sadece blok kapatmak için blok sonuna koyulur
	adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
	//istenirse enumlara numara verilebilir örneðin adana=1 denebilir
};

main(){
	enum sehirler il;//enuma bir komut atadýk artýk il aracýlýðý ile enumu kullanýcaz
	setlocale(LC_ALL,"Turkish");
	il=ankara;
	printf("%d",il);
//5 demesinin sebebi indeksin ilk elemaýnýn 0 olarak tanýmasý
}
*/
