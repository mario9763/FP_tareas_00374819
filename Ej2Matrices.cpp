/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int N;
    cout<<"Introduzca el númeor de filas que tendrá el arrelo: ";
    cin>>N;
    int M;
    cout<<"Introduzca el número de columnas que tendrá el arreglo: ";
    cin>>M;
    
    int matriz[N][M];
    
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                cout<<"Introduzca un número para almacear en la matriz: ";
                cin>>matriz[i][j];
            }
        }
        
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                cout<<matriz[i][j]<<" ";
            }
            cout<<endl;
        }
    
    return 0;
    
}