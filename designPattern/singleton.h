#ifndef _SINGLETON_
#define _SINGLETON_

namespace st
{
	class singleton
	{
	public:
		enum singletonClass
		{
			sA,
			sB
		};
		static singleton* GetInstance(singletonClass sC);
		virtual void show();
	protected:
		singleton();
	private:
		static singleton* m_pSingleton;
	};
}

#endif