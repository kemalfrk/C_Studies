#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Bir char değişkenin sayısal ve ASCII karşılığını yazdırma
    /*char myNumber=113;

    printf("Karakterimizin sayısal degeri:%d\n",myNumber); //yazdigimiz sayiyi yazdiriyor
    printf("Karakterimizin ASCII degeri:%c\n",myNumber);//ascıı degerini veriyot

    printf("\n\n");*/

    //------------------------------------------------------------------

    /*
    char myCity[20]="Bartın";
    printf("My city is: %s\n",myCity); //metinsel ifadelerde %s format specifier kullanmalıyız.
    printf("\n\n");*/
    //--------------------------------------------------------------------

    //kullanıcıdan input alarak metinsel ifadelerle çalışma

    char sehir[20]="Ankara";
    printf("Bir sehir giriniz: ");
    scanf("%s",&sehir);
    printf("Sehriniz %s",sehir);
    printf("\n\n");



    return 0;
}
