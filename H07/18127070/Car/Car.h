#include<iostream>
using namespace std;

class Car
{
public:
    void StartEngine();
    void RemoveRoof();
    ~Car();
};

class Engine
{
public:
    void start();
    void remove();
};

class Carbriolet: public Car
{
public:
    void StartEngine();
    void RemoveRoof();
protected:
    Engine eng;
};