#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

//while
main(){
	setlocale(LC_ALL,"Turkish");
	
	/*
	//tamsayýlarda faktoriyel hesaplar
	int f,a;
	printf("faktoriyelini hesaplamak istediðiniz sayýyý giriniz:");
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
	mutlak deðer hesaplar
	// abs mutlak deðer demektir.
	int n;
	int a;
	a=0;
	printf("sayý giriniz:");
	scanf("%d",&n);
	a = abs(n);
	printf("%d",a);	
	/*
	//2 sayý arasýndaki sayýlarý toplar
	int n1,n2;
	int sayac=0;
	int toplam=0;
	printf("lütfen 2 sayý giriniz(önce büyük sayýyý giriniz):");
	scanf("%d%d",&n2,&n1);
	sayac = (n2-n1) - 1;
	while(sayac>0){
		toplam = (n2-1)+toplam;
		n2--;
		sayac--;
	}
	printf("%d",toplam);

	
	
	
	/*
	1'den n'e kadar olan sayýlarýn toplamý
	int n;
	int toplam=0;
	printf("lütfen n deðerini giriniz:");
	scanf("%d",&n);
	while(n>0){
		toplam = n+toplam;
		n--;
	}
	printf("%d",toplam);
	
	/*
	// 1'den 10a kadar sayýlarýn çarpým tablosu
	int i=0;
	while(i<=10){
		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i*1,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
		i++;
	}
	
	
	
	/*
	int i=0;
	//0 c dilinde false 0 hariç hepsi true
	while(i<10){
		printf("%d-)while döngüsüne baþladýk\n",i+1);
		i++;
	}
	*/
}
