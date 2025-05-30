#include<stdio.h>
#define TAM 50
#define NOTA 10

typedef struct {
    char nome;
    int idade;
    float notaFinal;
} aluno1;

int main(){
    int iCont = 0;
    char nome[TAM];
    int idade[TAM];
    float nota1, nota2, nota3, notaFinal[NOTA];
    aluno1 listaAluno;

    printf("\n=== Cadastro do Aluno ===\n");
    printf("Digite o nome do Aluno: ");
    scanf("%49s", nome);
    printf("\nDigite a idade do aluno: ");
    scanf("%d", idade);
    printf("\nDigite a nota das tres provas do aluno para definir a nota final:");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    return 0;
}