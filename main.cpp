#include "factory/test.h"
#include "replace/test.h"
#include <iostream>
using namespace std;

int main()
{
    testFactory();
    testPolicy();
    std::cin.get();
}