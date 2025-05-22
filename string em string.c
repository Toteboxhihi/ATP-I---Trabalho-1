/* Programa para verificar se uma string é substring de outra */
#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Função que verifica se string2 é substring de string1 */
char substring(char string1[], char string2[]) {
    int i, j = 0, valorf = 1;
    for (i = 0; string1[i] != '\0' && string1[i] != '\n'; i++) {
        if (string1[i] == string2[j]) {
            for (j = 0; string2[j] != '\n' && string2[j] != '\0' && valorf == 1; j++)
                if (string1[i] == string2[j]) {
                    valorf = 1;
                    i++;
                }
            else{
              valorf = 0;
            }
        }
    }
    return valorf;
}

int main() {

    setlocale(LC_ALL, "");

    char vetor1[100], vetor2[100];
    int opcao = 1, valor, a;

    for (a=0; opcao != 2; a++) {
        printf("\nO que deseja realizar?:\n1 - Digitar uma palavra\n2 - Sair do Programa\n\n");
        scanf("%d", &opcao);
        getchar();

        if (opcao == 1) {
            printf("Digite uma palavra: ");
            fgets(vetor1, 100, stdin);
            printf("Palavra de Busca: ");
            fgets(vetor2, 100, stdin);

            valor = substring(vetor1, vetor2);

            if (valor == 1)
                printf("Palavra de Busca está na String\n");
            else
                printf("Palavra de Busca NÃO está na String\n");
        }
    }
    return 0;
}
