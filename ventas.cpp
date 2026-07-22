#include<iostream>
#include<string>

using namespace std;

struct producto{
    string nombre;
    float precio;
};

struct venta{
    int idventa;
    string producto;
    int cantidad;
    float ptotal;
};

int main(){
    int n;
    cout<<"Ingrese la cantidad de ventas a registrar: ";
    cin>>n;

    venta ventas[100];
    float totalMonto=0;
    int mayorMontoIndice=0;

    for(int i=0; i<n; i++){
        cout<<"\nVenta "<<i+1<<endl;
        ventas[i].idventa=i+1;
        cout<<"Nombre del producto: ";
        cin>>ventas[i].producto;
        cout<<"Cantidad vendida: ";
        cin>>ventas[i].cantidad;
        cout<<"Precio unitario: ";
        float precioUnitario;
        cin>>precioUnitario;

        ventas[i].ptotal=ventas[i].cantidad*precioUnitario;
        totalMonto+=ventas[i].ptotal;

        if(ventas[i].ptotal>ventas[mayorMontoIndice].ptotal){
            mayorMontoIndice=i;
        }
    }

    cout<<"\n--- RESUMEN DE VENTAS ---"<<endl;
    for(int i=0; i<n; i++){
        cout<<"ID: "<<ventas[i].idventa<<" | Producto: "<<ventas[i].producto<<" | Cantidad: "<<ventas[i].cantidad<<" | Total: S/."<<ventas[i].ptotal<<endl;
    }

    cout<<"\nMonto total generado en ventas: S/."<<totalMonto<<endl;
    cout<<"Venta con mayor monto: ID "<<ventas[mayorMontoIndice].idventa<<" ("<<ventas[mayorMontoIndice].producto<<") con S/."<<ventas[mayorMontoIndice].ptotal<<endl;

    return 0;
}