#include "operations.h"
#include "inout.h"
#include <cmath>


double add(double num1, double num2) {
    return num1 + num2;
}
double sub(double num1, double num2) {
    return num1 - num2;
}
double mul(double num1, double num2) {
    return num1 * num2;
}
double div(double num1, double num2) {
    double resultado = -1;
    if (num2 != 0) {
        resultado = num1 / num2;
    }
    return resultado;
}
double exp(double num1, double num2) {

    return pow(num1, num2);
}

double execute(tDatos datos) {
    double resultado;
    if (datos.operador == "Add")
        resultado = add(datos.num1, datos.num2);
    else if (datos.operador == "Sub")
        resultado = sub(datos.num1, datos.num2);
    else if (datos.operador == "Mul")
        resultado = mul(datos.num1, datos.num2);
    else if (datos.operador == "Div")
        resultado = div(datos.num1, datos.num2);
    else if (datos.operador == "Exp")
        resultado = exp(datos.num1, datos.num2);
    else {
        resultado = -1;
    }
    return resultado;
}

