#include <stdio.h>

int main(void) {
    /* KISA ÖZET
- Kullanıcıdan 1–7 arasında bir gün numarası alır, geçersizse hata verir.
- Geçerliyse gün adını (dayName) atar.
- İkinci switch’te break yok → fall-through ile seçilen günden 1’e kadar
  her günün katkısı toplanır (kademeli toplama).
- Sonuç: “<Gün> günü sonunda toplam <sayı> ürün satışı” yazdırılır.
*/
    int day;
    int numberOfProduct = 0;
    char *dayName;

    printf("Lutfen gun icin 1-7 arasinda bir sayi giriniz.\n");

    // 1. KONTROL: GİRİŞ FORMATI DOĞRU MU?
    // Girişin formatını doğrula. scanf'in dönüş değeri 1 değilse
    // (örn: harf girildiğinde 0 döner), atama başarısız olmuştur.
    if (scanf("%d", &day) != 1) {
        printf("Hata: Lutfen sayisal bir deger giriniz.\n");
        return 1; // Hata ile programı sonlandır
    }

    // 2. KONTROL: GİRİLEN DEĞER İSTENEN ARALIKTA MI?
    switch(day) {
        case 1: dayName = "Pazartesi"; break;
        case 2: dayName = "Sali";      break;
        case 3: dayName = "Carsamba";  break;
        case 4: dayName = "Persembe";  break;
        case 5: dayName = "Cuma";      break;
        case 6: dayName = "Cumartesi"; break;
        case 7: dayName = "Pazar";     break;
        default:
            // `day` değişkeni sayısal ama 1-7 arasında değil.
            printf("Hata: Lutfen 1-7 arasinda bir gun giriniz.\n");
            return 1; // Hata ile programı sonlandır
    }

    //-----------------------------
    // HESAPLAMA (Artık 'day' değerinin 1-7 arasında olduğundan eminiz)
    //-----------------------------
    switch(day) {
        case 7: numberOfProduct += 4;
        case 6: numberOfProduct += 8;
        case 5: numberOfProduct += 1;
        case 4: numberOfProduct += 7;
        case 3: numberOfProduct += 2;
        case 2: numberOfProduct += 5;
        case 1: numberOfProduct += 3;
    }

    printf("%s gunu sonunda toplam %d urun satisi yapildi.\n", dayName, numberOfProduct);

    //-----------------------------
    // switch yapısını kullanarak hesap makinesi yapalım
    //-----------------------------

    float number1, number2;
    char operator;

    printf("Lutfen bir matematiksel operator giriniz(+,-,*,/)\n");
    scanf("%c",&operator);

    printf("Lutfen iki tane sayi giriniz\n");
    scanf("%f%f",&number1,&number2);

    printf("\noperator=%c\nsayi1=%f\nsayi2=%f\n",operator,number1,number2);

    switch (operator) {
        case '+':printf("Sonuc :%f",number1+number2);break;
        case '-':printf("Sonuc :%f",number1-number2);break;
        case '*':printf("Sonuc :%f",number1*number2);break;
        case '/':printf("Sonuc :%f",number1/number2);break;
        default:printf("Gecersiz islem yaptiniz!\n\n");break;
    }

    //-----------------------------
    // girilen sayının tek mi çift mi olduğunu switch yapısıyla anlayalım
    //-----------------------------
    int number;

    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d", &number);

    switch (number%2) {
        case 0:
            printf("%d , cift sayidir",number);
            break;
        case 1:
            printf("%d ,tek sayidir",number);
            break;
        default:
            printf("Gecersiz islem!!!");
            break;

    }

    //-----------------------------
    // girilen harfin sesli harf mi sessiz mi olduğunu bulan program
    //-----------------------------

    char letter;

    printf("Lutfen bir harf giriniz:\n");

    scanf("%c", &letter);

    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'u':printf("Girdiginiz harf sesli harftir.\n\n ");break;
        default:printf("Girdiginiz harf sessiz harftir.\n\n");
                printf("Ya da girdiginiz karakter harf degildir!");
    }

    //-----------------------------
    // girilen ayın kaç gün olduğunu bulan program.
    //-----------------------------

    int monthNumber;

    printf("Lutfen kacincci ayin kac gun oldugunu bulmak icin 1-12 arasinda bir sayi giriniz:\n");
    scanf("%d", &monthNumber);

    switch (monthNumber) {
        case 4:
        case 6:
        case 9:
        case 11:printf("%d. ayda 30 gun bulunmaktadir",monthNumber);break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("%d. ayda 31 gun bulunmaktadir",monthNumber);break;
        case 2:printf("%d. ayda 28 ya da 29 gun bulunmaktadir",monthNumber);break;
        default:printf("Girdiginiz %d. ay bir yilda bulunmamaktadir",monthNumber);

    }

    return 0;
}
