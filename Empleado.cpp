#include<iostream>
#include<string>

using namespace std;
struct Empleado{
    string nombres;
    string sexo;
    double sueldo;
};
int main(){
    int n;
    cout<<"¿Cuantos trabajadores vas a registrar?"<<endl;
    cin>>n;
    cin.ignore();
    Empleado Empleados[100];
    for(int i=0; i<n; i++){
        cout<<"\nEmpleado: "<<i+1<<endl;
        cout<<"Nombres completos: ";
        getline(cin, Empleados[i].nombres);
        cout<<"Sexo, masculino o femenino?: ";
        getline(cin, Empleados[i].sexo);
        cout<<"Sueldo que gana el empleado: ";
        cin>>Empleados[i].sueldo;
        
    }
    int mayor=0;
    int menor=0;

    for(int i=1; i<n; i++){
        if(Empleados[i].sueldo > Empleados[mayor].sueldo){
            mayor=i;
        }
        if(Empleados[i].sueldo < Empleados[menor].sueldo){
            menor=i;
        }
    }
    cout<< "\n--- EMPLEADO CON MAYOR SUELDO ---"<<endl;
    cout<<"Nombres: " <<Empleados[mayor].nombres<<endl;
    cout<<"Sexo: "<<Empleados[mayor].sexo<<endl;
    cout<<"Sueldo: "<<Empleados[mayor].sueldo<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"\n--- EMPLEADO CON MENOR SUELDO ---"<<endl;
    cout<<"Nombres: "<<Empleados[menor].nombres<<endl;
    cout<<"Sexo: "<<Empleados[menor].sexo<<endl;
    cout<<"Sueldo: "<<Empleados[menor].sueldo<<endl;
    return 0;
}