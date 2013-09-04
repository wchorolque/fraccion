#include <iostream>

using namespace std;

class Fraccion
{
    private:
        int numerador;
        int denominador;
    public:
        Fraccion();
};

Fraccion::Fraccion()
{
    numerador = 0;
    denominador = 1;
}

int main()
{
    Fraccion f;
    cout << "Hello World!" << endl;
    return 0;
}

