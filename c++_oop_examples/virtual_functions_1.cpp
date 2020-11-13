#include <iostream>

class base
{
    public:
        virtual void print()
        {
            std::cout << "print base class" << std::endl;
        }
        void show()
        {
            std::cout << "show base class" << std::endl;
        }
};

class derived : public base 
{
    public:
        void print()
        {
            std::cout << "print derived class" << std::endl;
        }
        void show()
        {
            std::cout << "show derived class" << std::endl;
        }
};

int main(int argc, char* argv[])
{
    base* bptr;
    derived d;
    bptr = &d;

    // virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}