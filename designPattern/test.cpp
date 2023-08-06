#include "sequence.h"
#include <memory>

void testAdapter()
{
	std::unique_ptr<stack> pStack(new stack());
	std::unique_ptr<queue> pQueue(new queue());

	pStack->push();
	pStack->pop();

	pQueue->push();
	pQueue->pop();
};