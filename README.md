#include <iostream>
using namespace std;


struct Node{
	int precoAtual;
	int novoPreco;	
	Node* proximo;
	};
	

int contarOcorrencias(Node* head, int precoAtual) {
    int contador = 0;
    Node* temp = head;
    while (temp) {
        if (temp -> precoAtual == precoAtual){
            contador++;
        }
        temp = temp->proximo;
    }
    return contador;
}
	
void trocarPreco(Node* head, int precoAtual, int novoPreco, int &total_Trocas){
	Node* atual = head;
	if(atual == nullptr){ // caso base
		return;	
	}
	if(atual -> precoAtual == precoAtual){
		atual -> precoAtual = novoPreco;   
		total_Trocas ++;
		}
	
	trocarPreco(atual -> proximo, precoAtual, novoPreco, total_Trocas);	
	
	
	
	}
void inserirInicio(Node* &head, int precoAtual){

  	Node* novo = new Node{precoAtual, 0, nullptr};
    novo->proximo = head; 
    head = novo;           
}

void imprimirLista(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->precoAtual << " ";
        temp = temp->proximo;
    }
    cout << endl;
}


int main(){
	int precoAntigo = 10;
	int precoNovo = 15;
	int ocorrencias;
	int total_Trocas = 0;
	
	
	Node* head = nullptr;
	
	inserirInicio(head, 10);
	inserirInicio(head, 10);
	inserirInicio(head, 17);
	inserirInicio(head, 20);
	inserirInicio(head, 20);
	inserirInicio(head, 20);	
	total_Trocas = contarOcorrencias(head, precoAntigo);
	cout <<"a lista atual e: ";
	imprimirLista(head);
	ocorrencias = contarOcorrencias(head, precoAntigo);
	cout << " o total de valores de produtos que custam 10 e: " << ocorrencias <<endl;	
	trocarPreco(head, precoAntigo, precoNovo ,total_Trocas);
	cout << " o novo valor agora e 15 e a lista atualizada fica";
	imprimirLista(head);
		
	return 0;
}
