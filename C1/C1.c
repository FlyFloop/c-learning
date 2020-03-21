#include<stdio.h>
#include<stdlib.h>
#include<locale.h>// c dilinde karakter sorununu çözmek için kullanýlan kütüphanedir

main(){
// tekli yorum satýrýnda 2 tane // yanyana kullanýlýr
setlocale(LC_ALL,"Turkish");// bu komutu kullanarak tanýmlanmayan karakter sorununu çözdük
printf("Türkçe karakterler kullanıyorum.");
/*
çoklu
yorum
satýrý

*/
}
