#ifndef _MOCKINTERFACE_H_
#define _MOCKINTERFACE_H_

#include <gmock/gmock.h>
#include "iinterface.h"

class MockInterface : public IInterface
{
public:
    MockInterface() = default;

    MOCK_METHOD(int, getValue, (), (const, override));
};

#endif //_MOCKINTERFACE_H_