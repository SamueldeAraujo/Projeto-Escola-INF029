#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct Pessoa{
//     int matricula;
//     char nome[50];
//     char cpf[15]
// }Pessoa;

int main (){
    
    int opcao;
    int sair = 0; // (falso)

    while (!sair){
    
        printf("Projeto Escola by Samuel Souza - INF029\n");
        printf("1 - Aluno\n");
        printf("2 - Professor\n");
        printf("3 - Disciplina\n");
        printf("0 - Sair\n");
        
        scanf("%d", &opcao);

        switch (opcao){
            case 0:
                printf("Saindo . . .\n");
                sair = 1;
                break;
            case 1:
                printf("ALUNOS\n");
                // cadastro do aluno
                break;
            case 2:
                printf("PROFESSOR\n");
                // cadastro de professor
                break;
            case 3:
                printf("DISCIPLINA\n");
                // cadastro de disciplina
                break;
        default:
            printf("Opção inválida.\n");
            break;
        }
    }
    return 0;
}