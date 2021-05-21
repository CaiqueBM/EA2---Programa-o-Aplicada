#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int trocaLetra(string* mensagem, int tamanho, char letraAntes, char letraDepois, string* novaMensagem){

string valor = *mensagem;
char valorAtualizado[tamanho];
int quantidadeTrocas = 0;

//Modificando os valores

    for(int i=0; i < tamanho; i++) {
        if(valor[i] == letraAntes) {
            valorAtualizado[i] = letraDepois;
        }
        else {
            valorAtualizado[i] = valor[i];
        }
    }

    *novaMensagem = valorAtualizado;


    return quantidadeTrocas;
}


int main() {

    string mensagemRecebida = "";
    char letraAntes, letraDepois;
    int tamanhoMensagem, quantidadeTrocas;
    string novaMensagem = "";

    //Valores a receber
    cout << "Digite uma mensagem: " << endl;
    cin >> mensagemRecebida;

    cout << "Letra a ser substituir: " << endl;
    cin >> letraAntes;

    cout << "Letra que deseja colocar no lugar: " << endl;
    cin >> letraDepois;

    //Tamanho da mensagem
    tamanhoMensagem = mensagemRecebida.length();

    //Chamar função para troca de letras
    quantidadeTrocas = trocaLetra(&mensagemRecebida, tamanhoMensagem, letraAntes, letraDepois, &novaMensagem);
    
    cout << "A mensagem original é: " << mensagemRecebida << endl;
    cout << "A mensagem trocada é: " << novaMensagem << endl;
    cout << "Quantidade de trocas efetuadas: " << quantidadeTrocas << endl;
    
}