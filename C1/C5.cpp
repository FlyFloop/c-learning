#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
//Matematiksel Ýþlemler
main(){
	setlocale(LC_ALL,"Turkish");
//	int sayi1 =5;
//int sayi2,sayi3;	
	//sayi1++;veya;
	//sayi1 = sayi1+1;//veya
	//sayi1 +=1
	// azaltmak için + larý - yapýyoruz
	//çarpma iþlemi
	//sayi1 = sayi1*5;
	//sayi1 *=5;	
//bölmede çarpma ile aynýdýr
// mod almak
// sayi1 = sayi1 % 6;
//sayi2 = sayi1++; // önce sayi1'i sayi2ye ata ardýndan sayi1'i attýr
//sayi3 = ++sayi1; // sayi3'e sayi1'i 1 arttýrýp ata önce sayi1'i arttýrýr
//	printf("%d",sayi3);

//       Tip(int,float,double) dönüþümleri
 // tip dönüþümlerinde int --> float ---> double
 int x=30;
 float y=30;
 double z=30;
 
 printf("%f",x/y);
// cevabý 0 vermesinin sebebi en güçlü deðiþkenin double en gücsüzünün int olmasýdýrý
// float ve double'ý inte bölüyorsam %f kullanýcam çünkü intten daha güçlüler


}
