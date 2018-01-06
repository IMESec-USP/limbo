#include <stdio.h>

int main() {
    volatile int challenge = 0;
    char buffer[64];

    /* Talvez ler um pouco sobre a gets ajudaria? */
    gets(buffer);

    if (challenge != 0) {
        printf("Você passou do desafio! Parabéns :)\n");
    }
    else {
        printf("Tente de novo?\n");
    }

    return 0;
}
