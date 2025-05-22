#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int menu = 1;
    while(menu == 1){
    char str[100], lido[100];
    char comp;
    int i = 0, vzs = 0;
    printf("Digite a string:\n");
    fflush(stdin);
    fgets(str, 100, stdin);
    while(str[i] != '\0' && str[i] != '\n'){
        comp = str[i];
        vzs = 0;
        for(int j = 0; j < strlen(str); j++){

            if(str[j] == comp){
                vzs++;
                str[j] = '_';
            }
        }

        if(comp != '_'){
        printf("%c : %d ocorrencia(s)\n\n", comp, vzs);
        }
        i++;
    }
    printf("Deseja repetir o processo?\n\n 1 - Repetir\n 2 - Fechar programa\n\n");
    fflush(stdin);
    scanf("%d", &menu);
    }

return 0;
}
