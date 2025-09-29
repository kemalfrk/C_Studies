#include <stdio.h>
#include <stdlib.h>


/*
Bir elektrik dağıtım şirketi verdikleri hizmet karşılığında müşterilerinden aylık olarak
harcanan toplam kilowatt saat miktarınca ve belirli bir abonelik ücreti talep etmektedir.
Birim kilowatt saat ücreti ve abonelik ücreti her ay aylık enflasyon oranında artmaktadır.
Buna göre müşterinin bir aya ait ödeyeceği elektrik faturasının miktarını hesaplayan program
Fatura Miktarı = Harcanan Elektrik * Birim Fiyat + Abone Ücreti


*/

int main()
{
    float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
    float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
    int yeniOkuma,eskiOkuma,toplamHarcananElektrik;

    printf("Enflasyon oranini girin: ");
    scanf("%f",&enflasyon);
    printf("Onceki aya ait birim fiyat miktarini girin: ");
    scanf("%f",&eskiBirimFiyat);
    printf("Onceki aya ait abonelik ucretini girin: ");
    scanf("%f",&eskiAboneUcreti);
    printf("Bir onceki aya ait okuma degerini girin: ");
    scanf("%f",&eskiOkuma);
    printf("Bu aya ait okuma degerini girin: ");
    scanf("%f",&yeniOkuma);

    toplamHarcananElektrik=yeniOkuma-eskiOkuma;

    yeniBirimFiyat=eskiBirimFiyat*(1+enflasyon/100);
    yeniAboneUcreti =eskiBirimFiyat*(1+enflasyon/100);

    odenecekFatura=toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
    printf("Odeyeceginiz Fatura Tutari: %f\n\n",odenecekFatura);








    return 0;
}
