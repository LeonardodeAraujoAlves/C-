#include<iostream>
//teste de chave
int main(){
	int a[]{7,1,3,15,0,2,4,5,8,6};
	int tamanho{10};
	
	for(int i = 0; i < tamanho; i++){
		for(int j = 0; j < (tamanho - 1 ); j++){
			if(a[j] > a[j + 1]){
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				
			}
		}
	}
	for(int i = 0; i < tamanho; i ++){
		std::cout<< i<<" = "<< a[i]<<"\n";
	}
	return 0;
}
