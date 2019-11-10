/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include  <iostream>

using namespace std;

int main(){
    
    int cantnum;
    int primnum;
    int cont=0;
    int resta;
    int resultado;
    
    cout<<"Escriba la cantidad de números que quiere restar:"<<endl;
    cin>>cantnum;
    
    cout<<"Escriba el primer número: "<<endl;
    cin>>primnum;
    
    cont=primnum;
    
    for(int i=1; i<cantnum; i++){
        cout<<"Escriba el número que quiere restar al primer número: ";
        cin>>resta;
        resultado = cont - resta;
        cont = resultado;
    }
    
    cout<<"El resulatado es: "<<endl;
    cout<<resultado;

    return 0;

}