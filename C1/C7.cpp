#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
//if else basit �rneklerle i�lendi
main(){
	setlocale(LC_ALL,"Turkish");
	int yas;
	printf("L�tfen say� giriniz:");
	scanf("%d",&yas);
	/*
	Oparet�rler
	> b�y�kt�r i�areti
	< k���kt�r i�areti
	== e�it midir? sorgular
	!= e�it de�ildir i�areti
	>= b�y�k e�ittir i�areti
	<= k���k e�ittir i�areti
		*/	
	if(yas>0){
		printf("pozitif bir say� girdiniz.");
	}
	else if(yas ==0){
		printf("girdi�iniz say� ne pozitif ne negatif.");
	}
	else{
		printf("negatif bir say� girdiniz.");
	}
		
		
		
		/*
	if(yas >=18){
		printf("Re�itsiniz.");
		
		
	}
	else{
		printf("Re�it de�ilsiniz.");
	}
	*/
}
