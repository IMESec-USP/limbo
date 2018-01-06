#include <stdio.h>

int main() {
    int read;
    int wanted = 0x83322001;
    printf("Me dê um inteiro!\n");
    scanf("%d", &read);
    
    if(read == wanted) {
        printf("Manjou demais C:\n");
    }
    
    else {
        printf("Tente de novo... você me deu %08x\n", read);
        printf("O que eu quero: %08x\n", wanted);
    }
    
    return 0;
}
