#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <qstack.h>

class Calculadora : QStack<int>
{
private:
    bool possuiDoisNumeros();

public:
    Calculadora();

    void adicionarNumero(int numero);

    int getUltimoNumero();

    void somar();

    void subtrair();

    void multiplicar();

    void dividir();

    void deletarUltimo();

    void inverterUltimos();

};

#endif // CALCULADORA_H
