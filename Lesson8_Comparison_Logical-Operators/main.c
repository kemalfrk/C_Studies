#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Karşılaştırma Operatörleri--------------------------------
    int x,y;
    x=6;
    y=4;

    printf("x ve y birbirine esit mi?%d\t\t\n",x==y);//0
    printf("x ve y birbirine esit degil mi?%d\t\t\n ",x!=y);//1
    printf("x y'den buyuk mu? %d\t\t\n ",x>y);//1
    printf("x y'den buyuk veya esit mi? %d\t\t\n ",x>=y);//1
    printf("\n\n");



    //Mantıksal Operatörler---------------------------------------

    int j,z;
    j=10;
    z=5;

    printf("Ve Sonucu: %d\n",(j>6 && z>3));//1
    printf("Veya Sonucu: %d\n",(j>10 || z>3));//1
    printf("Mantıksal Degil Sonucu: %d\n",!(j>10 && z>3));//normalde 0 fakat degili 1 olacak
    printf("\n\n");

    return 0;
}
