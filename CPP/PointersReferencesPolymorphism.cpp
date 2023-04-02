/*

#include <iostream>


// Base class
class Animal {
public:
    Animal() { std::cout << "Animal created \n"; };
    ~Animal() { std::cout << "Animal destroyed \n"; };

    virtual void playSound() {
        std::cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
public:
    Pig() { std::cout << "Pig created \n"; };
    ~Pig() { std::cout << "Pig destroyed \n"; };

    void playSound() override {
        std::cout << "The pig says: wee wee \n";
    }
};

void changeByReference(int& num)
{
    num = 42;
}

int main()
{
    Animal* myAnimal = new Animal();
    Pig* myPig = new Pig();

    myAnimal->playSound();
    myPig->playSound();

    Animal* myPigAnimalPointer = myPig; // polymorphism (plays animal sound despite being pig)

    myAnimal->playSound();
    myPigAnimalPointer->playSound();

    int num = 1;
    changeByReference(num);

    std::cout << num;

    return 0;
}

*/