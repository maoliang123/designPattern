#include <iostream>
using namespace std;
//单核    
class SingleCore     
{    
public:    
    virtual void Show() = 0;  
};

class SingleCoreA: public SingleCore      
{    
public:    
    void Show() { std::cout << "Single Core A" << std::endl; }    
};

class SingleCoreB :public SingleCore    
{    
public:    
    void Show() { std::cout << "Single Core B" << std::endl; }    
};    

//多核    
class MultiCore      
{    
public:    
    virtual void Show() = 0;  
};

class MultiCoreA : public MultiCore      
{    
public:    
    void Show() { std::cout << "Multi Core A" << std::endl; }    
    
};    

class MultiCoreB : public MultiCore      
{    
public:    
    void Show() { std::cout << "Multi Core B" << std::endl; }    
};    
