#include <iostream>

// Base class
class Animal {
public:
    void eat() const {
        std::cout << "Animal is eating" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() const {
        std::cout << "Dog is barking" << std::endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() const {
        std::cout << "Cat is meowing" << std::endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.eat(); // Output: Animal is eating
    dog.bark(); // Output: Dog is barking

    cat.eat(); // Output: Animal is eating
    cat.meow(); // Output: Cat is meowing

    return 0;
}
