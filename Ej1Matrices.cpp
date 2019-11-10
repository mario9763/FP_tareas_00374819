/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int matriz[2][2];
    
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cout<<"Introduzca un número para almacear en la matriz: ";
                cin>>matriz[i][j];
            }
        }
        
        for(int i=0; i<2; i++){
            for(int j=0; j<2; j++){
                cout<<matriz[i][j]<<" ";
            }
            cout<<endl;
        }
    
    return 0;
    
}