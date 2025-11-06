#include <iostream>
using namespace std;

int main() {
    // 1) Constantes para los símbolos (requisito)
    const char SUMA = '+';
    const char RESTA = '-';
    const char MULT = '*';
    const char DIV  = '/';

    // 2) Presentación breve
    cout << "Calculadora simple (solo iostream)\n";
    cout << "----------------------------------\n";
    cout << "Realiza suma, resta, multiplicacion y division con dos numeros.\n\n";

    // 3) Pido dos numeros
    double a, b;
    cout << "Ingresa el primer numero: ";
    if (!(cin >> a)) {
        cout << "Entrada invalida. Debes escribir un numero.\n";
        return 0;
    }

    cout << "Ingresa el segundo numero: ";
    if (!(cin >> b)) {
        cout << "Entrada invalida. Debes escribir un numero.\n";
        return 0;
    }

    // 4) Operaciones basicas
    double suma = a + b;
    double resta = a - b;
    double mult = a * b;

    // 5) Muestro resultados (sin formateo especial)
    cout << "\nResultados:\n";
    cout << a << " " << SUMA << " " << b << " = " << suma << "\n";
    cout << a << " " << RESTA << " " << b << " = " << resta << "\n";
    cout << a << " " << MULT << " " << b << " = " << mult << "\n";

    // 6) Division: evito dividir entre cero
    if (b == 0) {
        cout << a << " " << DIV << " " << b << " = No se puede dividir entre cero\n";
    } else {
        double division = a / b;
        cout << a << " " << DIV << " " << b << " = " << division << "\n";
    }

    cout << "\nGracias por usar la calculadora :)\n";
    return 0;
}
