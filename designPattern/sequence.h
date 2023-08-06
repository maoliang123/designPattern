
class deque
{
public:
	void push_back();
	void push_front();
	void pop_back();
	void pop_front();
};


class sequence
{
public:
	virtual void push() = 0;
	virtual void pop() = 0;
};

class queue : public sequence
{
public:
	void push();
	void pop();

private:
	deque m_deque;
};

class stack : public sequence
{
public:
	void push();
	void pop();

private:
	deque m_deque;
};