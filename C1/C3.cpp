#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
// DE���KENLER VE KARAKTER D�Z�S� MANTI�I
main(){
	setlocale(LC_ALL,"Turkish");
	int x=100; // int tamsay� de�i�kenidir. 4 byte yer kaplar
	float kilo1=102.2; // float ondal�kl� say�d�r. 4 byte yer kaplar
	double kilo=2222.1321; // double uzun ondal�kl� say�d�r. 8 byte yer kaplar
	char a = 'k'; // char harf tutar.1 byte yer kaplar
	char karakterdizisi[10]="123456789"; // burada karakterdizisine 9 harfli bir kelime tan�mlanabilir 10.ifade ise \0 ifadesidir bu dizinin bitti�ini tan�mlar.
	
	// bast�rma zaman�
	printf("%d",x);// tamsay�lar� %d ile bast�r�yoruz
	printf("\n%.2f",kilo1);// ondal�kl� say�lar�(float) ise %f ile bast�y�roruz .2 ise noktadan sonra(virg�l) 2 basamak g�ster demek
	printf("\n%lf",kilo);//double gibi b�y�k ondal�kl� say�lar ise %lf(long float) ile bast�r�yoruz
	printf("\n%c",a); // charlar� ise %c ile bast�r�yoruz
	printf("\n%s",karakterdizisi);// kelimeleri yani stringleri ise %s ile bast�r�yoruz
	printf("\n%d",sizeof(a)); //sizeof komutu burda ram de de�i�kenlerin kaplad��� yerleri bize g�sterir
}
