#include <iostream>

class base
{
    public:
        void fun_1(){std::cout << "base-1" << std::endl;}
        virtual void fun_2(){std::cout << "base-2" << std::endl;}
        virtual void fun_3(){std::cout << "base-3" << std::endl;}
        virtual void fun_4(){std::cout << "base-4" << std::endl;}
};

class derived : public base
{
    public:
        void fun_1(){std::cout << "derived-1" << std::endl;}
        void fun_2(){std::cout << "derived-2" << std::endl;}
        void fun_4(int x){std::cout << "derived-3" << std::endl;}
};

int main(int argc, char* argv[])
{
    
    base* bptr;
    derived d_obj1;
    bptr = &d_obj1;

    //  Early binding because fun1() is non-virtual
    //  in base
    bptr->fun_1();

    //  Late binding 
    bptr->fun_2();

    //  Late binding
    bptr->fun_3();

    //  Late binding
    bptr->fun_4();

    //  Early binding but this function call is illegal
    //  becuase pointer is of base type and funcion is of derived class
    //bptr->fun_4(5);

    return 0;
}