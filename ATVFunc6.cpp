#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

void imprimeMenu(){

    cout << "\tCalculadora de tabuada" << endl;
    cout << "============================================" << endl;
    cout << "\tEscolha uma das opções abaixo" << endl;
    cout << "\t1. Adição" << endl;
    cout << "\t2. Subtração" << endl;
    cout << "\t3. Multiplicação" << endl;
    cout << "\t4. Divisão" << endl;
    cout << "\t5. Completa" << endl;
    cout << "============================================" << endl;
}
void imprimeTabuadaAdicao(int num){

    int matrizAdicao[9];
    int i;
    for(i=0; i<9; i++){
            matrizAdicao[i] = num + i + 1;
    }
    for(i=0; i<9; i++){
        cout << num << " + " << i + 1 << " = " << matrizAdicao[i] << endl;
    }
}
void imprimeTabuadaSubtracao(int num){
    
    int matrizSub[9];
    int i;
    for(i=0; i<9; i++){
            matrizSub[i] = num - i - 1;
    }
    for(i=0; i<9; i++){
        cout << num << " - " << i + 1 << " = " << matrizSub[i] << endl;
    }
}
void imprimeTabuadaMultiplicacao(int num){
    
    int matrizMult[9];
    int i;
    for(i=0; i<9; i++){
            matrizMult[i] = num * (i + 1);
    }
    for(i=0; i<9; i++){
        cout << num << " * " << i + 1 << " = " << matrizMult[i] << endl;
    }
}
void imprimeTabuadaDivisao(float num){
    
    float matrizDiv[9];
    int i;
    for(i=0; i<9; i++){
            matrizDiv[i] = num / (i + 1);
    }
    for(i=0; i<9; i++){
        cout << num << " / " << i + 1 << " = " << setprecision(3) << matrizDiv[i] << endl;
    }
}
int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int escolha, numero;

    imprimeMenu();

    cin >> escolha;

    system("cls");
    
    switch(escolha){
        case 1:
        cout << "Insira um número a ser calculado" << endl;
        cin >> numero;
        imprimeTabuadaAdicao(numero);
        break;

        case 2:
        cout << "Insira um número a ser calculado" << endl;
        cin >> numero;
        imprimeTabuadaSubtracao(numero);
        break;

        case 3:
        cout << "Insira um número a ser calculado" << endl;
        cin >> numero;
        imprimeTabuadaMultiplicacao(numero);
        break;
        
        case 4:
        cout << "Insira um número a ser calculado" << endl;
        cin>> numero;
        imprimeTabuadaDivisao(numero);
        break;

        case 5:
        cout << "Insira um número a ser calculado" << endl;
        cin >> numero;
        imprimeTabuadaAdicao(numero);
        cout << endl;
        imprimeTabuadaSubtracao(numero);
        cout << endl;
        imprimeTabuadaMultiplicacao(numero);
        cout << endl;
        imprimeTabuadaDivisao(numero);
        break;
    }
    return 0;
}