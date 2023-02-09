#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>



int main() {

    int contadorA, contadorB;
    int num, aux;
    int vet[10];
    int busca;

    int inicial, finaal, meio;
    bool dadoEncontrado;

  // preechendo um vetor
  for (contadorA = 0; contadorA < 10; contadorA++) {
    printf("Digite um numero:\n");
    scanf("%d", &num);
    vet[contadorA] = num;
  }

  for (contadorA = 0; contadorA < 9; contadorA++){
    for(contadorB = contadorA + 1 ;contadorB <10; contadorB++){
			if(vet[contadorA]>vet[contadorB]){
				aux = vet[contadorB];
				vet[contadorB] = vet[contadorA];
				vet[contadorA] = aux;
			}
		}
  }
	printf("vetor ordenado.Preparado para busca binaria :");
	for(contadorA = 0; contadorA < 10; contadorA ++){
		printf("%d",vet[contadorA]);
	}

	printf("\nDigite um valor para procurar no vetor");
	scanf("%d",&busca);
	
	inicial = 0;
	finaal = 9;

	dadoEncontrado = false;
	
	while(inicial <= finaal && !dadoEncontrado){
		meio = (inicial + finaal)/2;
			if(vet[meio] == busca){
				dadoEncontrado = true;

			}else if (vet[meio]>busca){
				finaal = meio - 1;
			}else{
				inicial = meio + 1;
			}
	}

	if(dadoEncontrado = true){
		printf("Dado encontrado na posicao %d ", meio); 
	}else{
		printf("Informacao nao encontrada no vetor");
	}
  return 0;
}

