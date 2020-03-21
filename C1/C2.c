#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define alper 12 // ayný const gibi define da öniþlemcide tanýmlandýðý için deðiþtirilemez

main(){// bir þeyin yanýndan () varsa bu o þeyin fonksiyon olduðunu gösterir(genellikle)
setlocale(LC_ALL,"Turkish");
printf("alper\\"); // 2.\ ilk \'i öldürür ve komut olmadýðýný belirtir
printf("\nyorgun");//alt satýra geçmek için \n kullanýlýr newline kelimesinin kýsaltmasý olarak \n kullanýlmýþ
printf("%%\n"); // 2 tane %% kullanýldýðýnda 2.si bunun bir deðiþken olmadýðýný belirtir ve % yazdýrýr
printf("Lütfen bir sayý giriniz:");
int a;
scanf("%d",&a);
printf("%d",a);
const al=10; // const içine tanýmlanan hiçbir þey program içerisinde deðiþtirilemez const sabit demek
printf("\n%d",al);
/*
\n alt satýra geçer
\t bir tab boþluk býrakýr
\a windows uyarý sesi verir
*/

}
