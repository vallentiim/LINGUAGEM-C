#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int X_elevado_a_Z(int X, int Z)
    {
        int i,potencia=1;
        for (i=1; i<=Z; i++)
            potencia = potencia*X;
        return (potencia);
    }
    int main ()
    {
        int a,b;
        cout << "Escreva X\n";
        cin >> a;
        cout << "\nEscreva Z\n";
        cin >> b;
        cout << "\n\nX elevado a Z = " << X_elevado_a_Z(a,b);
        getchar ();
    }
