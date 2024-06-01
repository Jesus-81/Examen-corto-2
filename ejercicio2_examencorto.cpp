#include "iostream"
using namespace std;

int main (void){
//declarar variables//
float temperatura;
cout << "Programa para evaluar la fiebre de un paciente" << endl;

 cout<< "Por favor ingrese la temeperatura del paciente: "<< endl << endl;
 cin>> temperatura;
//Estructura if para verificar los estados de un paciente//
   if(temperatura >= 41.5){
     cout<< "El paciente esta sufriendo hiperpirexia, necesita atencion de primera urgencia!" << endl << endl;
   } else if (temperatura >= 40){
      cout<< "El paciente tiene fiebre  muy alta, necesita atencion urgente"<< endl << endl;
   } else if (temperatura >= 39){
      cout << "El paciente tiene fiebre alta, necesita atencion medica ya" << endl << endl;
   } else if (temperatura >= 38){
      cout << "El paciente tiene fiebre moderada, necesita antecion medica"<< endl << endl;
   } else if (temperatura >= 37.4){
      cout << "El paciente tiene febricula, la atencion medica puede esperar" << endl << endl;
   } else if (temperatura >= 36){
    cout << "El paciente esta sano, puede irse" << endl << endl;
   }
       
  cout << endl;
  return 0;


}
