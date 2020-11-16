#include <iostream>

class base
{
    public:
        virtual void print() {std::cout << "print base class" << "\n";}
        void show(){std::cout << "show base class" << "\n";}
};

class derived : public base
{
    public:
        void print() {std::cout << "print derived class" << "\n";}
        void show() {std::cout << "show derived class" << "\n";}
};


int main(int argc, char* argv[])
{

    base *bptr;
    derived d;
    bptr = &d;

    //  Virtual function, binded  at runtime (runtime polymorphism)
    bptr->print();

    //  Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}