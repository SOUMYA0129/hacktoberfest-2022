// Pure virual functions = allow us to define a function in base class which will be implemented in subclasses

#include <iostream>
using namespace std;

// Pure virtual function or Interface 
class printable{

    public:

    virtual std::string getclassname() = 0;
};

class entity : public printable
{

public:
 //   virtual std::string getname() = 0; // Pure virtual function 

    std::string getclassname() // Implemented printable interface
    {

        return "Entity";

    }
};

class player : public entity
{

private:
    std::string m_name;

public:
    player(const std::string &name) : m_name(name) {}

    // std::string getname() override
    // {

    //     return m_name;
    // }

     std::string getclassname() // Implemented printable interface
    {

        return "Player";

    }
};

void print(printable *  obj){

    std::cout<<obj->getclassname()<<std::endl;
}

int main()
{



    // entity *e = new entity(); cannot intensiate this beacause it has some unimplemented function
    // which is getname() but player can be implemented since it is having its implementation
    

   // std::cout << e->getname() << endl; 


   // Let printable be the new interface and we inherit it in entity class then as we see in our code its 

    player *p = new player("Hello"); // print hello 
    entity * e = new entity();





    print(p);
    print(e);


    // printname(e);
    // printname(p);



    return 0;
}