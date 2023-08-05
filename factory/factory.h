#include "class.h"

class CoreFactory
{
    public:
        virtual SingleCore* createSingleCore() = 0;
        virtual MultiCore* createMultiCore() = 0;
};

class CoreFactoryA: CoreFactory
{
    public:
        SingleCore* createSingleCore() { return new SingleCoreA(); };
        MultiCore* createMultiCore() { return new MultiCoreA(); };
};

class CoreFactoryB: CoreFactory
{
    public:
        SingleCore* createSingleCore() { return new SingleCoreA(); };
        MultiCore* createMultiCore() { return new MultiCoreB(); };
};

CoreFactoryA* createFactoryA()
{
    return new CoreFactoryA();
};

CoreFactoryB* createFactoryB()
{
    return new CoreFactoryB();
};