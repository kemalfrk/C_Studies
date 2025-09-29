#include <stdio.h>
#include <stdlib.h>

int main()
{
    //-------------------------------------------------------
    int myNumber;
    printf("Bir tam sayi giriniz: ");
    scanf("%d",&myNumber);
    printf("Girdiginiz sayi: %d",myNumber);

    //------------------------------------------------------
    int num1,num2;

    printf("İki tane tam sayi giriniz: ");
    scanf("%d %d",&num1, &num2);
    printf("Girdiginiz sayilar: %d - %d",num1,num2);
    //bu kodla birlikte birden fazla input alabiliriz kullanıcıdan*/



    //şimdi bir kaç örnek yapalım

    //-----------------------------------------------------
    //dairenin çevresini ve alanını bulan program


    float yaricap,alan,cevre;

    const float pi=3.14; //sabit float yani degistirilemez




    printf("Lutfen Yaricap giriniz: \n");
    scanf("%f",&yaricap);

    alan=pi*yaricap*yaricap;

    cevre=2*yaricap*pi;

    printf("Dairenin Cevresi: %f\n",cevre);
    printf("Dairenin alanı: %f",alan);*/


    //---------------------------------------------------------------------

    //4 adet sayı alıp bunların karesini ve kupunu alan program

    int num1,num2,num3,num4;


    printf("Lutfen dort adet tam sayi giriniz:\n ");

    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

    printf("Sayilar\t\t");
    printf("Karesi\t\t\t");
    printf("Kupu\t\t\t\t\n");

    printf("--------------------------------------------------\n");


    printf("%d\t\t",num1);
    printf("%d\t\t\t",num1*num1);
    printf("%d\t\t\t\t\n",num1*num1*num1);

    printf("%d\t\t",num2);
    printf("%d\t\t\t",num2*num2);
    printf("%d\t\t\t\t\n",num2*num2*num2);

    printf("%d\t\t",num3);
    printf("%d\t\t\t",num3*num3);
    printf("%d\t\t\t\t\n",num3*num3*num3);






    return 0;
}
