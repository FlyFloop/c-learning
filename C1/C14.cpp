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
		printf("toplam bilet say�m�z:%d\n",biletsayisi);
		if(cevap=='e' || cevap=='E'){
			//biletsayisi--;
			printf("ka� bilet sat�n almak istiyorsunuz:");
			scanf("%d",&satinal);
			biletsayisi = biletsayisi-satinal;//biletsayisi -= satinal;
			if(satinal==100){
				printf("b�t�n biletlerini sat�n ald�n�z\nkalan bilet say�s�:%d\n",biletsayisi);
				break;
				
			}
			printf("kalan bilet say�s�:%d\n",biletsayisi);
		}
		else if(cevap=='h' || cevap=='H'){
			printf("kalan bilet say�s�:%d\n",biletsayisi);
			break;
		}
		
	}
    printf("al�nan bilet say�s�:%d\n",100-biletsayisi);
	
	
	
	/*
	int sayi;
	int toplam;
    printf("l�tfen bir say� giriniz:");
    scanf("%d",&sayi);
    
    for(;sayi>0;sayi--){
    	toplam = toplam+sayi;
	}
	printf("toplam:%d",toplam);
	
	/*
	//girilen say�ya kadar 5'e b�l�nebilen say�lar� yazd�r�r
	int gsayi;
	printf("girdi�iniz say�ya kadar 5'e b�l�nebilen say�lar� yazd�r�r say� giriniz:");
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
	tekrar bak�l�cak
	int sayi,toplam,a,b;
	toplam=0;
	printf("l�tfen bir say� giriniz:");
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
 continue;// direk i++ya gider alt�ndaki kodlar �al��maz
printf("11111");
	}
*/
}
