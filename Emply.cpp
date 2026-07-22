#include<iostream>
#include<string>
using namespace std;
struct empleado{
    int numero;
    string nombres;
    int ventas[12];
    int suma;
    float salario;
};
int main(){
    int n;
    cout<<"Por favor, ingrese su cantidad de empleados"<<endl;
    cin>>n;
    cin.ignore();

    empleado E[50];

    for(int i=0; i<n; i++){
        int sumas=0;
        cout<<"\nEmpleado "<<i+1<<endl;
        cout<<"Numero de empleado: ";
        cin>>E[i].numero;
        cin.ignore();
        cout<<"Nombres completos: ";
        getline(cin, E[i].nombres);
        cout<<"Nro de ventas: ";
        for(int j=0; j<12; j++){
            cout<<"Venta del mes nro "<<j+1<<":"<<endl;
            cin>>E[i].ventas[j];
            sumas+=E[i].ventas[j];
        }
        E[i].suma=sumas;
        cout<<"Introduce tu salario: ";
        cin>>E[i].salario;
        cin.ignore();
    }
    int magnus=0;
    for(int i=1; i<n; i++){
        if(E[i].suma > E[magnus].suma){
            magnus=i;
        }
    }
    cout<<"\n----------Empleado con mayores ventas anuales----------"<<endl;
    cout<<"Numero: "<<E[magnus].numero<<endl;
    cout<<"Nombres: "<<E[magnus].nombres<<endl;
    cout<<"Salario: "<<E[magnus].salario<<endl;
    cout<<"Total de ventas anuales: "<<E[magnus].suma<<endl;
    return 0;
}