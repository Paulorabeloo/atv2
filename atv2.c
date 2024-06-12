// faça um algoritmo para informar à Joãozinho se ele foi aprovado na matéria de lógica para programação,
// Joaozinho fez 3 provas e a média necesseária para ser aprovado é de 7.
#include <stdio.h>

int main ()
{
    float nota1, nota2, nota3, media,soma;

    //entrada de dados
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    //processamento
    soma = nota1 + nota2 + nota3;
    media = soma / 3;

    //saida de dados
    if (media >= 7)
    {
        printf("Aprovado");
    }
    else
    {
        printf("Reprovado");
    }
}
