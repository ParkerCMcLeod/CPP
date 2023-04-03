/*

#include <iostream> 


class Implicit
{
private:
	int m_Num;
	std::string m_Text;
public:
	Implicit(int num)
		: m_Num(num), m_Text("Unknown") {}
	Implicit(std::string text)
		: m_Num(-1), m_Text(text) {}
};


class Explicit
{
private:
	int m_Num;
	std::string m_Text;
public:
	explicit Explicit(int num)
		: m_Num(num), m_Text("Unknown") {}
	explicit Explicit(std::string text)
		: m_Num(-1), m_Text(text) {}
};


void Foo(const Implicit& i)
{
	// do stuff
}


void Foo(const Explicit& e)
{
	// do stuff
}


int main()
{
	
	Implicit i0 = 22; // this works because 22 is implicitly casted, this is the same as calling Implicit i0(22);
	// Explicit e0 = 22; doesn't work because explicit keyword means no automatic casting
	Implicit i1 = std::string("hello");
	// Explicit e1 = std::string("hello"); doesn't work because explicit keyword means no automatic casting

	Foo(22); // goes to Implicit overloaded function automatically b/c exlicit is invalid

}

*/