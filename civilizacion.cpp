#include "seccion.h"
#include <algorithm>

void Civilizacion::setNombre(const string &nombre)
{
    this->nombre = nombre;
}
string Civilizacion::getNombre()
{
    return nombre;
}
void Civilizacion::agregarFinal(const Aldeano &j)
{
   aldeanos.push_back(j);
}
void Civilizacion::agregarInicio(const Aldeano &j)
{
    aldeanos.push_front(j);
}
void Civilizacion::print()
{
    for(auto it = aldeanos.begin();it != aldeanos.end();it++){
        cout<<*it<<endl;

    }
}
void Civilizacion::eliminarNombre(const string &nombre)
{
    for(auto it=aldeanos.begin();it != aldeanos.end();it++)
    {
        Aldeano &j = *it;

        if(nombre==j.getNombre()){
            aldeanos.erase(it);
            break;
        }
    }
}
bool comparador(const Aldeano &a)
{
    return a.getSalud()==0;
}

void Civilizacion::eliminarSalud(size_t salud)
{
    aldeanos.remove_if([salud](const Aldeano &a){return a.getSalud()<=salud;});
}

void Civilizacion::eliminarEdad(size_t edad)
{
    aldeanos.remove_if([edad](const Aldeano &a){return a.getEdad()>=edad;});
}
void Civilizacion::ordenarNombre()
{
    aldeanos.sort();
}
bool comparadorEdad(const Aldeano &j1,const Aldeano &j2)
{
    return j1.getEdad()>j2.getEdad();
}
void Civilizacion::ordenarEdad()
{
    aldeanos.sort(comparadorEdad);
}
bool comparadorSalud(const Aldeano &j1,const Aldeano &j2)
{
    return j1.getSalud()>j2.getSalud();
}
void Civilizacion::ordenarSalud()
{
    aldeanos.sort(comparadorSalud);
}
Aldeano* Civilizacion::buscar(const  Aldeano  &a)
{
    list<Aldeano>::iterator it = find(aldeanos.begin(),aldeanos.end(),a);
    if(it== aldeanos.end())
    {
        return nullptr;
    }else{
     return &(*it);
    }
}
