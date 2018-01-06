#include <stdio.h>

int main() {
    int a;
    int desired = 0x51525354;
    
    /* 
     * Um ponteiro para caractére.
     * &a = posição de memória em que a está.
     */
    char* pointer = &a;
    
    /*
     * Levando em conta que um inteiro tem 4 bytes na maioria dos sistemas,
     * escaneia quatro caractéres (1 byte cada) e coloca-os na posição do
     * inteiro a (lembre-se que pointer está apontando para o começo de a!
     */
    printf("Primeiro byte de a?\n");
    scanf("%c", pointer);
    printf("Segundo byte de a?\n");
    scanf("%*c %c", pointer + 1);
    printf("Terceiro byte de a?\n");
    scanf("%*c %c", pointer + 2);
    printf("Quarto byte de a?\n");
    scanf("%*c %c", pointer + 3);

    if(a == desired) {
        printf("Manjou muito!\n");
    }
    else {
        printf("Tente de novo! a = 0x%08x\n", a);
    }

    return 0;
}
