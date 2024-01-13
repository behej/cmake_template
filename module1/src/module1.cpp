#include "module1.h"

Module1::Module1(int initValue) : IInterface(), m_value(initValue)
{
}

int Module1::getValue() const
{
    return m_value;
}
