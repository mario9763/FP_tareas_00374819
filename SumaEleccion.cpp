/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include  <iostream>

using namespace std;

int main(){
    
    int cantnum;
    int suma;
    int cont=0;
    int resultado;
    
    cout<<"Escriba la cantidad de números que quiere sumar:"<<endl;
    cin>>cantnum;
    
    for(int i=1; i<=cantnum; i++){
        cout<<"Escriba el número que quiere sumar: ";
        cin>>suma;
        resultado = cont + suma;
        cont = resultado;
    }
    
    cout<<"El resulatado es: "<<endl;
    cout<<resultado;

    return 0;

}