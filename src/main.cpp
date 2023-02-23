#include <iostream>
#include <stdlib.h> //Para usar códigos do terminal "system()"
#include calc
using namespace std;

//PROTOTIPAÇÕES
float som();
float sub();
float mul();
float divi();
void limpar(); //limpa a tela usando comando no termial de limpeza de tela

int main(){
    int opc, opccal;
    float sair = false; //variável para definir se o loop principal deve ser quebrado
    while(1){
        //enter:
        limpar();
        cout << "Lucy 2.0 (Baixo Nivel)" << endl;
        cout << "Em Que Posso Ajudar?" << endl;
        cout << "[ 1 ]Calculadora" << endl;
        cin >> opc;
        limpar();
        switch(opc){
            case 1:
                cout << "[ 1 ]Soma" << endl << "[ 2 ]Subtraçao" << endl <<"[ 3 ]Multiplicaçao" << endl <<"[ 4 ]Divisao" << endl;
                cin >> opccal;
                switch(opccal) {
                    case 1:
                        som();
                        sair = true;
                        break;
                    case 2:
                        sub();
                        sair = true;
                        break;
                    case 3:
                        mul();
                        sair = true;
                        break;
                    case 4:
                        divi();
                        sair = true;
                        break;
                    default:
                        cout << "OPÇAO INVALIDA!!!" << endl
                        << "Tente Novamente!!" << endl;
                        //goto enter;
                        sair = false;
                        break;
                        if(sair)
                        break;
        }
        
    }
    
    return 0;
}
}
//FUNÇÕES - (DECLARAÇÕES)
float som() {
    float num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    cout << "Insira o Numero Secundario:";
    cin >> num2;
    cout << "A soma de " << num1 << "e " << num2 << "e igual a: " << num1 + num2 << endl;
    return 0.0;
}
float sub() {
    float num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    cout << "Insira o Numero Secundario:";
    cin >> num2;
    cout << "A subtraçao de " << num1 << " e " << num2 << " e igual a: " << num1 - num2 << endl;
    return 0.0;
}
float mul() {
    float num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    cout << "Insira o Numero Secundario:";
    cin >> num2;
    cout << "A multiplicaçao de " << num1 << " e " << num2 << " e igual a: " << num1 * num2 << endl;
    return 0.0;
}
float divi() {
    float num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    cout << "Insira o Numero Secundario:";
    cin >> num2;
    cout << "A divisao de " << num1 << " e " << num2 << " e igual a: " << num1 / num2 << endl;
    return 0.0;
}
void limpar(){
    //CÓDIGO ABAIXO PARA IDENTIFICAR O SO, CASO WINDOWS DEFINA CLS COMO O CÓDIGO CO SYSTEM
    //CASO OUTRO DE MESMA BASE DO LINUX, DEFINA COMO CLEAR
    #ifdef _WIN32
        system("cls");
    #endif
    #ifdef __linux__
        system("clear");
    #endif
}