#include <iostream>
#include "core.h"
#include "module1.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World ! " << endl;

    auto mod1{Module1(3)};
    auto core{Core(mod1)};

    cout << "Module1: " << mod1.getValue() << endl;
    cout << "Core:" << core.method1(5) << endl;

    return 0;
}