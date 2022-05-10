#include<iostream>
#include<queue>
using namespace std;
//queue = lista
int main(){
	
	queue<string> cartas;
	
	cartas.push("Copas");
	cartas.push("Espadas");
	cartas.push("Ouros");
	cartas.push("Ouros");
	cartas.push("Paus");
	
	cout << "Tamanho da fila: " << cartas.size() << endl;
	//front retorna a carta que está na frente da fila
	while(!cartas.empty()){
		cout << " Primeira Carta: " << cartas.front() << endl;
		cartas.pop();
	}
	
	return 0;
}
