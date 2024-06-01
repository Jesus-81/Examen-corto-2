#include "iostream"
using namespace std;

int main(void){

int n, i, pares=0, impares=0, arrPares[300], arrNoPares[300];
bool esPar;
cout << "Numeros pares e impares" << endl << endl;

cout << "Digite Numeros enteros o cero para finalizar: " << endl;
   
     
        if(n!=0){
                esPar=true;
               if(n % 2 == 0)
                n = n / 2;
               else 
                 esPar=false;
                   n = n * 10;   
        

          if(esPar=true)
             arrPares[pares++]=n;
             else
             arrNoPares[impares++]=n;
     }while(n!=0);

     cout<< "Los numeros pares y divididos por 2 son: "<< endl << endl;
     for(i=0,i < pares; i++;)
     cout << arrPares[i]<< " ";

     cout << "Los numeros impares y multiplicados por 10 son: " << endl << endl;
     for(i=0, i < impares; i++;)
     cout << arrNoPares[i] << " ";

 

cout << endl;
return 0; 





}








