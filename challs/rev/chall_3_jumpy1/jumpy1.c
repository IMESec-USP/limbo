#include <stdio.h>

void win() {
    printf("Parabéns! Você conseguiu o jumpy1!\n");
}

int main() {
    volatile void (*f)();
    char buffer[64];
    printf("Será que você consegue acessar a função win?\n");
    gets(buffer);
    if(f) {
        printf("Pulando para 0x%08x...\n", f);
        f();
    }
    return 0;
}
