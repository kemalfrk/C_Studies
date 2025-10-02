#include <stdio.h>

int main(void) {

    int day;

    printf("Lutfen 1-7 araliginda sayi giriniz\n");
    scanf("%d",&day);

    switch (day) {
        case 1:
            printf("Pazartesi");
            break;
        case 2:
            printf("Sali");
            break;
        case 3:
            printf("Carsamba");
            break;

        case 4:
            printf("Persembe");
            break;
        case 5:
            printf("Cuma");
            break;

        case 6:
            printf("Cumartesi");
            break;
        case 7:
            printf("Pazar");
            break;
        default:
            printf("Gecersiz Sayi Girdiniz!!!");
    }
    return 0;
}