#include<stdio.h>
#include<stdlib.h>

typedef struct ponto{
    int x, y;
    struct ponto * proximo;//ponteiro para o proximo elemento
}t_ponto;
//um ponteiro marca o inicio da lista e o proximo elemento
int main(){
    //variaveis da estrutura
    t_ponto*ini_ponto;
    t_ponto*proximo_ponto;
    int resp;

    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));
    if(ini_ponto == NULL){
        exit(1);
    }
    proximo_ponto = ini_ponto;

    while(1){
        printf("Digite x:\n");
        scanf("%d",& proximo_ponto -> x);

        printf("Digite y: \n");
        scanf("%d",& proximo_ponto -> y);

        //system("cls");

        printf("Deseja continua? <1>Sim outro valor<Nao:\n");
        scanf("%d",&resp);
        if(resp == 1){
            proximo_ponto -> proximo = (t_ponto *)malloc(sizeof(t_ponto));
            proximo_ponto = proximo_ponto->proximo;
        }else
            break;
    }

    proximo_ponto->proximo = NULL;
    proximo_ponto = ini_ponto;
    while(proximo_ponto != NULL){
        printf("x: %d, y: %d\n", proximo_ponto-> x, proximo_ponto-> y);
        proximo_ponto = proximo_ponto->proximo;
    }

    return 0;
}