#include "calcexception.h"

CalcException::CalcException(std::string message)
{
    this->message = QString::fromStdString(message);
}

QString CalcException::what()
{
    return this->message;
}
