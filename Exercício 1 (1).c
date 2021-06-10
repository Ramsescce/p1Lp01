#include <stdio.h>
#include <stdlib.h>
#define MAX 30

               //Alunos: Esmeraldo Euclide Carneiro Junior - R.A 2760482021037
                       //Ramses Neris Godoy - R.A 2760482021039


      /*1.Implemente uma função que receba um vetor de Data como parâmetro e que imprima na
        tela as datas em ordem crescente utilizando uma das 3 estrategias de ordenação estudada em aula.*/


typedef struct
{
    int dia;
    int mes;
    int ano;
} data;

void ordena (data vet[], int tam)
{
    int i, j, y;

    data aux;

    for (i = tam - 1; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            y = 0;
            if (vet[j].ano > vet[j + 1].ano)

                y = 1;
            else if (vet[j].ano == vet[j + 1].ano
                     && vet[j].mes > vet[j + 1].mes)

                y = 1;
            else if (vet[j].ano == vet[j + 1].ano
                     && vet[j].mes == vet[j + 1].mes
                     && vet[j].dia > vet[j + 1].dia)

                y = 1;
            if (y)
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}
int main ()
{

    int i, tam;
    data vet[MAX];
    printf("Digite o numero de datas a serem ordenadas: ");
    scanf ("%d", &tam);
    printf("\nDigite as datas no seguinte formato: dd/mm/aaaa\n\n");
    for (i = 0; i < tam; i++)
    {
        scanf ("%d/%d/%d", &vet[i].dia, &vet[i].mes, &vet[i].ano);
    }
    ordena (vet, tam);
    printf ("\nAs datas ordenadas sao:\n\n");
    for (i = 0; i < tam; i++)
    {
        printf ("%d/%d/%d", vet[i].dia, vet[i].mes, vet[i].ano);
        printf ("\n");
    }
    return 0;
}
