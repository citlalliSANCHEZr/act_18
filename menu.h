
#include "seccion.h"
Aldeano capturar()
{
    Aldeano a;
    string nombre;
    size_t edad;
    string genero;
    size_t salud;


    cout<<"nombre: ";
    getline(cin,nombre);
    a.setNombre(nombre);

    cout<<"edad: ";
    cin>>edad;
    a.setEdad(edad);

    cout<<"genero: ";
    cin>>genero;cin.ignore();
    a.setGenero(genero);

    cout<<"salud: ";
    cin>>salud;cin.ignore();
    a.setSalud(salud);

    return a;


}
void menu(Civilizacion &c)
{
    string op;
    while(true)
    {
        cout<<"1)agregar aldeano"<<endl;
        cout<<"2)eliminar aldeano"<<endl;
        cout<<"3)clasificar aldeanos"<<endl;
        cout<<"4)buscar aldeanos"<<endl;
        cout<<"5)modificar aldeano"<<endl;
        cout<<"6)mostrar aldeano"<<endl;
        cout<<"0)salir"<<endl;
        getline(cin,op);
        if(op=="1")
        {
            string ops;
            cout<<"1)agregar el objeto aldeano al inicio"<<endl;
            cout<<"2)agregar el objeto aldeano al final"<<endl;
            cout<<"0)salir"<<endl;
            getline(cin,ops);
            if(ops=="1")
            {
                c.agregarInicio(capturar());
            }else if(ops=="2")
            {
                c.agregarFinal(capturar());
            }
            else{break;}



        }else if(op=="2")
        {
            string ops;
            cout<<"1)eliminar por nombre"<<endl;
            cout<<"2)eliminar aldeanos donde su salud sea menor a=s"<<endl;
            cout<<"3)eliminar aldeanos donde su edad sea mayor a =e"<<endl;
            cout<<"0)salir"<<endl;
            getline(cin,ops);
            if(ops=="1")
            {
                string nombre;
                cout<<"nombre: "<<endl;
                cin>>nombre;cin.ignore();
                c.eliminarNombre(nombre);
            }else if(ops=="2")
            {
                int salud;
            cout<<"salud: ";
            cin>>salud;cin.ignore();


                c.eliminarSalud(salud);
            }else if(ops=="3")
            {
                 int edad;
            cout<<"edad: ";
            cin>>edad;cin.ignore();
                c.eliminarEdad(edad);
            }else{break;}



        }else if(op=="3")
        {
            string ops;
            cout<<"1)clasificar la lista de aldeanos por nombre"<<endl;
            cout<<"2)clasificar la lista de aldeanos por edad"<<endl;
            cout<<"3)clasificar la lista de aldeanos por salud"<<endl;
            cout<<"0)salir"<<endl;
            getline(cin,ops);
            if(ops=="1")
            {
                c.ordenarNombre();
            }else if(ops=="2")
            {
                c.ordenarEdad();
            }else if(ops=="3")
            {
                c.ordenarSalud();
            }else{break;}

        }else if(op=="4")
        {
             Aldeano a;
            cin>>a;cin.ignore();

           Aldeano *ptr=c.buscar(a);
            if(ptr==nullptr)
            {
                cout<<"no encontrado"<<endl;
            }else{
            cout<<*ptr<<endl;
            }


        }else if(op=="5")
        {
             Aldeano a;
             string ops;
             string nombre;
             string genero;
             int edad,salud;

            cin>>a;cin.ignore();
            Aldeano *ptr=c.buscar(a);
            if(ptr==nullptr)
            {
                cout<<"no encontrado"<<endl;
            }else{

            cout<<*ptr<<endl;
            cout<<"modificar"<<endl;
            cout<<"1)nombre"<<endl;
            cout<<"2)edad"<<endl;
            cout<<"3)genero"<<endl;
            cout<<"4)salud"<<endl;
            cout<<"0)sair"<<endl;
            cin>>ops;cin.ignore();

            if(ops=="1")
            {

                 cout<<"nombre: "<<endl;
                getline(cin,nombre);
                ptr->setNombre(nombre);
            }else if(ops=="2")
            {
               cout<<"edad: "<<endl;
                cin>>edad;
                ptr->setEdad(edad);
            }else if(ops=="3")
            {
                 cout<<"genero "<<endl;
               getline(cin,genero);
                ptr->setGenero(genero);
            }else if(ops=="4")
            {
             cout<<"salud: "<<endl;
                cin>>salud;
                ptr->setSalud(salud);

            }else if(ops=="0")
            {
             break;
            }
            }

        }else if(op=="6")
        {
            c.print();


        }else if(op=="0")
        {
            break;
        }

    }
}

