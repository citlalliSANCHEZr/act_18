#include <iostream>
#include "seccion.h"
#include<vector>
#include "menuSeleccion.h"
using namespace std;

int main()
{

   vector<Civilizacion> pais;
   string op;

   while(true)
   {
       cout<<"1) agregar civilizacion"<<endl;
       cout<<"2) elegir civilizacion"<<endl;
       cout<<"0) salir"<<endl;
       getline(cin,op);

       if(op=="1")
       {
          //agregar
          string nombre;
          Civilizacion civilizacion;

          cout<<"nombre: ";
          getline(cin,nombre);
          civilizacion.setNombre(nombre);
          pais.push_back(civilizacion);
       }
       else if(op=="2")
       {
           //elegir
           if(pais.empty())
           {
               cout<<"no hay civilizaciones"<<endl;
           }else{
               for(size_t i=0;i<pais.size();i++)
               {
                   Civilizacion &civilizacion = pais[i];
                   cout<<i+1<<")";
                   cout<<civilizacion.getNombre()<<endl;
               }
               cout<<"0) salir"<<endl;
               size_t ops;
               cin>>ops;cin.ignore();
               if(ops>pais.size())
               {
                   cout<<"opcion incorrecta"<<endl;
               }else if(ops!=0)
               {
                   Civilizacion &civilizacion = pais[ops-1];
                   menu(civilizacion);

               }
           }

       }
       else if(op=="0")
       {
           break;
       }
   }

    return 0;
}
