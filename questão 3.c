#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define contatosPermitidos 50

struct Contato
{
    char nome[50];
    char telefone[15];
};

void main()
{

    setlocale(LC_ALL, "portuguese");

    struct Contato agenda[contatosPermitidos];

    int opcao;
    int totalContatos = 0;
    int a;

    do
    {

        printf("| Codigo |        Ação          |\n");
        printf("|   1    | Adicionar contato... |\n");
        printf("|   2    |   Exibir contatos... |\n");
        printf("|   3    |         Sair         |\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        system("CLS");

        switch (opcao)
        {
        case 1:

            if (totalContatos < contatosPermitidos)
            {
                printf("Digite o nome: ");
                scanf("%s", agenda[totalContatos].nome);

                printf("Digite o número de telefone: ");
                scanf("%s", agenda[totalContatos].telefone);

                printf("Contato adicionado com sucesso!\n\n");

                totalContatos++;
            }
            else
            {
                printf("A agenda está cheia. Não é possível adicionar mais contatos.\n\n");
            }
            break;

        case 2:

            if (totalContatos > 0)
            {
                printf("\nContatos cadastrados:\n");
                for (a = 0; a < totalContatos; a++)
                {
                    printf("Nome: %s, Telefone: %s\n\n", agenda[a].nome, agenda[a].telefone);
                }
            }
            else
            {
                printf("\nNenhum contato cadastrado.\n");
            }
            break;

        case 3:
            printf("Acabou...\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);
}