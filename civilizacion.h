#ifndef SECCION_H
#define SECCION_H

#include "jugador.h"
#include<list>
class Civilizacion
{

public:
    Civilizacion(){}
    Civilizacion(const string &nombre):nombre(nombre){}

    void setNombre(const string &nombre);
    string getNombre();
    void agregarFinal(const Aldeano &j);
    void agregarInicio(const Aldeano &j);
    void print();
    //eliminar
    void eliminarNombre(const string &nombre);
    void eliminarEdad(size_t edad);
    void eliminarSalud(size_t salud);
    //ordenar
    void ordenarNombre();
    void ordenarEdad();
    void ordenarSalud();
    //buscar
    Aldeano* buscar(const Aldeano &a);


private:
    string nombre;
    list<Aldeano> aldeanos;

};

#endif // SECCION_H
