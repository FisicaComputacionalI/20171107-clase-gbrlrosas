//Rosas Galicia Jose Gabriel
//clase 7 noviembre
//swich pata leer la variable y hacer uno de varios casos, al final de cada caso y salgo del ciclo usamos break
//si no cumple ninguno d los casos hace el caso por defecto
// char es para guardar una variable
#include <iostream>
using namespace std;

int main()
{
  char variable;
  cout<<"dame un valor entre a,b,c,d,f"<<endl;
  cin>>variable;
  switch(variable){
    case 'a': cout<<"excelente"<<endl; break;
    case 'b': cout<<"muy bien"<<endl; break;
    case 'c': cout<<"bien"<<endl; break;
    case 'd': cout<<"pasaste"<<endl; break;
    case 'f': cout<<"intenta de nuevo"<<endl; break;
  default:cout<<"opcion no valida"<<endl;
}
  return 0;
}
