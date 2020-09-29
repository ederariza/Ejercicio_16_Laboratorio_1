/*
Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2
*/

#include <iostream>
using namespace std;

int main(){

    int contador = 0;
    int sumatoria = 0;
    float promedio = 0;
    while (true) {

        int numero;
        cout << "Ingrese el numero: ";
        cin >> numero;
        contador += 1;
        sumatoria += numero;
        promedio = sumatoria / contador;

        if(numero == 0){
            contador -= 1;
            promedio = sumatoria / contador;
            cout << "El promedio es " << promedio << endl;
            break;
        }

    }

    return 0;
}
