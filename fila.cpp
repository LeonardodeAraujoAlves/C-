#include<iostream>
#include<queue>//biblioteca com os metodos de construção prontos para a estrutura de lista

using namespace std;//evitar usar o namespace desta forma
//testando
//queue = lista
//queue<tipoDeLista>NomeDaLista
int main(){
	
	queue<string> cartas;
	
	cartas.push("Copas");
	cartas.push("Espadas");
	cartas.push("Ouros");
	cartas.push("Ouros");
	cartas.push("Paus");
	
	cout << "Tamanho da fila: " << cartas.size() << endl;
	
	//
	while(!cartas.empty()){
		//front retorna a carta que est� na frente da filalllllll
		cout << " Primeira Carta: " << cartas.front() << endl;
		cartas.pop();
	}
	
	return 0;
}
