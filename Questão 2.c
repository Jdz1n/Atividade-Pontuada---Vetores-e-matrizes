#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    char nomeAluno[5][200];
    float notas[5][3];
    int a, b;
    float media[3];
    int somaNota = 0;

    for (a = 0; a < 5; a++)
    {
        printf("\nInforme o nome do %dº aluno:", a + 1);
        gets(nomeAluno[a]);

        for (b = 0; b < 3; b++)
        {
            printf("Informe a %dº nota do aluno:", b + 1);
            scanf("%f", &notas[a][b]);

            somaNota += notas[a][b];
        }

        media[a] = somaNota / b;
        somaNota = 0;

        fflush(stdin);
    }

    system("CLS || CLEAR");

    printf("\nMostrando resultados...\n");

    for (a = 0; a < 5; a++)
    {
        printf("\nNome do %dº aluno:%s \n", a + 1, nomeAluno[a]);

        for (b = 0; b < 3; b++)
        {
            printf("%dº nota: %.1f \n", b + 1, notas[a][b]);
        }
        
        printf("\nMédia do %dº aluno:%.2f", a + 1, media[a]);

        if (media[a] >= 7)
        {
            printf("\nAprovado!!!\n");
        }
        else if (media[a] >= 5 && media[a] < 7)
        {
            printf("\nRecuperação!!!\n");
        }
        if (media[a] < 5)
        {
            printf("\nReprovado!!!\n");
        }
        
        
    }

}