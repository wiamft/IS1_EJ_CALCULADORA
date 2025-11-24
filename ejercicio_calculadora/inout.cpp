#include "inout.h"
using namespace std;

tDatos lectura() {
    tDatos d;
    cin >> d.operador;

    if (d.operador != "Exit" && d.operador != "Help") {
        
        cin >> d.num1;
        cin >> d.num2;

    }

    return d;  
}

void mostrarSolucion(double sol) {
    cout << fixed << setprecision(5);
    cout << "   :" << sol << endl;
}

void mostrarError(std::string error) {
    cout << "Error: " << error << endl;
}

void mensajeInicio() {
    cout << "------ Calculadora nivel 2do de carrera------" << endl;
    cout << "escribir el comando, el numero 1 y el numero 2" << endl;
    cout << "       [Help] para mostrar comandos" << endl;
    cout << "       [Exit] para apagar  calculadora" << endl;

}

void help() {
    cout << "Operaciones disponibles:" << endl;
    cout << "Help: muestra este mensaje de ayuda" << endl;
    cout << "Add: suma ambos numeros" << endl;
    cout << "Sub: resta el primero menos el segundo" << endl;
    cout << "Mul: multiplica ambos numeros" << endl;
    cout << "Div: divide el primero por el segundo" << endl;
    cout << "Exp: eleva el primero al segundo" << endl;

}

double getNum1(tDatos datos) { return datos.num1; }
double getNum2(tDatos datos) { return datos.num2; }
std::string getOperator(tDatos datos) { return datos.operador; }

