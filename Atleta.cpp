#include<iostream>
#include<string>

using namespace std;

struct PersonaCumple{
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main(){
    int n;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>n;

    PersonaCumple personas[100];

    for(int i=0; i<n; i++){
        cout<<"Persona "<<i+1<<endl;
        cout<<"Nombre: ";
        cin>>personas[i].nombre;
        cout<<"Dia de nacimiento: ";
        cin>>personas[i].dia;
        cout<<"Mes de nacimiento: ";
        cin>>personas[i].mes;
        cout<<"Anio de nacimiento: ";
        cin>>personas[i].anio;
    }

    int mesBuscar=-1;
    while(mesBuscar!=0){
        cout<<"Ingrese el numero de mes a buscar (0 para salir): ";
        cin>>mesBuscar;

        if(mesBuscar!=0){
            cout<<"Personas que cumplen en el mes "<<mesBuscar<<":"<<endl;
            for(int i=0; i<n; i++){
                if(personas[i].mes==mesBuscar){
                    cout<<"Nombre: "<<personas[i].nombre<<" - Fecha: "<<personas[i].dia<<"/"<<personas[i].mes<<"/"<<personas[i].anio<<endl;
                }
            }
        }
    }

    return 0;
}