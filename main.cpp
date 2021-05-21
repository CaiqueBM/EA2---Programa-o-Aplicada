#include <iostream>
#include <string>

using namespace std;

int trocaLetra(string **mensagem, int tamanho, char letraAntes, char letraDepois, string **novaMensagem){

int quantidadeTrocas = 0;

cout << mensagem << endl;
cout << novaMensagem << endl;



    for(int i=0; i < tamanho; i++) {
        continue;
    }

    return quantidadeTrocas;
}

int main() {

    string mensagemRecebida;
    char letraAntes, letraDepois;
    int tamanhoMensagem, quantidadeTrocas;
    string* mensagem;
    string* novaMensagem;

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
    quantidadeTrocas = trocaLetra(&mensagem, tamanhoMensagem, letraAntes, letraDepois, &novaMensagem);
    
    cout << "A mensagem original é: " << mensagemRecebida << endl;
    cout << "A mensagem trocada é: " << *novaMensagem << endl;
}

