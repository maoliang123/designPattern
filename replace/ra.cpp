#include "ra.h"

raClass::~raClass()
{
    std::cout << "raClass destruct" << std::endl;
};

void raFifoClass::replace()
{
    std::cout << "this is raFifoClass" << std::endl;
};

void raLruClass::replace()
{
    std::cout << "this is raLruClass" << std::endl;
};

void raRandomClass::replace()
{
    std::cout << "this is raRandomClass" << std::endl;
};

cache::cache(ra r)
{
    switch(r)
    {
        case fifo:
            m_pRa = new raFifoClass();
            break;
        case lru:
            m_pRa = new raLruClass();
            break;
        case random:
            m_pRa = new raRandomClass();
            break;
        default:
            break;
    }
};

cache::~cache()
{
    delete m_pRa;
    m_pRa = nullptr;
};

void cache::replace()
{
    m_pRa->replace();
};
