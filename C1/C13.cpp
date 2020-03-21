#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<math.h>
//do while
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,basamak,toplam;
	printf("lütfen bir sayi giriniz:");
	scanf("%d",&sayi);
	basamak =0;
	toplam=0;
	do{
		
		toplam += sayi%10;
		basamak++;
		sayi /= 10;
	}while(sayi>0);
	printf("%d      %d",basamak,toplam);
	/*
	//kullanýcýnýn girdiði sayýlarý karþýlaþtýrýr
	int a,b;
	do{
		b=a;
		printf("lütfen  sayý giriniz:");
		scanf("%d",&a);
		
		if(b>a){
			printf("önceki girdiðiniz sayý daha büyük\n");
		}
		else if (a==b){
			printf("girdiðiniz sayýlar eþit\n");
		}
		else{
			printf("önceki girdiðiniz sayý daha düþük\n");
		}
	
		
	}while(1);

/*	setlocale(LC_ALL,"Turkish");
	int i=0;
	while(i<10){
		printf("%d\n",i);
		i++;
	}
	printf("\n");
	int a=110;
	do{
		
		printf("%d\n",a);
		a++;
	}while(a<10);
	*/
}
