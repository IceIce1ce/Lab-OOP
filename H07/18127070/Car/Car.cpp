#include"Car.h"

Car::~Car()
{
}

void Engine::start()
{
    cout << "Starting engine";
}

void Engine::remove()
{
    cout << "Removing roof" << "\n";
}

void Carbriolet::StartEngine()
{
    eng.start();
}

void Carbriolet::RemoveRoof()
{
    eng.remove();
}