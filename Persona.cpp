#include<iostream>
#include<string>

using namespace std;

struct persona{
    string nombres;
    string DNI;
    int edad;
};

int main(){
    int n;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>n;

    persona personas[100];

    for(int i=0; i<n; i++){
        cout<<"Persona "<<i+1<<endl;
        cout<<"Nombres: ";
        cin>>personas[i].nombres;
        cout<<"DNI: ";
        cin>>personas[i].DNI;
        cout<<"Edad: ";
        cin>>personas[i].edad;
    }

    int mayores50=0;
    float sumaEdades=0;

    for(int i=0; i<n; i++){
        if(personas[i].edad>50){
            mayores50++;
        }
        sumaEdades+=personas[i].edad;
    }

    float promedio=sumaEdades/n;

    cout<<"\n--- LISTADO COMPLETO ---"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Nombre: "<<personas[i].nombres<<" - DNI: "<<personas[i].DNI<<" - Edad: "<<personas[i].edad<<endl;
    }

    cout<<"\nCantidad de personas mayores a 50 años: "<<mayores50<<endl;
    cout<<"Promedio de edades: "<<promedio<<endl;

    return 0;
}