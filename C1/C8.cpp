#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
//if else else if �rnekler
main(){
	setlocale(LC_ALL,"Turkish");
	
	
	
	
	/*
	//girilen say�n�n �ift tek olup olmad���n� sorgular
	int sayi;
	printf("say� giriniz:");
	scanf("%d",&sayi);
	if(sayi%2==0){
		printf("girilen say� �ifttir");
	}
	else if(sayi==0){
	printf("girilen say� 0'd�r");
	}
	else{
		printf("girilen say� tektir");
	}
	
	/*
	// 3 say� �zerinde i�lemler yap�ld�

	int sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;
	printf("3 farkl� say� giriniz:");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	kucuk = sayi1;
	if(kucuk>sayi2){
		kucuk = sayi2;
	}
	if(kucuk>sayi3){
		kucuk = sayi3;
	}
	buyuk = sayi1;
	if(buyuk<sayi2){
		buyuk = sayi2;
	}
	if(buyuk<sayi3){
		buyuk = sayi3;
	}
	toplam = sayi1+sayi2+sayi3;
	ortalama = toplam/3;
	carpim=sayi1*sayi2*sayi3;
	printf("En k���k say�:%d\n",kucuk);
	printf("En b�y�k say�:%d\n",buyuk);
	printf("Say�lar�n toplam�:%d\n",toplam);
	printf("Say�lar�n �arp�m�:%d\n",carpim);
	printf("Say�lar�n ortalamas�:%d\n",ortalama);
	
	
	/*
	//Kat� olup olmad���n� sorgular
	int a,b;
	printf("Kat� olup olmad���n� ��renmek istedi�iniz 2 say� giriniz(�nce b�y�k say�):");
	scanf("%d%d",&a,&b);
	if(a==0 || b ==0){
		printf("0 girdiniz.");
	}
	if(a%b==0){
		printf("%d'say�s� %d'say�s�n�n kat�d�r",b,a);
	}
	/*
	// toplu �r�n sat�n al�m�
    int adet;
    float fiyat;
    float toplamfiyat;
    printf("�r�n�m�zden ka� adet almak istiyorsunuz:");
    scanf("%d",&adet);
    
    if(adet>0 && adet<=100){
    	fiyat = 3;
	}
	else if(adet>100 && adet<=200){
		fiyat = 2.5;
	}
	else if(adet>200 && adet<=300){
		fiyat = 2;
	}
	else if(adet>300 && adet<=400){
		fiyat = 1.25;
	}
	else if(adet>=400){
		fiyat = 0.75;
	}
	else{
		printf("tan�ms�z de�er");
	}
	toplamfiyat = adet*fiyat;
	printf("�demeniz gereken miktar:%f",toplamfiyat);
	
	


	/*
	//m�lakat s�nav� (boy)
	char cinsiyet;
	int boy;
	printf("cinsiyetinizi belirtiniz(e/k):");
	scanf("%c",&cinsiyet);
	
		
	printf("l�tfen boyunuzu cm cinsinden giriniz:");
	scanf("%d",&boy);
	
	if((cinsiyet == 'E'|| cinsiyet == 'e') && boy>160 ){
		printf("tebrikler  m�lakat�n� ge�tiniz");
	}
	else if((cinsiyet == 'K' || cinsiyet == 'k' ) && boy>150){
		printf("tebrikler m�lakat� ge�tiniz.");
	}
	else{
		printf("maalesef elendiniz.");
	}
	
	
	/*
	//girilen harfe g�re erkek veya kad�n oldu�unu belirtir
	if(cinsiyet == 'E'|| cinsiyet == 'e'){
		printf("cinsiyetiniz erkek");
	}
	else if(cinsiyet == 'K' || cinsiyet == 'k	' ){
		printf("cinsiyetiniz kad�n");
	}
	else{
		printf("tan�ms�z de�er");
	}
	
	
	/*
	//say�n�n 10'a b�l�nmesini sorgulad�k
	int sayi;
	printf("l�tfen bir say� giriniz:");
	scanf("%d",&sayi);
	if(sayi%10==0){
		printf("say� 10'a b�l�n�yor.");
	}
	else{
		printf("10'a b�l�nm�yor.");
	}
	*/
}
