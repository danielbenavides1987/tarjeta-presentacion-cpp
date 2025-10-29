#include <iostream>  // cout, cin, endl
using namespace std;
int main() {
    // 1) Constantes para imprimir los símbolos de cada operación
    const char OP_SUMA = '+';
    const char OP_RESTA = '-';
    const char OP_MULT  = '*';
    const char OP_DIV   = '/';

    // 2) Variables de entrada.
    //    Usamos double para que la división pueda mostrar decimales.
    //    (Ej.: 7 / 4 = 1.75). Si el usuario coloca 0 en el segundo número,
    //    C++ mostrará "inf" o "nan" en división, pero aquí NO usamos if.
    double a = 0.0;
    double b = 0.0;

    // 3) Pedimos los números usando cin (visto en clase)
    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // 4) Cálculos con operadores básicos
    double suma  = a + b;
    double resta = a - b;
    double mult  = a * b;
    double divi  = a / b;  // Nota: si b es 0, el resultado puede ser inf/nan

    // 5) Salida formateada
    cout << endl;
    cout << "Resultados:" << endl;
    cout << a << " " << OP_SUMA << " " << b << " = " << suma  << endl;
    cout << a << " " << OP_RESTA << " " << b << " = " << resta << endl;
    cout << a << " " << OP_MULT  << " " << b << " = " << mult  << endl;
    cout << a << " " << OP_DIV   << " " << b << " = " << divi  << endl;

    // 6) Fin
    return 0;
}
