#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.14
//link:https://codeforwin.org/2015/05/basic-programming-practice-problems.html

main(){
	
	
	//18-)Write a C program to enter P, T, R and calculate Compound Interest.
	float anapara,oran,donem,faiz;
	printf("sirasiyla anapara,oran,donem degerlerini giriniz:");
	scanf("%f%f%f",&anapara,&oran,&donem);
	faiz=(anapara*(pow(1+oran/100,donem))); 
	printf("bilesik faiz:%f",faiz);
	
	
	
	/*
	
	//17-)Write a C program to enter P, T, R and calculate Simple Interest.
	float miktar,zaman,yuzde,faiz;
	printf("miktar,zaman ve yuzdeyi sirasiyle giriniz:");
	scanf("%f%f%f",&miktar,&zaman,&yuzde);
	faiz=(miktar*zaman*yuzde)/100;
	printf("basit faiz:%f",faiz);
	
	
	
	/*
	
	
	//16-)Write a C program to enter marks of five subjects and calculate total, average and percentage.
	int sayi1,sayi2,sayi3,sayi4,sayi5,toplam,ortalama,yuzde;
	printf("5 tane sayi giriniz:");
	scanf("%d%d%d%d%d",&sayi1,&sayi2,&sayi3,&sayi4,&sayi5);
	toplam=sayi1+sayi2+sayi3+sayi4+sayi5;
	ortalama=toplam/5;
	yuzde=(toplam*100)/500;
	printf("toplami:%d",toplam);
	printf("\nortalama:%d",ortalama);
	printf("\nyuzde:%f",(float)yuzde);
	
	
	
	/*
	
	//15-)Write a C program to calculate area of an equilateral triangle.
	float kenar,alan;
	printf("eskenar ucgenin bir kenarini giriniz:");
	scanf("%f",&kenar);
	alan=(sqrt(3)*kenar*kenar)/4;
	printf("ucgenin alani:%f",alan);
	
	
	
	
	/*
	
	//14-)Write a C program to enter base and height of a triangle and find its area.
	int yuk,taban,alan;
	printf("ucgenin sirasiyla yuksekligini ve tabanini giriniz:");
	scanf("%d%d",&yuk,&taban);
	alan=(yuk*taban)/2;
	printf("ucgenin alani:%d",alan);
	
	
	
	/*
	
	//13-)Write a C program to enter two angles of a triangle and find the third angle.
	int aci1,aci2,aci3;
	printf("ucgenin ilk 2 acisini giriniz:");
	scanf("%d%d",&aci1,&aci2);
	aci3=180-(aci1+aci2);
	printf("Ucgenin 3.acisi:%d",aci3);
	
	
	
	
	
	/*
	
	//12-)Write a C program to enter any number and calculate its square root.
	int sayi,kok;
	printf("kokunu almak istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	kok=sqrt(sayi);
	printf("%d sayisinin koku:%d",sayi,kok);
	
	
	/*
	
	//11-)Write a C program to find power of any number x ^ y.
	int sayi,us,sonuc;
	printf("hangi sayinin kacinci ussunu almak istiyorsunuz(sayi/us):");
	scanf("%d%d",&sayi,&us);
	sonuc=pow(sayi,us);
	printf("Sonuc:%d",sonuc);
	
	
	
	
	/*
	
	
	//10-)Write a C program to convert days into years, weeks and days.
	int gun,yil,hafta;
	printf("Gun sayisini giriniz:");
	scanf("%d",&gun);
	yil=gun/365;
    hafta=(gun%365)/7;
    gun=gun-((yil*365)+(hafta*7));
    printf("Yil:%d",yil);
    printf("\nGun:%d",gun);
    printf("\nHafta:%d",hafta);
    
	
	
	
	/*
	
	//9-)Write a C program to enter temperature in Fahrenheit and convert to Celsius
	float cel,fahren;
	printf("Celsius cinsinden sicaklik derecesi giriniz:");
	scanf("%f",&fahren);
	cel=((fahren-32)*5)/9;
	printf("Celsius cinsinden:%2f",cel);
	
	
	
	/*
	
	//8-)Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
	float cel,fahren;
	printf("Celsius cinsinden sicaklik derecesi giriniz:");
	scanf("%f",&cel);
	fahren=((cel*9)/5) + 32;
	printf("Fahrenheit cinsinden:%2f",fahren);
	
	
	/*
	
	//7-)Write a C program to enter length in centimeter and convert it into meter and kilometer.
	float cm,m,km;
	printf("santimetre uzunlugu giriniz:");
	scanf("%f",&cm);
	m=cm/100;
	km=cm/100000;
	printf("metre cinsinden:%.2f",m);
	printf("\nkilometre cinsinden:%.2f",km);
	
	
	/*
	
	//6-)Write a C program to enter radius of a circle and find its diameter, circumference and area.
	float yaricap,cap,cevre,alan;
	printf("cemberin capini giriniz:");
	scanf("%f",&yaricap);
	cap=2*yaricap;
	cevre=2*PI*yaricap;
	alan=PI*yaricap*yaricap;
	printf("cemberin capi:%f",cap);
	printf("\ncemberin cevresi:%f",cevre);
	printf("\ncemberin alani:%f",alan);
	
	
	
	/*
	
	//5-)Write a C program to enter length and breadth of a rectangle and find its area.
	int kisakenar,uzunkenar,alan;
	printf("dikdortgenin sirasiyla kisa ve uzun kenarini giriniz:");
	scanf("%d%d",&kisakenar,&uzunkenar);
	alan=kisakenar*uzunkenar;
	printf("dikdortgenin cevresi:%d",alan);
	
	
	
	
	/*
	
	//4-)Write a C program to enter length and breadth of a rectangle and find its perimeter.
	int kisakenar,uzunkenar,cevre;
	printf("dikdortgenin sirasiyla kisa ve uzun kenarini giriniz:");
	scanf("%d%d",&kisakenar,&uzunkenar);
	cevre=2*(kisakenar+uzunkenar);
	printf("dikdortgenin cevresi:%d",cevre);
	
	
	/*
	
	//3-)Write a C program to enter two numbers and perform all arithmetic operations.
	int sayi1,sayi2,toplam,cikarma,bolme,carpma,mod;
	printf("lutfen 2 tane sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	toplam=sayi1+sayi2;
	cikarma=sayi1-sayi2;
	bolme=sayi1/sayi2;
	carpma=sayi1*sayi2;
	mod=sayi1%sayi2;
	printf("Toplami:%d",toplam);
	printf("\nCikarma:%d",cikarma);
	printf("\nBolum:%d",bolme);
	printf("\nCarpim:%d",carpma);
	printf("\nMod:%d",mod);


	
	
	
	/*
	
	//2-)Write a C program to enter two numbers and find their sum.
	int sayi1,sayi2,toplam;
	printf("lutfen 2 sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	toplam=sayi1+sayi2;
	printf("girdiginiz sayilarin toplami:%d",toplam);
	
	
	
	/*
	//1-)Write a C program to perform input/output of all basic data types.
	int tamsayi;
	float fsayi;
	char karakter;
	printf("bir tam sayi giriniz:");
	scanf("%d",&tamsayi);
	printf("girdiginiz tamsayi:%d",tamsayi);
	printf("\nbir ondalikli sayi giriniz:");
	scanf("%f",&fsayi);
	printf("girdiginiz ondalikli sayi:%f",fsayi);
	printf("\nbir karakter giriniz:");
	scanf(" %c",&karakter);
	printf("girdiginiz karakter:%c",karakter);
	*/
}
