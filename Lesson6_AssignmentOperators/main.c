#include <stdio.h>
#include <stdlib.h>

int main()
{
    //------------------ Aritmetik Operatörler -------------------
    int a;
    a = 10;
    a = a + 5;   // toplama -> 15
    a = a - 3;   // çıkarma -> 12
    a = a * 2;   // çarpma -> 24
    a = a / 4;   // bölme -> 6
    a = a % 4;   // mod (kalan) -> 2
    printf("Aritmetik sonucu: %d\n", a);


    //----------- Birleştirilmiş Atama Operatörleri ---------------
    int b;
    b = 7;
    b += 3;   // b = b + 3 -> 10
    b -= 2;   // b = b - 2 -> 8
    b *= 2;   // b = b * 2 -> 16
    b /= 4;   // b = b / 4 -> 4
    b %= 3;   // b = b % 3 -> 1
    printf("Birlesik atama sonucu: %d\n", b);


    //---------------- Artırma / Azaltma --------------------------
    int c;
    c = 5;
    c++;   // önce kullanır sonra 1 artırır -> 6
    ++c;   // önce 1 artırır sonra kullanır -> 7
    c--;   // önce kullanır sonra 1 azaltır -> 6
    --c;   // önce 1 azaltır sonra kullanır -> 5
    printf("Artirma/Azaltma sonucu: %d\n", c);


    //----------------- Bit Düzeyi Operatörleri -------------------
    int d;
    d = 6;        // 00000110
    d &= 3;       // 00000011 -> 00000010 = 2
    d |= 4;       // 00000100 -> 00000110 = 6
    d ^= 1;       // 00000001 -> 00000111 = 7
    d <<= 1;      // sola 1 kaydır -> 14
    d >>= 2;      // sağa 2 kaydır -> 3
    printf("Bit duzeyi sonucu: %d\n", d);

    return 0;
}
