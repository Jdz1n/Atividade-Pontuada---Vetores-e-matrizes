#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define ATAKAREJO_VENDAS 100
void main() {

    setlocale(LC_ALL, "portuguese");
    
    char nomesProdutos[ATAKAREJO_VENDAS][50];
    float precos[ATAKAREJO_VENDAS];
    int quantidades[ATAKAREJO_VENDAS];

    int opcao;
    int totalVendas = 0;
    float totalGeral = 0;

    do {
     
        printf("| codigo |           ação         |\n");
        printf("|   1    |     Adicionar venda    |\n");
        printf("|   2    | Exibir total de vendas |\n");
        printf("|   3    |           Sair         |\n");
        printf("Opção: ");
        scanf("%d", &opcao);
system ("CLS");
        switch (opcao) {
            case 1:
                
                if (totalVendas < ATAKAREJO_VENDAS) {
                    printf("Digite o nome do produto: ");
                    scanf("%s", nomesProdutos[totalVendas]);

                    printf("Digite o preço do produto: ");
                    scanf("%f", &precos[totalVendas]);

                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &quantidades[totalVendas]);

                    
                    totalGeral += precos[totalVendas] * quantidades[totalVendas];

                    printf("Venda registrada com sucesso!\n");

                    
                    totalVendas++;
                } else {
                    printf("A capacidade máxima de vendas foi atingida.\n");
                }
                break;

            case 2:
                
                printf("\nTotal de vendas realizadas: R$%.2f\n", totalGeral);
                break;

            case 3:
                
                printf("Encerrando o programa. Até mais!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);


}