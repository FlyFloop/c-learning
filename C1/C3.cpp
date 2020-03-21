#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
// DEÐÝÞKENLER VE KARAKTER DÝZÝSÝ MANTIÐI
main(){
	setlocale(LC_ALL,"Turkish");
	int x=100; // int tamsayý deðiþkenidir. 4 byte yer kaplar
	float kilo1=102.2; // float ondalýklý sayýdýr. 4 byte yer kaplar
	double kilo=2222.1321; // double uzun ondalýklý sayýdýr. 8 byte yer kaplar
	char a = 'k'; // char harf tutar.1 byte yer kaplar
	char karakterdizisi[10]="123456789"; // burada karakterdizisine 9 harfli bir kelime tanýmlanabilir 10.ifade ise \0 ifadesidir bu dizinin bittiðini tanýmlar.
	
	// bastýrma zamaný
	printf("%d",x);// tamsayýlarý %d ile bastýrýyoruz
	printf("\n%.2f",kilo1);// ondalýklý sayýlarý(float) ise %f ile bastýyýroruz .2 ise noktadan sonra(virgül) 2 basamak göster demek
	printf("\n%lf",kilo);//double gibi büyük ondalýklý sayýlar ise %lf(long float) ile bastýrýyoruz
	printf("\n%c",a); // charlarý ise %c ile bastýrýyoruz
	printf("\n%s",karakterdizisi);// kelimeleri yani stringleri ise %s ile bastýrýyoruz
	printf("\n%d",sizeof(a)); //sizeof komutu burda ram de deðiþkenlerin kapladýðý yerleri bize gösterir
}
