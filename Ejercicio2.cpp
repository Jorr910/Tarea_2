/*Elabore una función que, dado un número entero que se obtiene desde teclado, 
realice un conteo como el siguiente: Suponiendo que el valor ingresado es 3:
1
2
3
1
2*/

#include <iostream>

using namespace std;

int main (void)
{
    int numero; // asignamos la variable a utilizar para la lista-

    cout << "Ingrese el numero entero al cual quiere que se dirija el conteo" << endl;

    cin >> numero; // Se solicita la entrada del numero desde el teclado. 

    for(int i=1; i<=numero;i++) cout << i << " "; // se abre el incremento de la variable como el limite del número digitado.

    for(int listaInversa = numero-1; 
    1 <= listaInversa;listaInversa--) cout << listaInversa << " "; // el inverso del numero, el conteo regresa al inicio.

    return 1; 

}