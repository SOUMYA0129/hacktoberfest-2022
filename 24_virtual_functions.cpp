#include <iostream>
using namespace std;

// virtual functions - overwriting an existing fn of prent classs

// Note : Used in base class

// Example :

class entity
{

public:
    virtual std::string getname()
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

    std::string getname() override
    {

        return m_name;
    }
};

void printname(entity * entity){

    std::cout<<entity->getname()<<std::endl;
}

int main()
{

    /// comment virtual keyword 

    entity *e = new entity();

    std::cout << e->getname() << endl; // print Entity

    player *p = new player("Hello"); // print hellp 

    std::cout << p->getname() << endl; 

    entity *xp = p;

    std::cout << xp->getname() << endl; // Prints entity but we expected playe name or hello 
//  as we made a pointer of entity type but we are still refering the object p of player class

    // also 

    printname(e);
    printname(p);

    // output - Entity
        //      Entity

    // Two different objects in which one was inherited gave the same result 
    // as if the function is not implemented in the child class

    // This is beacause the player and entity class both have type entity and it calls the getname function of entity


    // What virtual functions do ?

    // VF's does the dynamic dispatch, which uses V tables which table contains the true markings of the all the virtual functions inside out base class during the compilation 


    // uncomment virtual keyword


    printname(e);
    printname(p);


    // Optional - use override keyword where function is overwritten 


    // Disadvanges - 2 runtime costs 

    // 1-> we have to giev additional memory to store that v table
    // 2-> Whenever virtual unction will be called we have to go through that table to match the correct function





    return 0;
}