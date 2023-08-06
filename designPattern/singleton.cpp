#include "singletonA.h"
#include "singletonB.h"

namespace st
{
	singleton* singleton::m_pSingleton = nullptr;
	void singleton::show()
	{

	};
	singleton* singleton::GetInstance(singletonClass sC)
	{
		if (m_pSingleton == nullptr)
		{
			switch (sC)
			{
			case sA:
				m_pSingleton = new singletonA();
				break;
			case sB:
				m_pSingleton = new singletonB();
				break;
			default:
				break;
			}
		}
		return m_pSingleton;
	};
	singleton::singleton()
	{
	};
}