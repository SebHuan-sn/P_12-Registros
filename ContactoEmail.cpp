#include<iostream>
#include<string>
using namespace std;

struct ContactoEmail{
    string nombre;
    string sexo;
    int edad;
    string email;
};

int main(){
    ContactoEmail agenda[100];
    int contador=0;
    int option=0;
    string server;
    string buscado;
    string modi;
    bool encontrado;
    string emailmod;
    do{
        system("cls");
        cout<<"========================================================"<<endl;
        cout<<"||              AGENDA DE CONTACTOS                   ||"<<endl;
        cout<<"========================================================"<<endl;
        cout<<"1.- Agregar un contacto."<<endl;
        cout<<"2.- Modificar un contacto"<<endl;
        cout<<"3.- Mostrar contactos registrados"<<endl;
        cout<<"4.- Mostrar contactos segun el servidor"<<endl;
        cout<<"5.- Eliminar un contacto"<<endl;
        cout<<"6.- Buscar contactos por email"<<endl;
        cout<<"0.- exit"<<endl;
        cout<<"========================================================="<<endl;
        cout<<"Por favor, seleccione su opcion"<<endl;
        cin>>option;
        cin.ignore();
        switch(option){
            case 1:
                cout<<"----Agregue su contacto----"<<endl;
                cout<<"Nombres completos: ";
                getline(cin, agenda[contador].nombre);
                cout<<"Sexo (M, F u otro): ";
                getline(cin, agenda[contador].sexo);
                cout<<"Introduzca la edad: ";
                cin>>agenda[contador].edad;
                cin.ignore();
                cout<<"ingrese su email: ";
                cin>>agenda[contador].email;
                cin.ignore();
                contador++;
                cout<<"Guardado exitoso, we did it!"<<endl;
                system("pause");
                break;
            case 2:
                cout<<"----Modifique su contacto----"<<endl;
                encontrado=false; 
                cout<<"Elija el contacto a modificar, introduzca su email: "<<endl;
                getline(cin, emailmod);
                for(int i=0; i<contador; i++){
                    if(agenda[i].email==emailmod){
                        cout<<"Genial, comencemos con la edicion del programa"<<endl;
                        cout<<"Modifique su nombre: ";
                        getline(cin, agenda[i].nombre);
                        cout<<"Modifique su sexo: ";
                        getline(cin, agenda[i].sexo);
                        cout<<"Modifique su edad: ";
                        cin>>agenda[i].edad;
                        cin.ignore();
                        cout<<"Modifique su email: ";
                        getline(cin, agenda[i].email);
                        cout<<"Modificacion exitosa!"<<endl;

                        system("pause");
                        encontrado=true;
                        break;
                    }
                }
                if(encontrado==false){
                    cout<<"No se encontro ningun email"<<endl;
                    system("pause");
                }
                break;
            case 3:
                cout<<"----Mostrando sus contactos registrados----"<<endl;
                if(contador==0){
                    cout<<"No se encontro contacto alguno"<<endl;
                }
                else{
                    for(int i=0; i<contador; i++){
                        cout<<"Contacto #"<<i+1<<endl;
                        cout<<"Nombre: "<<agenda[i].nombre<<endl;
                        cout<<"Sexo: "<<agenda[i].sexo<<endl;
                        cout<<"Edad: "<<agenda[i].edad<<endl;
                        cout<<"Email: "<<agenda[i].email<<endl;
                    }
                }
                system("pause");
                break;
            case 4:
                cout<<"----Mostrando sus contactos (segun el servidor)----"<<endl;
                cout<<"Ingrese el servidor: ";
                cin>>server;
                cin.ignore();
                for(int i=0; i<contador; i++){
                    if(agenda[i].email.find(server)!=string::npos){
                        cout<<"Nombre: "<<agenda[i].nombre<<endl;
                        cout<<"Email: "<<agenda[i].email<<endl;
                    }
                }
                system("pause");
                break;
            case 5:{
                cout<<"----Seleccione su contacto a eliminar----"<<endl;
                cout<<"Ponga el numero de contacto a eliminar: ";
                int psico;
                cin>>psico;
                cin.ignore();
                int eraser=psico-1;
                if(eraser>=0 && eraser<contador){
                    for(int i=eraser; i<contador-1; i++){
                        agenda[i]=agenda[i+1];
                    }
                    contador--;
                    cout<<"Eliminacion exitosa!"<<endl;
                    system("pause");
                }
                else{
                    cout<<"El numero que marcaste no es valido"<<endl;
                }
                break;
            }
            case 6:{
                encontrado=false;
                cout<<"Buscando contactos (por email)....."<<endl;
                cout<<"ingrese el contacto a buscar: ";
                getline(cin, buscado);
                for(int i=0; i<contador; i++){
                    if(agenda[i].email==buscado){
                    cout<<"Su contacto se ha localizado correctamente"<<endl;
                    cout<<"Posicion: "<<i+1<<endl;
                    cout<<"Nombre: "<<agenda[i].nombre<<endl;
                    cout<<"Email: "<<agenda[i].email<<endl;
                    encontrado=true;
                    break;
                }
            }
            if(encontrado==false){
                cout<<"Error, no encontrado"<<endl;
            }
            system("pause");
            break;
        }
            case 0:
                cout<<"Saliendo........."<<endl;
                break;
            default:
                cout<<"Opcion no valida!, try again"<<endl;
                system("pause");
                break;
        }
    }while(option!=0);

}