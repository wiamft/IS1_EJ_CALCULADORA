#include <iostream>
#include "operations.h"
#include <string>

int main() {
    mensajeInicio();

    bool salir = false;

    while (!salir) {

        tDatos d = lectura();

        if (d.operador == "Exit") {
            salir = true;
        }
        else if (d.operador == "Help") {
            help();
        }
        else {
            double r = execute(d);

            
            if (r == -1) {
                mostrarError("Operacion invalida");
            }
            else {
                mostrarSolucion(r);
            }
        }
    }

    return 0;
}
