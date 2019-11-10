/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int arreglo[5];
    
    for(int i=0; i<5; i++){
        cout<<"Ecsriba un número entero: ";
        cin>>arreglo[i];
    }
    
    for(int i=0; i<5; i++){
        cout<<"Arreglo["<<i<<"]= ";
        cout<<arreglo[i]<<endl;
    }
    
    return 0;
    
}