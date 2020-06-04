#ifndef CALCEXCEPTION_H
#define CALCEXCEPTION_H

#include <QException>

class CalcException : QException
{
private:
    QString message;
public:
    CalcException(std::string message);

    QString what();
};

#endif // CALCEXCEPTION_H
