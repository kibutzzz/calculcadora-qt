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

void Calculadora::inverterUltimos()
{
    if(!possuiDoisNumeros()){
        return;
    }

    int ultimo = this->pop();
    int penultimo = this->pop();

    this->push(ultimo);
    this->push(penultimo);
}

QStack<int> *Calculadora::getCopiaPilha()
{
    QStack* copia = new QStack();

    for(int numero : *this) {
        copia->push(numero);
    }

    return copia;
}

void Calculadora::deletarUltimo()
{
    if(!this->isEmpty()) {
        this->pop();
    }
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
