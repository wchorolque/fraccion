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
        Fraccion Sumar(int n, int d);
        int mcd(int x, int y);
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

Fraccion Fraccion::Sumar(int n, int d)
{
    int suma_numerador = (numerador * d) + (denominador * n);
    int suma_denominador = denominador * d;

    Fraccion f(suma_numerador, suma_denominador);

    return f;
}

int Fraccion::mcd(int x, int y)
{
    return (!y) ? x : mcd(y,x%y);
}

int main()
{
    Fraccion f1;
    f1.Mostrar();
    Fraccion f2(2, 3);
    f2.Mostrar();
    Fraccion f3(f2);
    f3.Mostrar();
    Fraccion f4 = f2.Sumar(2, 3);
    cout << "Suma: ";
    f4.Mostrar();
    return 0;
}

