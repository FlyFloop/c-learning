#include<locale.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	setlocale(LC_ALL,"Turkish");
	char random[100];
	printf("bir ülke ismi giriniz:");
	scanf("%s",&random);
	printf("%s",random);
/*	char takimismi[6] ="Barça";
	//bir dizi halinde almak istiyorsan %c yerine %s kullanýlýr
	for(int i=0;i<6;i++){
		printf("%c\n",takimismi[i]);
	} 
	printf("XXXXXX");
/*	char isim[6]="Alper";//eklediðin karakterden 1 fazlasýný tanýmlamak zorundasýn
	// c dilinde karakter dizilerinin bittiðini anlamak için otomatik bir þekilde /0 koyuyor
	printf("%s",isim); 
/*
//tek boyutlu int ve float dizileri
	float sayilar[7]={};//dizileri tanýmlarken kaç elemanlý olduðunu mutlaka belirt
	for(int i=0;i<7;i++){
		printf("%d.elemaný giriniz:",i+1);
		scanf("%f",&sayilar[i]);
	}
	// dizi tanýmlarken []boyutu {} bu ise dizinin içindeki elemanlarýn 0 olduðunu tanýmlar
		for(int i=0;i<7;i++){
		printf("%.1f\n",sayilar[i]);
		
	}
/*	float sayilar[]={1.5,2.7,3.8,123.9};
		for(int i=0;i<4;i++){
		printf("%.1f\n",sayilar[i]);
	}
/*	int sayilar[]={3,6,9,12,15};
	for(int i=0;i<5;i++){
		printf("%d\n",sayilar[i]);
	}
printf("%d\n%d",sayilar[0],sayilar[1]);//dizideki sayýlarý tek tek bastýrdýk.
*/
}
