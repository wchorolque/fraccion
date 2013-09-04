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
        Fraccion(const Fraccion& f);
        void Mostrar();
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

Fraccion::Fraccion(const Fraccion& f)
{
    numerador = f.numerador;
    denominador = f.denominador;
}

void Fraccion::Mostrar()
{
    cout << numerador << " / " << denominador << endl;
}

int main()
{
    Fraccion f1;
    f1.Mostrar();
    Fraccion f2(2, 3);
    f2.Mostrar();
    Fraccion f3(f2);
    f3.Mostrar();

    return 0;
}

