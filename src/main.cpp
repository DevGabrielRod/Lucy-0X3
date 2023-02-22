#include <iostream>

using namespace std;

extern "C" float _calc(float a, float b);
    /*inline float som() {
        float num1, num2, result;
        cout << "Insira o Numero Primario:";
        cin >> num1;
        cout << "Insira o Numero Secundario:";
        cin >> num2;
        cout << "A soma de " << num1 << " e " << num2 << " e igual a: " << num1 + num2 << endl;
        return 0.0;
    }*/
    inline float som() {
        float num1, num2, result;
        cout << "Insira o Numero Primario:";
        cin >> num1;
        cout << "Insira o Numero Secundario:";
        cin >> num2;
        cout << "A soma de " << num1 << " e " << num2 << " e igual a: " << _calc(num1, num2) << endl;
        return 0.0;
    }
    inline float sub() {
        float num1, num2, result;
        cout << "Insira o Numero Primario:";
        cin >> num1;
        cout << "Insira o Numero Secundario:";
        cin >> num2;
        cout << "A soma de " << num1 << " e " << num2 << " e igual a: " << num1 - num2 << endl;
        return 0.0;
    }



int main(){
    int opc;
    cout << "Lucy 2.0 (Baixo Nivel)" << endl;
    cout << "Em Que Posso Ajudar?" << endl;
enter:
    cout << "[ 1 ]Calculadora" << endl;
    cin >> opc;

    switch(opc) {
        case 1:
            som();
            break;
        case 2:
            sub();
            break;
        default:
            cout << "OPÇAO INVALIDA!!!" << endl
            << "Tente Novamente!!" << endl;
            goto enter;
            break;
    }
   
    return 0;
}

