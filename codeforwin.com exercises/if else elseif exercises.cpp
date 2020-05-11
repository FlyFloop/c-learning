#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//link:https://codeforwin.org/2015/05/if-else-programming-practice.html
main(){
	
	
	
	
	//21-)Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
	//For first 50 units Rs. 0.50/unit
	//For next 100 units Rs. 0.75/unit
	//For next 100 units Rs. 1.20/unit
	//For unit above 250 Rs. 1.50/unit
	//An additional surcharge of 20% is added to the bill
	
	   float birim,fiyat,tutar,net;
	   printf("Kac birim urun almak istiyorsunuz:");
	   scanf("%f",&birim);
	if(birim<=50){
		fiyat=0.5;
	}
	else if(birim>50 && birim<=100){
		fiyat=0.75;
	}
	else if(birim>100 && birim<=200){
		fiyat=1.2;
	}
	else if(birim>200){
		fiyat=1.5;
	}
	tutar=birim*fiyat;
	net=(20*tutar)/100;
	printf("toplam fiyat:%.2f",net);
	
	
	
	
	
	
	/*
	//20-)Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
	
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
	
	float temel,brut,k1,k2;
    printf("temel maasi giriniz: ");
    scanf("%f",&temel);
    if(temel <= 10000)
    {
        k1  = temel * 0.8;
        k2 = temel * 0.2;
    }
    else if(temel <= 20000)
    {
        k1  = temel * 0.9;
        k2 = temel * 0.25;
    }
    else
    {
        k1 = temel * 0.95;
        k2= temel * 0.3;
}
   brut =temel+hra+da;
   printf("brut maas:%f",brut);
	
	
	
	
	
	
	/*
	//19-)Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
	int fizik,kimya,biyo,mat,bilgi,ortalama;
	printf("5 dersten aldiginiz notlari sirasiyla giriniz:");
	scanf("%d%d%d%d%d",&fizik,&kimya,&biyo,&mat,&bilgi);
	ortalama=(fizik+kimya+biyo+mat+bilgi)/5;
	if(ortalama>=90){
		printf("harfnotunuz:A");
	}
	else if(ortalama>=80){
		printf("harfnotunuz:B");
	}
	else if(ortalama>=70){
		printf("harfnotunuz:C");
	}
	else if(ortalama>=60){
		printf("harfnotunuz:D");
	}
	else if(ortalama>=40){
		printf("harfnotunuz:E");
	}
	else if(ortalama<40){
		printf("harfnotunuz:F");
	}
	
	
	
	
	
	
	
	/*
	//18-)Write a C program to calculate profit or loss.
	int giris,cikis,net;
	printf("giris fiyatini soyleyiniz:");
	scanf("%d",&giris);
	printf("cikis fiyatini soyleyiniz:");
	scanf("%d",&cikis);
	net=cikis-giris;
	if(net>0){
		printf("kardasiniz");
		
	}
	else if(net==0){
		printf("ne kardasýnýz ne zararda");
	}
	else{
		printf("zarardasýnýz");
	}
	
	
	
	/*
	//17-)Write a C program to find all roots of a quadratic equation.
	float a,b,c,kok1,kok2,dis;
	printf("denklemin sirasiyla a,b,c degerlerini giriniz:");
	scanf("%f%f%f",&a,&b,&c);
	dis=(b*b)-(4*a*c);
	if(dis>0){
		kok1=((-b)+ sqrt(dis))/(2*a);
		kok2=((-b)+- sqrt(dis))/(2*a);
		printf("kokler sirasiyla\n1.kok:%f\n2.kok:%f",kok1,kok2);
	}
	else if(dis==0){
		kok1=(-b)/(2*a);
		kok2=kok1;
		printf("kokler sirasiyla\n1.kok:%f\n2.kok:%f",kok1,kok2);
	}
	else{
		printf("gercek sayilarda koku yoktur");
	}
	
	
	
	
	
	/*
	//16-)Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
	int aci1,aci2,aci3;
	printf("ucgenin 3 acisini giriniz:");
	scanf("%d%d%d",&aci1,&aci2,&aci3);
	if(aci1==90 || aci2==90||aci3==90){
		printf("girdiginiz ucgen dik ucgendir");
	}
	else if (aci1==aci2==aci3){
		printf("eskenar ucgendir");
	}
	else if(aci1==aci2){
		printf("ikizkenar ucgendir");
	}
	else if(aci1==aci3){
		printf("ikizkenar ucgendir");
	}
	else if(aci2==aci3){
		printf("ikizkenar ucgendir");
	}
	else{
		printf("dik ucgen veya ikizkenar ucgen degildir");
	}
	
	
	
	
	/*
	//15-)Write a C program to input all sides of a triangle and check whether triangle is valid or not.
	int k1,k2,k3;
	printf("ucgenin sirasiyla ilk  3 kenarini giriniz:");
	scanf("%d%d%d",&k1,&k2,&k3);
	if((k1+k2>k3) && (k1+k3>k2) &&(k2+k3>k1)){
		printf("ucgen olusur");
	}
	else{
		printf("ucgen olusmaz")
	}
	
	
	
	
	/*
	//14-)Write a C program to input angles of a triangle and check whether triangle is valid or not.
	int aci1,aci2,aci3;
	printf("ucgenin 3 acisini giriniz:");
	scanf("%d%d%d",&aci1,&aci2,&aci3);
	if(aci1==90 || aci2==90||aci3==90){
		printf("girdiginiz ucgen dik ucgendir");
	}
	else{
		printf("dik ucgen degildir");
	}
	
	
	
	/*
	//13-)Write a C program to count total number of notes in given amount.
	int sayi,sayi500,sayi100,sayi50,sayi20,sayi10,sayi5,sayi2,sayi1;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	 if(sayi >= 500)
    {
        sayi500 = sayi/500;
        sayi -= sayi500 * 500;
    }
    if(sayi >= 100)
    {
          sayi100 = sayi/100;
        sayi -= sayi500 * 100;
    }
    if(sayi >= 50)
    {
        sayi50 = sayi/50;
        sayi -= sayi50 * 50;
    }
    if(sayi >= 20)
    {
           sayi20 = sayi/20;
        sayi -= sayi20 * 20;
    }
    if(sayi >= 10)
    {
        sayi10 = sayi/10;
        sayi -= sayi10 * 10;
    }
    if(sayi >= 5)
    {
     sayi5 = sayi/5;
        sayi -= sayi5 * 5;
    }
    if(sayi >= 2)
    {
            sayi2 = sayi/2;
        sayi -= sayi2 * 2;
    }
    if(amount >= 1)
    {
       sayi1 = sayi;
    }

	
	
	
	
	/*
	//12-)Write a C program to input month number and print number of days in that month.
	//2019 calender
	int ay;
	printf("herhangi bir ayin numarasini giriniz:");
	scanf("%d",&ay);
	if(ay==1){
		printf("ocak 31 gündür");
	}
	if(ay==2){
		printf("subat 29 gündür");
	}
	if(ay==3){
		printf("mart 31 gündür");
	}
	if(ay==4){
		printf("nisan 30 gündür");
	}
	if(ay==5){
		printf("mayis 31 gündür");
	}
	if(ay==6){
		printf("haziran 30 gündür");
	}
	if(ay==7){
		printf("temmuz 31 gündür");
	}
	if(ay==8){
		printf("agustos 31 gündür");
	}
	if(ay==9){
		printf("eylul 30 gündür");
	}
	if(ay==10){
		printf("ekim 31 gündür");
	}
	if(ay==11){
		printf("kasim 30 gündür");
	}
	if(ay==12){
		printf("aralýk 31 gündür");
	}
	
	
	
	
	
	/*
	//11-)Write a C program to input week number and print week day.
	int gun;
	printf("1-7 arasinda bir gunun sayisini giriniz:");
	scanf("%d",&gun);
	if(gun==1){
		printf("pazartesi");
	}
	if(gun==2){
		printf("sali");
	}
	if(gun==3){
		printf("carsamba");
	}
	if(gun==4){
		printf("persembe");
	}
	if(gun==5){
		printf("cuma");
	}
	if(gun==6){
		printf("cumartesi");
	}
	if(gun==7){
		printf("pazar");
	}
	
	
	
	
	
	/*
	//10-)Write a C program to check whether a character is uppercase or lowercase alphabet.
	char karakter;
	printf("bir karakter giriniz:");
	scanf(" %c",&karakter);
	if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter kucuk harftir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karakter buyuk harftir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	
	/*
	
	//9-)Write a C program to input any character and check whether it is alphabet, digit or special character.
	char karakter;
	printf("bir seye basin:");
	scanf(" %c",&karakter);
	if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karkater alfabedendir");
	}
	else if(karakter>='1' && karakter<='9'){
		printf("girdiginiz karakter sayidir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	/*
	
	//8-)Write a C program to input any alphabet and check whether it is vowel or consonant.
	char karakter;
	printf("karakter giriniz:");
	scanf(" %c",&karakter);
	if(karakter=='a'||karakter=='e'||karakter=='i'||karakter=='o'||karakter=='u'){
		printf("girdiginiz karakter sesli bir harftir");
		
	}
	else if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	/*
	
	//7-)Write a C program to check whether a character is alphabet or not.
	char karakter;
	printf("bir karakter giriniz:");
	scanf(" %c",&karakter);
	if(karakter>='a' && karakter<='z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else if(karakter>='A' && karakter<='Z'){
		printf("girdiginiz karakter alfabedendir");
	}
	else{
		printf("girdiginiz karakter alfabeden degildir");
	}
	
	
	
	
	/*
	
	
	//6-)Write a C program to check whether a year is leap year or not.
	int yil;
	printf("bir yil giriniz:");
	scanf("%d",&yil);
	if(yil%4==0 && yil%100!=0){
		printf("sicrama yili");
	}
	else if(yil%400==0){
       printf("sicrama yili");
	}
	else{
		printf("sicrama yili degil");
	}
	
	
	
	/*
	
	//5-)Write a C program to check whether a number is even or odd.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi%2==0){
		printf("girdiginiz sayi cifttir");
		
	}
	else if(sayi==0){
		printf("girdiginiz sayi 0 dir");
	}
	else{
		printf("girdiginiz sayi negatiftir");
	}
	
	
	/*
	
	//4-)Write a C program to check whether a number is divisible by 5 and 11 or not.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi%5==0 && sayi%11==0){
		printf("girdiginiz sayi 5 ve 11 e bolunebiliyor");
	}
	else{
		printf("girdiginiz sayi 5 ve 11 e bolunemiyor");
	}
	
	
	
	/*
	
	//3-)Write a C program to check whether a number is negative, positive or zero.
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi>0){
		printf("girdiginiz sayi pozitiftir.");
	}
	else if (sayi==0){
		printf("girdiginiz sayi 0 dir");
	}
	else{
		printf("girdiginiz sayi negatiftir");
	}
	
	
	
	/*
	
	//2-)Write a C program to find maximum between three numbers.
	int sayi1,sayi2,sayi3,buyuk;
	printf("3 tane sayi giriniz:");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	buyuk=sayi1;
	if(sayi2>buyuk){
		buyuk=sayi2;
	}
	if(sayi3>buyuk){
		buyuk=sayi3;
	}
	printf("en buyuk sayi:%d",buyuk);
	
	
	
	/*
	
	//1-)Write a C program to find maximum between two numbers.
	int sayi1,sayi2,buyuk;
	printf("2 tane sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	buyuk=sayi1;
	if(sayi2>buyuk){
		buyuk=sayi2;
	}
	printf("en buyuk sayi:%d",buyuk);
	*/
	
}
