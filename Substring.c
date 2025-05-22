#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void substring(char entrada[], char saida[], int inicio, int fim) {
    int i, j, n;
    n = fim - inicio;
    for (i = 0; entrada[i] != '\0' && entrada[i] != '\n'; i++) {
        if (i == inicio) {
            n = fim - inicio;
            for (j = 0; j <= n; j++) {
                saida[j] = entrada[i];
                i++;
            }
        }
    }
}

int main() {

    setlocale(LC_ALL, "");

    int j, opcao = 1, inicial, fina;
    char vetor[100], resultado[100];

    for(j=0; opcao!=2; j++){
        printf("\nEscolha uma opcao:\n");
        printf("1 - Digitar uma palavra\n2 - Sair do Programa\n");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            printf("Digite uma palavra: ");
            fgets(vetor, 100, stdin);
            printf("Digite a posicao inicial: ");
            scanf("%d", &inicial);
            printf("Digite a posicao final: ");
            scanf("%d", &fina);
            getchar();

            substring(vetor, resultado, inicial, fina);
            printf("Substring: %s\n", resultado);
        } else{
            return 0;
        }
}
    return 0;
}
