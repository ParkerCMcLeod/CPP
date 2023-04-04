/*

#include <iostream>


class Object
{
private:
	int m_Num;
	std::string m_Text;
public:
	Object(int num, std::string text)
		: m_Num(num), m_Text(text) 
	{
		std::cout << "Object Created\n";
	}
	~Object()
	{
		std::cout << "Object Destroyed\n";
	}
	void Print()
	{
		// do stuff
	}
};


int main()
{

	// unique_ptr only allows ONE ptr to the object instance to exist at a time
	// unique_ptr is scoped and gets destoryed after its scope ends
	{
		std::unique_ptr<Object> obj0 = std::make_unique<Object>(1,"TEXT");
		// std::unique_ptr<Object> obj1 = obj0; doesn't work because ptr is unique
		// Object* obj1 = obj0; doesn't work because ptr is a unique_ptr, not ptr type
		std::unique_ptr<Object> obj2 = std::make_unique<Object>(1, "TEXT");
	}

	// shared_ptr allows multiple ptrs to the object instance to exist at a time
	// shared_ptr gets destroyed once all instances of the pointer are destoryed
	{
		std::shared_ptr<Object> obj0 = std::make_shared<Object>(1, "TEXT");
		{
			std::shared_ptr<Object> obj1 = obj0;
			std::shared_ptr<Object> obj2 = obj0;
		}
	}
	// weak_ptr is a shared pointer that doesn't put a hold on the instance
	// shared_ptr gets destroyed once all instances of the SHARED pointers are destoryed
	// weak_ptr is ignored
	{
		std::shared_ptr<Object> obj0 = std::make_shared<Object>(1, "TEXT");
		{
			std::weak_ptr<Object> obj1 = obj0;
			obj0->Print();
			// obj1->Print(); needs to be casted like below to work (weak ptr are just for like locking and jazz)
			((std::shared_ptr<Object>) obj1)->Print();
			std::weak_ptr<Object> obj2 = obj0;
		}
	}

}

*/