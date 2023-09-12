#include <stdio.h>
#include <stdlib.h>


int main() {
    int miktar;
    
    printf("Para miktarini girin(10un kati olmalidir): ");
    scanf("%d", &miktar);

    if (miktar % 10 != 0) {
        printf("Girilen miktar 10un kati olmalidir.\n");
        return 1; 
    }

    int sayi_100 = 0, sayi_50 = 0, sayi_20 = 0, sayi_10 = 0;
    
    while (miktar > 0) {
        if (miktar >= 100) {
            miktar -= 100;
            sayi_100++;
        } else if (miktar >= 50) {
             miktar-= 50;
            sayi_50++;
        } else if (miktar >= 20) {
             miktar -= 20;
            sayi_20++;
        } else if (miktar >= 10) {
             miktar -= 10;
            sayi_10++;
        }
    }

    printf("Banknotlar:\n");
    if (sayi_100 > 0) {
        printf("100 TL: %d banknot(lar)\n", sayi_100);
    }
    if (sayi_50 > 0) {
        printf("50 TL: %d banknot(lar)\n", sayi_50);
    }
    if (sayi_20 > 0) {
        printf("20 TL: %d banknot(lar)\n", sayi_20);
    }
    if (sayi_10 > 0) {
        printf("10 TL: %d banknot(lar)\n", sayi_10);
    }

    return 0; 
}

