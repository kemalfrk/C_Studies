#include <math.h>
#include <stdio.h>

int main(void) {

    // SAYININ İŞARET ve TEKLİK/ÇİFTLİK UYGULAMASI
    {
        int number;

        printf("Lutfen bir sayi giriniz: ");

        scanf("%d",&number);

        if (number>0) {
            if (number%2==0) {
                printf("Girdiginiz sayi pozitif cift sayi\n");
            }else {
                printf("Girdiginiz sayi pozitif tek sayi\n");
            }
        }else if (number<0) {
            if (number%2==0) {
                printf("Girdiginiz sayi negatif cift sayi\n");
            }else {
                printf("Girdiginiz sayi negatif tek sayi\n");
            }
        }else {
            printf("Girdiginiz sayi sifirdir");
        }
    }
    //-----------------------------------

    // KISA KOŞUL (TERNARY) ÖRNEK UYGULAMASI
    {
        int score;
        score=25;
        //kısa bir if else ifadesi
        //: -> else   ? ->if

        (score>50)? printf("Girdigin sayi 50 den buyuk"):printf("Girdiginiz sayi 50 den kucuk");
    }
    //-----------------------------------

    // İKİ SAYI KARŞILAŞTIRAN UYGULAMA
    {
        int num1, num2;

        printf("Lutfen iki adet tam sayi giriniz: ");
        if (scanf("%d %d", &num1, &num2) != 2) {
            printf("Gecersiz giris.\n");
            return 1;
        }

        if (num1 > num2) {
            printf("%d, %d'den buyuktur.\n", num1, num2);
        } else if (num1 < num2) {
            printf("%d, %d'den buyuktur.\n", num2, num1);
        } else {
            printf("%d ve %d esittir.\n", num1, num2);
        }
    }
    //-----------------------------------

    // BASİT KİTAP SİPARİŞ UYGULAMASI
    {
        int bookPrice,orderQuantity; //kitabın fiyatı,siparis miktarını tutuyoruz.
        float discountRate,noDiscountPrice,discountPrice,sum;
        bookPrice=50;
        orderQuantity=0;

        printf("Kac adet kitap almak istiyorsunuz? : ");
        scanf("%d",&orderQuantity);

        if (orderQuantity>=60) {
            discountRate=0.30;
        }else {
            if (orderQuantity>=30 && orderQuantity<60) {
                discountRate=0.20;
            }else if (orderQuantity>=10 && orderQuantity<30 ) {
                discountRate=0.15;
            }else {
                discountRate=0.01;
            }
        }

        noDiscountPrice=bookPrice*orderQuantity;
        printf("Kitabin indirimsiz Fiyati:%.2f TL\n",noDiscountPrice);
        discountPrice=noDiscountPrice*discountRate;
        printf("Indirim Tutariniz:%.2f TL\n",discountPrice);
        sum=noDiscountPrice-discountPrice;
        printf("Siparislerinizin toplam tutari:%.2f TL\n",sum);
    }
    //-----------------------------------

    // TBMM TOPLANTI YETER SAYISI UYGULAMASI
    {
        int partyA,partyB,partyC,currentCouncilor;
        const int sumCouncilor=600;

        printf("Meclisteki partilerin milletvekili sayilarini girin:");
        scanf("%d%d%d",&partyA,&partyB,&partyC);

        currentCouncilor=partyA+partyB+partyC;

        if (currentCouncilor<200) {
            printf("Mecliste milletvekili sayisi saglanamadiginden toplantiya ara verildi.");
            printf("Toplanti yeter sayisi %d",sumCouncilor/3);
        }else {
            printf("Meclis toplantiya hazir.\n");
        }
    }
    //-----------------------------------

    // ÜÇ SAYININ MIN ve MAX DEĞERLERİ UYGULAMASI
    {
        int num1,num2,num3,min,max;

        printf("Enter three numbers\n");
        scanf("%d%d%d",&num1,&num2,&num3);

        if (num1>num2 && num1>num3) {
            max=num1;
        }else if (num2>num1 && num2>num3) {
            max=num2;
        }else {
            max=num3;
        }
        if (num1<num2 && num1<num3) {
            min=num1;
        }else if (num2<num1 && num2<num3) {
            min=num2;
        }else {
            min=num3;
        }

        printf("The smallest number is %d\n",min);
        printf("The largest number is %d\n",max);
    }
    //-----------------------------------

    // 3 KENARDAN ÜÇGEN TÜRÜ (DİK/GENİŞ/DAR) UYGULAMASI
    {
        int a,b,c;
        char longestSide;
        printf("Lutfen tam sayi cinsinden ucgenin uc kenar uzunlugunu giriniz:\n");
        scanf("%d%d%d",&a,&b,&c);

        if (a>b && a>c) {
            longestSide='a';
        }else if (b>a && b>c) {
            longestSide='b';
        }else {
            longestSide='c';
        }
        //----------------------------------------------------

        if (longestSide=='a') {
            if (a*a==b*b+c*c) {
                printf("Dik acili ucgen\n");

            }else if (a*a>b*b+c*c) {
                printf("Genis Acili Ucgen");
            }else if (a*a<b*b+c*c) {
                printf("Dar Acili Ucgen");
            }else {
                printf("Ucgen Olusturulamaz");
            }

        }else if (longestSide=='b') {
            if (b*b==a*a+c*c) {
                printf("Dik acili ucgen\n");

            }else if (b*b>a*a+c*c) {
                printf("Genis Acili Ucgen");
            }else if (b*b<a*a+c*c) {
                printf("Dar Acili Ucgen");
            }else {
                printf("Ucgen Olusturulamaz");
            }

        }else {
            if (c*c==a*a+b*b) {
                printf("Dik acili ucgen\n");

            }else if (c*c>a*a+b*b) {
                printf("Genis Acili Ucgen");
            }else if (c*c<a*a+b*b) {
                printf("Dar Acili Ucgen");
            }else {
                printf("Ucgen Olusturulamaz");
            }
        }
    }
    //-----------------------------------

    // ÖZEL SAYI UYGULAMASI: abcd için (ab)^2 + (cd)^2 == abcd ?
    {
        int number,newNumber,part1,part2;

        printf("Dort basamakli Pozitif bir sayi giriniz: ");
        scanf("%d",&number);

        part1=number/100;  // ab kısmını verecek
        part2=number%100;  // cd kısmını verecek

        newNumber=part1*part1 + part2*part2;

        if (number==newNumber) {
            printf("Girdiginiz sayi ozel sayidir!");
        }else {
            printf("Girdiginiz sayi ozel sayi degil!");
        }
    }
    //-----------------------------------

    // TAM KARE KONTROL UYGULAMASI
    {
        int number,squareRoot;

        printf("Lutfen pozitif bir sayi giriniz:\n ");
        scanf("%d",&number);

        if (number<0) {
            printf("Negatif bir sayi girdiniz.Lutfen pozitif bir sayi giriniz!\n");
        }else {
            squareRoot = sqrt(number);

            if (number==squareRoot*squareRoot) {
                printf("Tam kare bir sayi girdiniz super!.%d sayisi kokten %d olarak cikar.",number,squareRoot);

            }else {
                printf("Tam kare olmayan bir sayi girdiniz!");
            }
        }
    }
    //-----------------------------------

    // OPERATÖR TARİFE HESABI UYGULAMASI
    {
        int konusmaSuresi;
        float tutar;

        printf("Lutfen konusma surenizi giriniz: ");
        scanf("%d",&konusmaSuresi);

        if (konusmaSuresi<0) {
            printf("Lutfen pozitif bir sayi giriniz!!!");
        }else {
            if (konusmaSuresi>=0 && konusmaSuresi<=4) {
                tutar=0.30;
                printf("Tutar: %2f TL",tutar);
            }else if (konusmaSuresi>4) {
                tutar=(konusmaSuresi-4)*0.7+0.30;
                printf("Tutar: %2f TL",tutar);
            }
        }
    }
    //-----------------------------------

    // İÇ AÇILARDAN ÜÇGEN TÜRÜ UYGULAMASI
    {
        int angle1,angle2,angle3;

        printf("Lutfen ucgenin ic acilarini giriniz:");
        scanf("%d%d%d",&angle1,&angle2,&angle3);

        if (angle1+angle2+angle3==180) {
            if (angle1!=0 && angle2!=0 && angle3!=0) {
                if (angle1==60 && angle2==60 && angle3==60) {
                    printf("Girdiginiz acilar ile Eskenar Ucgen oluyor! ");
                }else if (angle1==angle2 || angle1==angle3 || angle2==angle3) {
                    printf("Girdiginiz acilar ile Ikızkenar Ucgen Olusuyor!");
                }else {
                    printf("Girdiginiz acilar ile Cesitkenar Ucgen Olusuyor!");
                }

            }else {
                printf("Ucgenin acilari 0 olamaz!");
            }

        }else {
            printf("Girdiginiz aci olculeriyle ucgen olusamaz!");
        }
    }
    //-----------------------------------

    // KARAKTER HARF/BÜYÜK-KÜÇÜK KONTROL UYGULAMASI
    {
        char myChar;

        printf("Bir karakter giriniz :");
        scanf("%c", &myChar);

        if ((myChar>='A') && (myChar<='Z')) {
            printf("Girdiginiz karakter buyuk harf");
        }else if ((myChar>='a') && (myChar<='z')) {
            printf("Girdiginiz karakter kucuk harf");
        }else {
            printf("Girdiginiz karakter harf degil!");
        }
    }
    //-----------------------------------

    return 0;
}
