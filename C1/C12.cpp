#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

//while
main(){
	setlocale(LC_ALL,"Turkish");
	
	/*
	//tamsay�larda faktoriyel hesaplar
	int f,a;
	printf("faktoriyelini hesaplamak istedi�iniz say�y� giriniz:");
	scanf("%d",&f);
	a=1;
	if(f==0){
		printf("1");
	}
	else if(f<0){
		f = abs(f);
		while(f>0){
			a = f*a;
			f--;
		}
		printf("%d",a);
	}
	else{
			while(f>0){
			a = f*a;
			f--;
		}
		printf("%d",a);
		
	}
	
	
	
	
	/*
	mutlak de�er hesaplar
	// abs mutlak de�er demektir.
	int n;
	int a;
	a=0;
	printf("say� giriniz:");
	scanf("%d",&n);
	a = abs(n);
	printf("%d",a);	
	/*
	//2 say� aras�ndaki say�lar� toplar
	int n1,n2;
	int sayac=0;
	int toplam=0;
	printf("l�tfen 2 say� giriniz(�nce b�y�k say�y� giriniz):");
	scanf("%d%d",&n2,&n1);
	sayac = (n2-n1) - 1;
	while(sayac>0){
		toplam = (n2-1)+toplam;
		n2--;
		sayac--;
	}
	printf("%d",toplam);

	
	
	
	/*
	1'den n'e kadar olan say�lar�n toplam�
	int n;
	int toplam=0;
	printf("l�tfen n de�erini giriniz:");
	scanf("%d",&n);
	while(n>0){
		toplam = n+toplam;
		n--;
	}
	printf("%d",toplam);
	
	/*
	// 1'den 10a kadar say�lar�n �arp�m tablosu
	int i=0;
	while(i<=10){
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i*1,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
		i++;
	}
	
	
	
	/*
	int i=0;
	//0 c dilinde false 0 hari� hepsi true
	while(i<10){
		printf("%d-)while d�ng�s�ne ba�lad�k\n",i+1);
		i++;
	}
	*/
}
