#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define alper 12 // ayn� const gibi define da �ni�lemcide tan�mland��� i�in de�i�tirilemez

main(){// bir �eyin yan�ndan () varsa bu o �eyin fonksiyon oldu�unu g�sterir(genellikle)
setlocale(LC_ALL,"Turkish");
printf("alper\\"); // 2.\ ilk \'i �ld�r�r ve komut olmad���n� belirtir
printf("\nyorgun");//alt sat�ra ge�mek i�in \n kullan�l�r newline kelimesinin k�saltmas� olarak \n kullan�lm��
printf("%%\n"); // 2 tane %% kullan�ld���nda 2.si bunun bir de�i�ken olmad���n� belirtir ve % yazd�r�r
printf("L�tfen bir say� giriniz:");
int a;
scanf("%d",&a);
printf("%d",a);
const al=10; // const i�ine tan�mlanan hi�bir �ey program i�erisinde de�i�tirilemez const sabit demek
printf("\n%d",al);
/*
\n alt sat�ra ge�er
\t bir tab bo�luk b�rak�r
\a windows uyar� sesi verir
*/

}
