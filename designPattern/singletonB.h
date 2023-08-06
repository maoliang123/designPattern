#include "singleton.h"
#include <iostream>

namespace st
{
	class singletonB : public singleton
	{
		friend class singleton;
	public:
		void show() { std::cout << "this is singletonB" << std::endl; };
	private:
		singletonB() {};
	};
}