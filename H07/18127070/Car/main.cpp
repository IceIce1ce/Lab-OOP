#include"Car.h"

void output(Carbriolet &c)
{
    c.RemoveRoof();
    c.StartEngine();
}

int main()
{
    Carbriolet _car;
    output(_car);
    return 0;
}