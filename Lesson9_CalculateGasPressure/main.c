#include <stdio.h>
#include <stdlib.h>


/*
Kapalı bir kaptaki gazın basıncını hesaplayan program
basınç=(mol s. * R sabiti *sıcaklık)/hacim



*/

int main()
{
    float basinc,rsabiti;
    int molSayisi,hacim,sicaklik;

    rsabiti=0.82;

    printf("Kabin Hacmini Giriniz: \n");
    scanf("%d",&hacim);
    printf("Mol Sayisini Giriniz: \n");
    scanf("%d",&molSayisi);
    printf("Ortam Sicakligini Giriniz: \n");
    scanf("%d",&sicaklik);

    basinc=(molSayisi*rsabiti*sicaklik)/hacim;

    printf("%d Litre Hacimli Gaz Basinci: %f\n\n\n",hacim,basinc);





    return 0;
}
