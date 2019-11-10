/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include  <iostream>
using namespace std;
int main(){
    
    int cantnum;
    float divsn;
    float cont;
    float resultado;
    
    cout<<"Escriba la cantidad de números que quiere dividir al número x:"<<endl;
    cin>>cantnum;
    
    cout<<"Escriba el número original(x): ";
    cin>>cont;
    
    for(int i=1; i<=cantnum; i++){
        cout<<"Escriba el número que quiere dividir: ";
        cin>>divsn;
        resultado = cont / divsn;
        cont = resultado;
    }
    
    cout<<"El resulatado de la división es: "<<endl;
    cout<<cont;

    return 0;

}

