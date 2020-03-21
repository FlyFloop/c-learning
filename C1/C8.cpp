#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
//if else else if örnekler
main(){
	setlocale(LC_ALL,"Turkish");
	
	
	
	
	/*
	//girilen sayýnýn çift tek olup olmadýðýný sorgular
	int sayi;
	printf("sayý giriniz:");
	scanf("%d",&sayi);
	if(sayi%2==0){
		printf("girilen sayý çifttir");
	}
	else if(sayi==0){
	printf("girilen sayý 0'dýr");
	}
	else{
		printf("girilen sayý tektir");
	}
	
	/*
	// 3 sayý üzerinde iþlemler yapýldý

	int sayi1,sayi2,sayi3,kucuk,buyuk,toplam,ortalama,carpim;
	printf("3 farklý sayý giriniz:");
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
	printf("En küçük sayý:%d\n",kucuk);
	printf("En büyük sayý:%d\n",buyuk);
	printf("Sayýlarýn toplamý:%d\n",toplam);
	printf("Sayýlarýn çarpýmý:%d\n",carpim);
	printf("Sayýlarýn ortalamasý:%d\n",ortalama);
	
	
	/*
	//Katý olup olmadýðýný sorgular
	int a,b;
	printf("Katý olup olmadýðýný öðrenmek istediðiniz 2 sayý giriniz(Önce büyük sayý):");
	scanf("%d%d",&a,&b);
	if(a==0 || b ==0){
		printf("0 girdiniz.");
	}
	if(a%b==0){
		printf("%d'sayýsý %d'sayýsýnýn katýdýr",b,a);
	}
	/*
	// toplu ürün satýn alýmý
    int adet;
    float fiyat;
    float toplamfiyat;
    printf("Ürünümüzden kaç adet almak istiyorsunuz:");
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
		printf("tanýmsýz deðer");
	}
	toplamfiyat = adet*fiyat;
	printf("Ödemeniz gereken miktar:%f",toplamfiyat);
	
	


	/*
	//mülakat sýnavý (boy)
	char cinsiyet;
	int boy;
	printf("cinsiyetinizi belirtiniz(e/k):");
	scanf("%c",&cinsiyet);
	
		
	printf("lütfen boyunuzu cm cinsinden giriniz:");
	scanf("%d",&boy);
	
	if((cinsiyet == 'E'|| cinsiyet == 'e') && boy>160 ){
		printf("tebrikler  mülakatýný geçtiniz");
	}
	else if((cinsiyet == 'K' || cinsiyet == 'k' ) && boy>150){
		printf("tebrikler mülakatý geçtiniz.");
	}
	else{
		printf("maalesef elendiniz.");
	}
	
	
	/*
	//girilen harfe göre erkek veya kadýn olduðunu belirtir
	if(cinsiyet == 'E'|| cinsiyet == 'e'){
		printf("cinsiyetiniz erkek");
	}
	else if(cinsiyet == 'K' || cinsiyet == 'k	' ){
		printf("cinsiyetiniz kadýn");
	}
	else{
		printf("tanýmsýz deðer");
	}
	
	
	/*
	//sayýnýn 10'a bölünmesini sorguladýk
	int sayi;
	printf("lütfen bir sayý giriniz:");
	scanf("%d",&sayi);
	if(sayi%10==0){
		printf("sayý 10'a bölünüyor.");
	}
	else{
		printf("10'a bölünmüyor.");
	}
	*/
}
