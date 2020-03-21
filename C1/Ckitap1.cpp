#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<float.h> //float veri tipinin alt ve üst sýnýrlarýný görmek için float.h kütüphanesi kullanýldý

main(){
	setlocale(LC_ALL,"Turkish");
	
	
	
	/*
	printf("%E",FLT_MIN);// Özel olarak %E kullanýldý
	printf("\n%E",FLT_MAX);
	
	/*
	girilen harfin sesli olduðunu belirtir.
	char karakter;
	printf("bir harf giriniz:");
	scanf("%c",&karakter);
	int karakterc;
	karakterc = karakter;
	switch(karakterc){
		case 65:
			printf("sesli harfdir.");
			break;
		case 69:
			printf("sesli harfdir.");
			break;
		case 73:
			printf("sesli harfdir.");
			break;
		case 79:
			printf("sesli harfdir.");
			break;
		case 85:
			printf("sesli harfdir.");
			break;
		case 97:
			printf("sesli harfdir.");
			break;
		case 101:
			printf("sesli harfdir.");
			break;
		case 105:
			printf("sesli harfdir.");
			break;
		case 111:
			printf("sesli harfdir.");
			break;
		case 117:
			printf("sesli harfdir.");
			break;
		default:
			printf("sessiz harfdir.");
			break;
		
	}
	/*
	sayfa 104 switch case if else'e dönüþtürüldü
	int a;
	printf("lütfen haftanýn günlerinden birini giriniz:");
	scanf("%d",&a);
	if(a==1){
		printf("pazartesi");
	}
	else if(a==2){
		printf("salý");
	}
	else if(a==3){
		printf("çarþamba");
	}
	else if(a==4){
		printf("perþembe");
	}
	else if(a==5){
		printf("cuma");
	}
	else if(a==6){
		printf("cumartesi");
	}
	else if(a==7){
		printf("pazar");
	}
	else{
		printf("öyle bir gün yok");
	}
	/*
char a;
printf("bir harfe basýnýz:");
scanf("%c",&a);
switch(a){
	case 'K':
	case 'k':
		printf("alper");
		break;
		//switch case'de char kullanýmýnda büyük küçük hassasiyeti için bir önlem
}
*/
}



