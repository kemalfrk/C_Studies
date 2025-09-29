#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myFirstLetter='K'; // char veri tipli degiskenimizi tanımladık

    int age=22; //int veri tipli degiskeni taımladık artık programa ne zaman age i getir dersek bize 22 sayısını getirecek çunku degiskene atadık.

    float myHeight=1.88;  //float veri tipli degiskeni taımladık artık programa ne zaman myHeight i getir dersek bize 1.88 sayısını getirecek çunku degiskene atadık.
    double myNumber=2.98756; //double veri tipli degiskeni tanımladık floattan daha fazla basamak sayi tutuo

    int myNumber2=7;


    //printf("%d\n",age);
    //printf("%c\n",myFirstLetter);

    //printf("Sansli Sayim: %d",myNumber2);


    /*printf("Size Char:%d\n",sizeof(char));
    printf("Size int:%d\n",sizeof(int));
    printf("Size float:%d\n",sizeof(float));
    printf("Size double:%d\n",sizeof(double));
*/

    int sayi1,sayi2,sayi3,toplam; //profesyonel camida once degiskenin tipi tanımlanır daha sonra ilerleyen durumlarda deger atanır.

    sayi1=4;
    sayi2=6;
    sayi3=10;

    toplam=sayi1+sayi2+sayi3;

    printf("Toplam : %d\n",toplam);


    int dogumYili1,dogumYili2,yasFarki;

    dogumYili1=1975;
    dogumYili2=2003;
    yasFarki=dogumYili1-dogumYili2;

    printf("Yas Farki:%d\n",yasFarki);












    return 0;
}
