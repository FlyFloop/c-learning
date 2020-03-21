#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
//if else basit örneklerle iþlendi
main(){
	setlocale(LC_ALL,"Turkish");
	int yas;
	printf("Lütfen sayý giriniz:");
	scanf("%d",&yas);
	/*
	Oparetörler
	> büyüktür iþareti
	< küçðktür iþareti
	== eþit midir? sorgular
	!= eþit deðildir iþareti
	>= büyük eþittir iþareti
	<= küçük eþittir iþareti
		*/	
	if(yas>0){
		printf("pozitif bir sayý girdiniz.");
	}
	else if(yas ==0){
		printf("girdiðiniz sayý ne pozitif ne negatif.");
	}
	else{
		printf("negatif bir sayý girdiniz.");
	}
		
		
		
		/*
	if(yas >=18){
		printf("Reþitsiniz.");
		
		
	}
	else{
		printf("Reþit deðilsiniz.");
	}
	*/
}
