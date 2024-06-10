/*Factorial con funciones*/
#include<iostream>
using namespace std;
int fact(int n){//creamos a funcion
    int factorial=1;
    if (n<0){
        cout<<"El factorial de un numero negativo no existe\n";
    }else{
        for (int i = n; i >=1; i--){
            factorial*=i;
        }
        
    }
    return factorial;
}
int main(){
    int n=0;

    cout<<"Digite el numero del que quiere el factorial: ";
    cin>>n;//pedimos numero
    cout<<"El factorial es: "<<fact(n);//sacamos factoriaaaal


    return 0;
}