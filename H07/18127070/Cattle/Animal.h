#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using namespace std;

class Animal
{
public:
    Animal();
    ~Animal();
    virtual void talk() = 0;
    virtual int provideMilk() = 0;
    virtual vector <Animal*> birth() = 0;
    int type_of_animal();
    virtual string name_of_animal() = 0;
protected:
    int num_of_each_animal;
};

class Cow: public Animal
{
public:
    Cow();
    ~Cow();
    void talk();
    int provideMilk();
    vector<Animal*> birth();
	string name_of_animal();
};

class Sheep: public Animal
{
public:
    Sheep();
    ~Sheep();
    void talk();
    int provideMilk();
    vector<Animal*> birth();
	string name_of_animal();
};

class Goat: public Animal
{
public:
    Goat();
    ~Goat();
    void talk();
    int provideMilk();
    vector<Animal*> birth();
	string name_of_animal();
};