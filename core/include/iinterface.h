#ifndef _IITERFACE_H_
#define _IITERFACE_H_

class IInterface
{
public:
    IInterface() = default;
    virtual int getValue() const = 0;
};

#endif // _IITERFACE_H_