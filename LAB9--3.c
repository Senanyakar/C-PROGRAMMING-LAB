#include <stdio.h>

int main() {
    int start = 1000;
    int end = 2000;
    int i;

    printf("%d ile %d arasindaki cift sayilar :\n", start, end);

    for (i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

