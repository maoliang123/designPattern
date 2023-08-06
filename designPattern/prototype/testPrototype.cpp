#include "testPrototype.h"
#include "prototype.h"
#include <memory>

void testPrototype()
{
	std::unique_ptr<resume> pResume(new resume());
	pResume->setStr("no");
	std::unique_ptr<resume> pResumeA(pResume->clone());
	std::cout << pResumeA->getStr() << std::endl;
	pResumeA->fillPersonInformation();
};