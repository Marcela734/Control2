#include <stdio.h>

int main() {
    int count = 0;

    mientras:

    if (count < 7) {
        printf("Chao mundo :) %d.\n", count + 1);
        count++;
        goto mientras;
    }
    return 0;
}