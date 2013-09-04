#include <iostream>

using namespace std;

class Fraccion
{
    private:
        int numerador;
        int denominador;
    public:
        Fraccion();
        Fraccion(int n, int d);
};

Fraccion::Fraccion()
{
    numerador = 0;
    denominador = 1;
}

Fraccion::Fraccion(int n, int d)
{
    numerador = n;
    denominador = d;
}

int main()
{
    Fraccion f;
    cout << "Hello World!" << endl;
    return 0;
}

