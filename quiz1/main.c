#include <stdio.h>
#include <stdlib.h>

int main()
{
    //girilen 4 sayinin aritmetik ortalamasını bulan program
    int sayi1,sayi2,sayi3,sayi4;
    float ortalama;

    printf("Dört tane sayi giriniz:\n");

    scanf("%d %d %d %d",&sayi1,&sayi2,&sayi3,&sayi4);
    printf("\n\n\n");

    ortalama=(sayi1+sayi2+sayi3+sayi4)/4;

    printf("Girdiginiz sayilarin ortalamasi: %f",ortalama);

    printf("\n\n\n");



    return 0;
}
