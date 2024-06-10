/*factorial segunda forma*/
/*Factorial con funciones*/
#include<iostream>
using namespace std;
int fact(int n){//creamos a funcion
    int factorial=1;
    if (n==0){
        factorial=1;
    }else{
        factorial=n*fact(n-1);
        
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