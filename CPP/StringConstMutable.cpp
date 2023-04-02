#include <iostream>


class Pug
{
public:
	int num = 1;
	mutable int mutableNum = 42;

	int getNum() const
	{
		return this->num;
	}

	void setMutableNum(int num)
	{
		this->mutableNum = num;
	}

	void setMutableNumConst(int num) const
	{
		this->mutableNum = num;
	}
};


int main()
{
	const char* str0 = "str0";
    // char* str1 = "str1"; doesn't work because str1 is a const char *
	// str0[0] = '$'; doesn't work because str0 is a const char

	int num1 = 1;
	int num42 = 42;
	const int* constIntPtr = &num1;
	constIntPtr = &num42;
	// *constIntPtr = 42; doesn't work because the dereferenced value of constIntPtr is const
	int* const intConstPtr = &num1;
	*intConstPtr = 42;
	// intConstPtr = &num42; doesn't work because the value of constIntPtr is const

	const Pug missGrumble;
	missGrumble.getNum();
	// missGrumble.setMutableNum(100); doesn't work because function isn't const but object is
	missGrumble.setMutableNumConst(100);
	


}