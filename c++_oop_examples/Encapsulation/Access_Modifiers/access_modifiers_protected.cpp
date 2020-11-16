#include <iostream>

class Parent
{
    protected:
        int id_protected;
};

class Child : public Parent
{
    public:
        void setId(int id)
        {
            //  Child class is able to access the inherited
            //  protected data members of the base class
            id_protected = id;
        }

        void display_id()
        {
            std::cout << "id_protected is: " << id_protected << std::endl;
        }
};

int main(int argc, char* argv[])
{
    Child obj;

    obj.setId(81);
    obj.display_id();

    return 0;
}