#include "factory.h"
#include "test.h"
#include <memory>

void testFactory()
{
    unique_ptr<CoreFactoryA> factory(new CoreFactoryA);
    unique_ptr<MultiCoreA> coreA(static_cast<MultiCoreA*>(factory->createMultiCore()));
    coreA->Show();
};