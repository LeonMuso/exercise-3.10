#include <stdio.h>

int main(void) {
    int età;
    float prezzo;
    printf("eta' del visitatore:");
    scanf("%d", &età);
    if (età < 5 ){
        prezzo = 0;
    }else if (età >= 5 && età <= 10 ) {
        prezzo = 1;
    }else if (età > 11 && età <= 17) {
        prezzo = 1.5;
    }else if (età > 18 && età <= 26) {
        prezzo = 2;
    }else {
        prezzo = 3;
    }
    printf("prezzo: %f", prezzo);
}
