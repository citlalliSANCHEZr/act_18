#ifndef JUGADOR_H
#define JUGADOR_H

#include<iostream>
#include<iomanip>
using namespace std;

class Aldeano
{
public:
    Aldeano(){}
    Aldeano(const string &nombre,size_t edad,const string &genero,size_t salud ):nombre(nombre),edad(edad),genero(genero),salud(salud){}

    void setNombre(const string &nombre);
    string getNombre()const;

    void setEdad(size_t edad);
    size_t getEdad()const;

    void setGenero(const string &genero);
    string getGenero()const;

    void setSalud(size_t salud);
    size_t getSalud()const;

    friend ostream& operator<<(ostream &out, const Aldeano &j)
    {
        out<<left;
        out<< setw(10)<<j.nombre;
        out<< setw(3)<< j.edad;
        out<< setw(10)<<j.genero;
        out<< setw(3)<<j.salud;
        return out;
    }
    bool operator<(const Aldeano &j)const
    {
        return nombre < j.getNombre();
    }
     friend istream& operator>>(istream &in,Aldeano &a)
    {

        cout<<"NOMBRE: ";
        getline(cin,a.nombre);
        cout<<"edad: ";
        cin>>a.edad;
        cout<<"genero: ";
        cin>>a.genero;
        cout<<"salud: ";
        cin>>a.salud;


        return in;
    }
     bool operator==(const Aldeano& c)
    {
        return nombre==c.nombre;
    }
    bool operator==(const Aldeano& c)const
    {
        return nombre==c.nombre;
    }
private:
    string nombre;
    size_t edad;
    string genero;
    size_t salud;
};

#endif
