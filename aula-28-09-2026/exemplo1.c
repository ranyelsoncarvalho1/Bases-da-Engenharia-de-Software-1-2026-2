#include <stdio.h>
#include <locale.h> //UTF-8 (importar a biblioteca locale)

int main(){
    setlocale(LC_ALL, ""); //configurar o programa para acentos e caracteres especiais
    char nome1 = 'a';
    char nome2[] = "Fulano";
    printf("Impressão: %c\n", nome1); //leitura de apenas um caracter
    printf("Nome: %s\n", nome2); //leitura de uma sequência de caracteres

    //fazer a leitura da sequência de caracteres incluindo os espaços
    char nome3[50];
    printf("Digite o nome: ");
    //scanf("%s", nome3);
    fgets(nome3, 50, stdin); //permite a leitura com espaços
    printf("Resultado: %s", nome3);

    return 0;
}
