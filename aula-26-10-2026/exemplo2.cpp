#include <stdio.h>

int main() {
    int num;
    do {
        printf("informe um numero: ");
        scanf("%d", &num); 
        if (num % 2 == 0) {
            printf("tente novamente");
        }
    } while (num % 2 == 0);
    printf("numero: %d\n", num);

    return 0;
}
