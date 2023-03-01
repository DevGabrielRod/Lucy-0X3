#include <iostream>
#include <stdlib.h> //Para usar códigos do terminal "system()"
#include "Version.h"


using namespace std;

// PROTOTIPAÇÕES
float som();
float sub();
float mul();
float divi();
void limpar(); // limpa a tela usando comando no termial de limpeza de tela
void version();
// Variaveis globais
float estmemo = 214748364.0;

int main()
{
    int opc, opccal;
    float sair = false; // variável para definir se o loop principal deve ser quebrado
    while (1)
    {
        // enter:
        limpar();
        cout << "Lucy (Baixo Nivel)" << endl ;
        version();      
        
        cout << "Em Que Posso Ajudar?" << endl;
        cout << "[ 1 ]Calculadora" << endl;
        cin >> opc;
        limpar();
        switch (opc)
        {
        case 1:
            cout << "[ 1 ]Soma" << endl
                 << "[ 2 ]Subtraçao" << endl
                 << "[ 3 ]Multiplicaçao" << endl
                 << "[ 4 ]Divisao" << endl;
            cin >> opccal;
            switch (opccal)
            {
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
                // goto enter;
                sair = false;
                break;
                
            }if (sair)
                break;
        }

        return 0;
    }
}
// FUNÇÕES - (DECLARAÇÕES)
float som()
{
    double num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    try
    {
        if (num1 >= estmemo)
        {
            throw 1;
        }
        else
        {
        }
    }
    catch (float err)
    {
        cout << "Erro de estouro de memoria: " << err << endl;
    }

    try
    {
        if (num2 >= estmemo)
        {
            throw 1;
        }
        else
        {
            cout << "Insira o Numero Secundario:";
            cin >> num2;
        }
    }
    catch (float err)
    {
        cout << "Erro de estouro de memoria: " << err << endl;
    }

    cout << "A soma de " << num1 << "e " << num2 << "e igual a: " << num1 + num2 << endl;

    return 0.0;
}
float sub()
{
    float num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    cout << "Insira o Numero Secundario:";
    cin >> num2;
    cout << "A subtraçao de " << num1 << " e " << num2 << " e igual a: " << num1 - num2 << endl;
    return 0.0;
}
float mul()
{
    float num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    cout << "Insira o Numero Secundario:";
    cin >> num2;
    cout << "A multiplicaçao de " << num1 << " e " << num2 << " e igual a: " << num1 * num2 << endl;
    return 0.0;
}
float divi()
{
    float num1, num2, result;
    cout << "Insira o Numero Primario:";
    cin >> num1;
    cout << "Insira o Numero Secundario:";
    cin >> num2;
    cout << "A divisao de " << num1 << " e " << num2 << " e igual a: " << num1 / num2 << endl;
    return 0.0;
}
void limpar()
{
// CÓDIGO ABAIXO PARA IDENTIFICAR O SO, CASO WINDOWS DEFINA CLS COMO O CÓDIGO CO SYSTEM
// CASO OUTRO DE MESMA BASE DO LINUX, DEFINA COMO CLEAR
#ifdef _WIN32
    system("cls");
#endif
#ifdef __linux__
    system("clear");
#endif
}
//Default Version
void version()
{
  cout << "Version : " << SAMPLE_VERSION_MAJOR << "." << SAMPLE_VERSION_MINOR << "." << SAMPLE_VERSION_PATCH << endl;
}