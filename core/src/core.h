#ifndef _CORE_H_
#define _CORE_H_

#include "iinterface.h"

class Core
{
public:
    Core(IInterface &interface) : m_interface(interface)
    {
    }

    int method1(int coeff);

private:
    IInterface &m_interface;
};

#endif // _CORE_H_