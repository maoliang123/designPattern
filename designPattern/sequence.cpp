#include "sequence.h"
#include <iostream>
using namespace std;

void deque::push_back()
{
	std::cout << "this is push_back" << std::endl;
};

void deque::push_front()
{
	std::cout << "this is push_front" << std::endl;
};

void deque::pop_back()
{
	std::cout << "this is pop_back" << std::endl;
};

void deque::pop_front()
{
	std::cout << "this is pop_front" << std::endl;
};


void queue::push()
{
	m_deque.push_front();
};

void queue::pop()
{
	m_deque.pop_back();
};

void stack::push()
{
	m_deque.push_front();
};

void stack::pop()
{
	m_deque.pop_front();
};