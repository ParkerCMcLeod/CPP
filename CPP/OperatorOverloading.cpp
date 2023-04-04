/*

#include <iostream>


class Vector
{
public:
	int m_X;
	int m_Y;

	Vector(int x, int y)
		: m_X(x), m_Y(y) {}

	Vector* operator+(Vector vector)
	{
		this->m_X += vector.m_X;
		this->m_Y += vector.m_Y;
		return this;
	}

};


// operator overloading!!!
int main()
{

	Vector v0(10, 10);
	Vector v1(5, 5);
	Vector* v2;

	v2 = v0 + v1;

	std::cout << v2->m_X << ',' << v2->m_Y;
	

}

*/
