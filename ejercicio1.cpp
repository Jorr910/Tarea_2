/* Teniendo un Numero mayor y un Numero menor, obtener el MCD por el método de Euclides. */


#include <iostream>
using namespace std;


int mcd(int Num_Menor, int Num_Mayor ){ //Definimos nuestras variables, fuera del punto de inicio. (Int Main)

    if( Num_Mayor == 0){ //aplicamos la condicional para formar nuestro MCD

        return Num_Menor;

    } return mcd(Num_Mayor, Num_Menor%Num_Mayor); // MCD.


}


int main(){ // "comenzamos" nuestro programa, con la definición de variables.
    cout << endl;

    int Num_Mayor, Num_Menor; // deben ser las mismas con la que definimos nuestro IF. 

    cout << "Este es un programa para calcular el MCD CON EL METODO DE EUCLIDES"<< endl;

    cout<< "Introduce el  numero menor: " << endl;
    cin >> Num_Menor; //invocamos nuestras variables a digitar desde el teclado. 
   
    cout<< "Introduce el numero mayor: " << endl; 
    cin >> Num_Mayor; //invocamos nuestras variables a digitar desde el teclado. 

    cout <<"El MINIMO CON UN DIVISOR DE: " << Num_Menor <<" y "<< Num_Mayor << " es: " << mcd(Num_Mayor, Num_Menor); //Imprimimos nuestros resultados.

    cout << endl;

    return 0;

 

}
