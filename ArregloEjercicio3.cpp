/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int cont;
    int cont2;
    int x;
    cout<<"Ejercicio 3. "<<endl;
    cout<<"Calcular el promedio. "<<endl;
    cout<<"Introduzca el número de datos que quiere que almacene el arreglo: "<<endl;
    cin>>x;
    
    int arreglo[x];
    
    for(int i=0; i<x; i++){
        cout<<"Ecsriba un número entero: ";
        cin>>arreglo[i];
    }
    
    cont2 = arreglo[0];
    
    for(int i=1; i<x; i++){
        cont = cont2 + arreglo[i];
        cont2 = cont;
    }
    
    int prom = cont2/x;
    
    cout<<"El promdeio de los números almacenados en el arreglo es: "<<prom;
    
    return 0;
    
}
