#include "calcexception.h"
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
        throw  new CalcException("Dois numeros são necessários para inverter");
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
        throw  new CalcException("Dois numeros são necessários para efetuar a soma");
    }

    int n2 = this->pop();
    int n1 = this->pop();

    this->push(n1+n2);
}


void Calculadora::dividir(){
    if(!possuiDoisNumeros()){
        throw  new CalcException("Dois numeros são necessários para efetuar a divisão");
    }
    int n2 = this->pop();

    if(n2 == 0) {

        this->push(n2);

        throw new CalcException("Não é possivel dividir por 0");
    }

    int n1 = this->pop();

    this->push(n1/n2);
}

void Calculadora::subtrair() {
    if(!possuiDoisNumeros()){
        throw  new CalcException("Dois numeros são necessários para efetuar a subtração");
    }

    int n2 = this->pop();
    int n1 = this->pop();

    this->push(n1-n2);
}

void Calculadora::multiplicar(){
    if(!possuiDoisNumeros()){
        throw  new CalcException("Dois numeros são necessários para efetuar a multiplicação");
    }

    int n2 = this->pop();
    int n1 = this->pop();

    this->push(n1*n2);
}
