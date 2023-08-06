#include "testSingleton.h"
#include "singleton.h"
#include <memory>
using namespace st;

void testSingleton()
{
	std::unique_ptr<singleton> pSingleton(singleton::singleton::GetInstance(st::singleton::sA));
	pSingleton->show();
}