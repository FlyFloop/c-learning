#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
// i� i�e for y�ld�z olu�turma
main(){
	setlocale(LC_ALL,"Turkish");
	/*
	//0 dan 15e kadar y�ld�z
	int a,b;//a sat�r b s�t�n
	for(a=0;a<=0;a++){
		for(b=0;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
*/
//15 den 0a kadar y�ld�z
	int a,b;//a sat�r b s�t�n
	for(a=15;a>=0;a--){
		for(b=0;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
}
