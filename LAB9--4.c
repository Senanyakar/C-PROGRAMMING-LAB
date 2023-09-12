#include <stdio.h>

int main() {
    int num, tersNum = 0, orijinalNum, kalan;

    printf("Bir tamsayý girin: ");
    scanf("%d", &num);

    orijinalNum = num;

    while (num != 0) {
        kalan = num % 10;
        tersNum = tersNum * 10 + kalan;
        num /= 10;
    }

    if (orijinalNum == tersNum) {
        printf("%d bir palindrom sayýsýdýr.\n", orijinalNum);
    } else {
        printf("%d bir palindrom sayýsý deðildir.\n", orijinalNum);
    }

    return 0;
}

