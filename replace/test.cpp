#include "ra.h"
#include "test.h"
#include <memory>

void testPolicy()
{
    std::unique_ptr<cache> cacheTest(new cache(fifo));
    cacheTest->replace();
};
