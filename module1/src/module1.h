#ifndef _MODULE1_H_
#define _MODULE1_H_

#include "iinterface.h"
class Module1 : public IInterface
{
public:
    Module1(int initValue);
    int getValue() const override;

private:
    int m_value;
    /* data */
};

#endif // _MODULE1_H_