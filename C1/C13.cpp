#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<math.h>
//do while
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,basamak,toplam;
	printf("l�tfen bir sayi giriniz:");
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
	//kullan�c�n�n girdi�i say�lar� kar��la�t�r�r
	int a,b;
	do{
		b=a;
		printf("l�tfen  say� giriniz:");
		scanf("%d",&a);
		
		if(b>a){
			printf("�nceki girdi�iniz say� daha b�y�k\n");
		}
		else if (a==b){
			printf("girdi�iniz say�lar e�it\n");
		}
		else{
			printf("�nceki girdi�iniz say� daha d���k\n");
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
