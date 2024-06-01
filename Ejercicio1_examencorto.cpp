#include "iostream"
using namespace std;

int main(void){
    //declarar las variables(usamos float para numeros decimales porque int es para enteros//
    float altura1, altura2, Base, AreaTrapecio;
    cout << "Programa para calcular el area de un Trapecio" << endl << endl;

    //aqui pedimos al usuario las medidas del trapecio//
     cout << "Por favor ingrese las alturas y luego la base del trapecio" << endl << endl;
     cin >> altura1 >> altura2 >> Base;

    //aqui se halla el area//
     AreaTrapecio=Base*(altura1+altura2)/2;
     cout << "El area de un trapecio es: " << AreaTrapecio << endl;
    

    cout << endl;
    return 0;


}

