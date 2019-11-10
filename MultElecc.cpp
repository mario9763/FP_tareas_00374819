/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include  <iostream>

using namespace std;

int main(){
    
    int cantnum;
    int mult;
    int cont;
    int resultado;
    
    cout<<"Escriba la cantidad de números que quiere multiplicar:"<<endl;
    cin>>cantnum;
    
    cout<<"Escriba el número que quiere multiplicar: ";
    cin>>cont;
    
    for(int i=1; i<cantnum; i++){
        cout<<"Escriba el número que quiere multiplicar: ";
        cin>>mult;
        resultado = cont * mult;
        cont = resultado;
    }
    
    cout<<"El resulatado es: "<<endl;
    cout<<resultado;

    return 0;

}
