#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<float.h> //float veri tipinin alt ve �st s�n�rlar�n� g�rmek i�in float.h k�t�phanesi kullan�ld�

main(){
	setlocale(LC_ALL,"Turkish");
	
	
	
	/*
	printf("%E",FLT_MIN);// �zel olarak %E kullan�ld�
	printf("\n%E",FLT_MAX);
	
	/*
	girilen harfin sesli oldu�unu belirtir.
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
	sayfa 104 switch case if else'e d�n��t�r�ld�
	int a;
	printf("l�tfen haftan�n g�nlerinden birini giriniz:");
	scanf("%d",&a);
	if(a==1){
		printf("pazartesi");
	}
	else if(a==2){
		printf("sal�");
	}
	else if(a==3){
		printf("�ar�amba");
	}
	else if(a==4){
		printf("per�embe");
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
		printf("�yle bir g�n yok");
	}
	/*
char a;
printf("bir harfe bas�n�z:");
scanf("%c",&a);
switch(a){
	case 'K':
	case 'k':
		printf("alper");
		break;
		//switch case'de char kullan�m�nda b�y�k k���k hassasiyeti i�in bir �nlem
}
*/
}



