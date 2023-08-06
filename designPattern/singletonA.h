#include "singleton.h"
#include <iostream>

namespace st
{
	class singletonA : public singleton
	{
		friend class singleton;
	public:
		void show() { std::cout << "this is singletonA" << std::endl; };
	private:
		singletonA() {};
	};
}