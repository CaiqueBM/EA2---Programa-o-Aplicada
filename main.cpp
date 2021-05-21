#include <iostream>

using namespace std;

int trocaLetra(string* mensagem, int tamanho, char letraAntes, char letraDepois, string* novaMensagem){

    //Declarar variáveis
    string valor = *mensagem;
    char valorAtualizado[tamanho];
    int quantidadeTrocas = 0;

    //Modificando os valores
    for(int i=0; i <= tamanho; i++) {
        if(valor[i] == letraAntes) {
            valorAtualizado[i] = letraDepois;
            quantidadeTrocas ++;
            
        }
        else {
            valorAtualizado[i] = valor[i];
        }
    }

    //Recebendo e retornando valores necessários
    *novaMensagem = valorAtualizado;
    return quantidadeTrocas;
}

int main() {

    string mensagemRecebida = "";
    char letraAntes, letraDepois;
    int tamanhoMensagem, quantidadeTrocas;
    string novaMensagem = "";

    //Valores a receber
    cout << "Digite uma mensagem: ";
    cin >> mensagemRecebida;

    cout << "Letra a ser substituir: ";
    cin >> letraAntes;

    cout << "Letra que deseja colocar no lugar: ";
    cin >> letraDepois;
    cout << endl;

    //Tamanho da mensagem
    tamanhoMensagem = mensagemRecebida.length();

    //Chamar função para troca de letras
    quantidadeTrocas = trocaLetra(&mensagemRecebida, tamanhoMensagem, letraAntes, letraDepois, &novaMensagem);
    
    //Imprimir os dados finais
    cout << "Mensagem original: " << mensagemRecebida << endl;
    cout << "Mensagem trocada: " << novaMensagem << endl;
    cout << "Quantidade de trocas efetuadas: " << quantidadeTrocas << endl;
    
}