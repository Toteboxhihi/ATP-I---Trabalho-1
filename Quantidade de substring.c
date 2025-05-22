//Programa para retornar quantidade de substring/
#include <stdio.h>
#include <string.h>
#include <locale.h>

int substring(char string[], char parte[]) {
    int i, j = 0, cont = 0, h, n;
    for (i = 0; string[i] != '\0' && string[i] != '\n'; i++) {
        j = 0;
        n = i;
        if (string[i] == parte[j]) {
            for (j = 0; parte[j] != '\0' && parte[j] != '\n'; j++) {
                if (string[i] == parte[j]) {
                    h = 1;
                    i++;
                } else {
                    h = 0;
                }
            }
            if (h == 1) {
                cont++;
            }
            i = n;
        }
    }
    return cont;
}

int main() {

    setlocale(LC_ALL, "");

    int a, opcao = 0, cont;
    char vetor1[100], vetor2[100];
    for (a = 0; opcao != 2; a++) {
        printf("\nO que voce deseja realizar?:\n1 - Iniciar programa\n2 - Parar programa\n");
        scanf("%d", &opcao);
        getchar();
        if (opcao == 1) {
            printf("Digite uma Palavra: ");
            fgets(vetor1, 100, stdin);
            printf("Palavra de Busca: ");
            fgets(vetor2, 100, stdin);
            cont = substring(vetor1, vetor2);
            printf("A quantidade de substrings é: %d\n", cont);
        }
    }
    return 0;
}
