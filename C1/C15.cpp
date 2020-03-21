#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
// iç içe for yýldýz oluþturma
main(){
	setlocale(LC_ALL,"Turkish");
	/*
	//0 dan 15e kadar yýldýz
	int a,b;//a satýr b sütün
	for(a=0;a<=0;a++){
		for(b=0;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
*/
//15 den 0a kadar yýldýz
	int a,b;//a satýr b sütün
	for(a=15;a>=0;a--){
		for(b=0;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
}
