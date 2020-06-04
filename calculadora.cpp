#include "calculadora.h"

bool Calculadora::possuiDoisNumeros()
{
    return this->size() >= 2;
}

Calculadora::Calculadora()
{

}

void Calculadora::adicionarNumero(int numero)
{
    this->push(numero);
}

int Calculadora::getUltimoNumero()
{
    int n = this->pop();

    this->push(n);

    return n;
}

void Calculadora::somar() {
    if(!possuiDoisNumeros()){
        return;
    }

    int n2 = this->pop();
    int n1 = this->pop();

    this->push(n1+n2);
}


void Calculadora::dividir(){
    if(!possuiDoisNumeros()){
        return;
    }

    int n2 = this->pop();
    int n1 = this->pop();

    this->push(n1/n2);
}

void Calculadora::subtrair() {
    if(!possuiDoisNumeros()){
        return;
    }

    int n2 = this->pop();
    int n1 = this->pop();

    this->push(n1-n2);
}

void Calculadora::multiplicar(){
    if(!possuiDoisNumeros()){
        return;
    }

    int n2 = this->pop();
    int n1 = this->pop();

    this->push(n1*n2);
}
