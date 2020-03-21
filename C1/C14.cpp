#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<math.h>
//for
main(){
	setlocale(LC_ALL,"Turkish");
	int i,j;
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			printf("%d  %d\n",i,j);
		}
	}
	
	
	
	/*
	int x,y,z;
	x=1;
	y=1;
	for(int i=0;i<10;i++){
		z=x+y;
		x=y;
		y=z;
		printf("%d\n",z);
	}
	
	
	
	/*
	int biletsayisi,satinal;
	char cevap;
	biletsayisi=100;
	for(;biletsayisi>0;){
		printf("bilet almak istiyor musunuz(e/h):\n");
		scanf(" %c",&cevap);
		printf("toplam bilet sayýmýz:%d\n",biletsayisi);
		if(cevap=='e' || cevap=='E'){
			//biletsayisi--;
			printf("kaç bilet satýn almak istiyorsunuz:");
			scanf("%d",&satinal);
			biletsayisi = biletsayisi-satinal;//biletsayisi -= satinal;
			if(satinal==100){
				printf("bütün biletlerini satýn aldýnýz\nkalan bilet sayýsý:%d\n",biletsayisi);
				break;
				
			}
			printf("kalan bilet sayýsý:%d\n",biletsayisi);
		}
		else if(cevap=='h' || cevap=='H'){
			printf("kalan bilet sayýsý:%d\n",biletsayisi);
			break;
		}
		
	}
    printf("alýnan bilet sayýsý:%d\n",100-biletsayisi);
	
	
	
	/*
	int sayi;
	int toplam;
    printf("lütfen bir sayý giriniz:");
    scanf("%d",&sayi);
    
    for(;sayi>0;sayi--){
    	toplam = toplam+sayi;
	}
	printf("toplam:%d",toplam);
	
	/*
	//girilen sayýya kadar 5'e bölünebilen sayýlarý yazdýrýr
	int gsayi;
	printf("girdiðiniz sayýya kadar 5'e bölünebilen sayýlarý yazdýrýr sayý giriniz:");
	scanf("%d",&gsayi);
	if(gsayi<0){
		for(int k=0;k>gsayi;k-=5){
				printf("%d\n",k);
		}
		
	}
	
	for(int a=0;gsayi>=a;a+=5){
		printf("%d\n",a);
	}
		
	/*
	tekrar bakýlýcak
	int sayi,toplam,a,b;
	toplam=0;
	printf("lütfen bir sayý giriniz:");
	scanf("%d",&sayi);
	
	for(;sayi<0;){
		a = sayi%10;
		b = pow(a,a);
		toplam += b;
		sayi /=10;
	}
	printf("toplam:%d",toplam);
	
	
	
	/*
	for(int i=11;i>10 || i<20 ;i+=2){
		printf("%d\n",i);
	}
	
	
	
	
/*
	int i;

    for(i=0;i<10;i++){
 printf("%d",i);
 continue;// direk i++ya gider altýndaki kodlar çalýþmaz
printf("11111");
	}
*/
}
