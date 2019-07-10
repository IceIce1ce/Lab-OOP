#include"Animal.h"

Animal::Animal(): num_of_each_animal(0) 
{
}

Animal::~Animal()
{
}

int Animal::type_of_animal()
{
    return num_of_each_animal;
}

Cow::Cow()
{
    num_of_each_animal = 5;
}

Cow::~Cow()
{
}

void Cow::talk()
{
    cout << "Um booooooooooo" << endl;
}

int Cow::provideMilk()
{
    return rand() % 20;
}

vector<Animal*> Cow::birth()
{
    int num_of_cow = 1 + rand() % 10;
	vector<Animal*> cow;
	for (int i = 0; i < num_of_cow; i++)
	cow.push_back(new Cow());
	return cow;
}

string Cow::name_of_animal()
{
	return "Cow";
}

Sheep::Sheep()
{
    num_of_each_animal = 10;
}

Sheep::~Sheep()
{
}

void Sheep::talk()
{
    cout << "Beeee beeeeeeeee" << endl;
}

int Sheep::provideMilk()
{
    return rand() % 5;
}

vector<Animal*> Sheep::birth()
{
    int num_of_sheep = 1 + rand() % 8;
	vector<Animal*> sheep;
	for (int i = 0; i < num_of_sheep; i++)
	sheep.push_back(new Sheep());
	return sheep;
}

string Sheep::name_of_animal()
{
	return "Sheep";
}

Goat::Goat()
{
    num_of_each_animal = 15;
}

Goat::~Goat()
{
}

void Goat::talk()
{
    cout << "Heeee Heeeeeeeee" << endl;
}

int Goat::provideMilk()
{
    return rand() % 10;
}

vector<Animal*> Goat::birth()
{
    int num_of_goat = 1 + rand() % 7;
	vector<Animal*> goat;
	for (int i = 0; i < num_of_goat; i++)
	goat.push_back(new Goat());
	return goat;
}

string Goat::name_of_animal()
{
	return "Goat";
}