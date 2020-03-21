#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
//int ve float diziler
main(){
	setlocale(LC_ALL,"Turkish");   
	int sayilar[] = {5,10};
	printf("%d   %d",sayilar[0],sayilar[1]);
	
}
