#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        // --- MENU PRINCIPAL ---
        cout << "\n=== EVALUADOR DE CALIFICACIONES ===\n";
        cout << "1) Evaluar una calificacion\n";
        cout << "0) Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        // Manejo cuando la opción es  invalida
        if (!cin) {
            cin.clear();// limpia el estado de error
            cout << "Entrada invalida. Intenta de nuevo.\n";
            continue;                  // vuelve al menu
        }

        switch (opcion) {
        case 1: {
            int nota;       // calificacion numerica 0-100
            char letra;     // A, B, C, D o F

            cout << "Ingrese la calificacion (0-100): ";
            cin >> nota;

            if (nota < 0 || nota > 100) {
                cout << "Error: la calificacion debe estar entre 0 y 100.\n";
                break; // regreso al menu sin cerrar el programa
            }

            if (nota >= 90) {
                letra = 'A';
            } else if (nota >= 80) {
                letra = 'B';
            } else if (nota >= 70) {
                letra = 'C';
            } else if (nota >= 60) {
                letra = 'D';
            } else {
                letra = 'F';
            }

            cout << "Calificacion en letra: " << letra << "\n";

            if (nota >= 60) {
                cout << "Estado: Aprobado\n";
            } else {
                cout << "Estado: Reprobado\n";
            }

            break;
        }

        case 0:
            cout << "Saliendo del sistema...\n";
            break;

        default:
            cout << "Opcion no valida. Intenta de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}
