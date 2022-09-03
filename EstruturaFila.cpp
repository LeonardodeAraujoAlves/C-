#include<iostream>
#include<queue>//biblioteca com os metodos de construção prontos para a estrutura de lista

//queue = lista
//queue<tipoDeLista>NomeDaLista
int main(){
	
	std::queue<std::string> cartas;
	
	cartas.push("Copas");
	cartas.push("Espadas");
	cartas.push("Ouros");
	cartas.push("Ouros");
	cartas.push("Paus");
	
	std::cout << "Tamanho da fila: " << cartas.size() << "\n";
	
	//
	while(!cartas.empty()){
		//front retorna a carta que est? na frente da filalllllll
		std::cout << " Primeira Carta: " << cartas.front() << "\n";
		cartas.pop();
	}
	
	return 0;
}
