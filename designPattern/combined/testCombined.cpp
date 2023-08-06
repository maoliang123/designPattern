#include "testCombined.h"
#include "combined.h"
#include <memory>

void testCombined()
{
	std::string companyName = "huawei";
	std::unique_ptr<concreteCompany> pConcrete(new concreteCompany(companyName));
	company* pFinanceDepartment = new financeDepartment(companyName);
	company* pHrDepartment = new hrDepartment(companyName);
	pConcrete->add(pFinanceDepartment);
	pConcrete->add(pHrDepartment);
	pConcrete->show();
}