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
	
void trocarPreco(Node* atual, int precoAtual, int novoPreco, int *total_Trocas){
	
	if(atual != NULL){
		if(atual -> precoAtual == precoAtual){
			atual -> precoAtual = novoPreco;   
			//(*total_Trocas) ++;
			//cout << endl << total_Trocas;
		}
		trocarPreco(atual -> proximo, precoAtual, novoPreco, total_Trocas);	
	}
}

void inserirInicio(Node **head, int precoAtual){
	 Node* novo;
	 
	novo = (Node*) malloc(sizeof(Node*));	  
    
	
	if(novo != NULL){
		novo -> precoAtual = precoAtual;
		if(head != NULL){
    		novo->proximo = *head; 
    		*head = novo;
		}
		else{ 
			*head = novo;
			novo -> proximo = NULL;		
							}
	
	}

}
void imprimirLista(Node* head) {
    Node* temp = head;
    while (temp!= NULL) {
        cout << temp->precoAtual << " ";
        temp = temp->proximo;
    }
    cout << endl;
}


int main(){
	int precoAntigo = 20;
	int precoNovo = 15;
	int ocorrencias;
	int total_Trocas = 0;
	
	
	Node* head = NULL;
	
	inserirInicio(&head, 10);
	inserirInicio(&head, 10);
	inserirInicio(&head, 17);
	inserirInicio(&head, 20);
	inserirInicio(&head, 20);
	inserirInicio(&head, 20);	
	//cout <<"a lista atual e: ";
	imprimirLista(head);
	trocarPreco(head, 20, 200 ,&total_Trocas);
	imprimirLista(head);
	//cout << total_Trocas;
	/*correncias = contarOcorrencias(head, precoAntigo);
	cout << " o total de valores de produtos que custam 20 e: " << ocorrencias <<endl;	
	
	cout << " o novo valor agora e 15 e a lista atualizada fica: ";
	imprimirLista(head);
	*/	
	return 0;
}
