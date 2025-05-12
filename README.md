// corrigir 


#include <iostream>
using namespace std;


struct Node{
	int precoAtual;
	int novoPreco;	
	Node* proximo;
	};
	

int contarOcorrencias(Node* head, int precoAtual) {
    int contador = 0;
    int aux = precoAtual;
    Node* temp = head;
    while (temp) {
        if (temp -> precoAtual == aux){
            contador++;
        }
        temp = temp->proximo;
    }
    return contador;
}
	
int trocarPreco(Node*& head, int precoAtual, int novoPreco, int &total_Trocas){
	Node* atual = head;
	int aux = precoAtual;
	if(atual -> proximo == nullptr){ // caso base
		return 0;	
	}
	if(atual -> precoAtual == aux){
		atual -> precoAtual = novoPreco;   
	
		}
	 return trocarPreco(Node*& head, int precoAtual, int novoPreco, int &total_Trocas - 1);	
	
	
	
	}
void inserirInicio(Node*& head, int precoAtual){

  	Node* novo = new Node{precoAtual, nullptr};
    novo->proximo = head; 
    head = novo;           
}

void imprimirLista(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->valor << " ";
        temp = temp->proximo;
    }
    cout << endl;
}


int main(){
	int a = 5;
	int b = 10;
	int total_Trocas = 0;
	
	Node* head = nullptr;
	
	inserirInicio(10);
	inserirInicio(10);
	inserirInicio(15);
	inserirInicio(20);
	inserirInicio(20);
	inserirInicio(20);	
	total_Trocas = contarOcorrencia(head, b);
	
	cout <<"a lista atual e: ";
	imprimirLista(head);	
	
	return 0;
}
