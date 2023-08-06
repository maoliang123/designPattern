
#include <iostream>
using namespace std;

enum ra
{
    fifo,
    lru,
    random
};

class raClass
{
    public:
        virtual void replace() = 0;
        ~raClass();
};

class raFifoClass : public raClass
{
    public:
        void replace();
};

class raLruClass : public raClass
{
    public:
        void replace();
};

class raRandomClass : public raClass
{
    public:
        void replace();
};

class cache
{
    public:
        cache(ra r);
        ~cache();
        void replace();
    private:
        raClass* m_pRa = nullptr;
};

