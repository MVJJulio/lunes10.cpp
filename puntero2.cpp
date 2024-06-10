#include<iostream>
using namespace std;
int main(int argc, int *argv[]){
    int x;
    int *apuntador= &x;

    cout<<"Ingrese un numero entero: ";
    cin>> *apuntador;//almacenamos en la memoria el dato

    cout<<"Usted ingreso el numero: "<<x<<"\n";
    cout<<"Usted ingreso el numero: "<<&apuntador<<"\n";
    return 0;
}