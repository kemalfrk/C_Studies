#include <stdio.h>
#include <stdlib.h>

int main()

{
    // Girilen 4 basamakli sayinin rakamlarinin toplamini hesaplayan program

    int bolum,kalan,sum,myNumber;
    sum=0;

    printf("Lutfen dort basamakli bir sayi giriniz:\t");
    scanf("%d",&myNumber);


    bolum=myNumber/1000;
    sum+=bolum;
    kalan=myNumber%1000;


    bolum=kalan/100;
    sum+=bolum;
    kalan=kalan%100;

    bolum=kalan/10;
    sum+=bolum;
    kalan=kalan%10;

    sum+=kalan;



    printf("Rakamlar Toplami: %d",sum);



    return 0;
}
