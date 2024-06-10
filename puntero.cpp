/*Ejemplo*/
#include<iostream>
using namespace std;
int main(int argc, char *argv[]){
    int x;
    int *apuntador = &x;//creamos un apuntador a la memoria x
    cout<<"Ingrese un numero entero: ";
    cin>> *apuntador;//almacenamos en la memoria el dato

    //delete [] apuntador;
    apuntador=NULL;

    cout<<"Usted ingreso el numero: "<<x<<"\n";
    return 0;
}