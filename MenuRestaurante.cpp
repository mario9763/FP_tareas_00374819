/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    
    int m;
    
    cout<<"\t\t\tElija una opción\n\n";
    cout<<"1 Desayuno\n";
    cout<<"2 Almuerzo\n";
    cout<<"3 Cena\n";
    cout<<"4 Postres\n";
    cout<<"5 Antojos\n";
    cout<<"6 Salir\n\n";
    
    cin>>m;
    
    switch(m){
        case 1:
            cout<<"Homelete"<<endl;
            cout<<"Fruta"<<endl;
            cout<<"Típico"<<endl;
            break;
        
        case 2:
            cout<<"Sopa"<<endl;
            break;
            
        case 3:
            cout<<"Por el momento no tenemos cenas"<<endl;
            break;
            
        case 4:
            cout<<"Pastel de chocolate"<<endl;
            cout<<"Sorbete"<<endl;
            break;
            
        case 5:
            cout<<"Empanadas o pastelitos..."<<endl;
            cout<<"\n 1 Empanada"<<endl;
            cout<<"\n 2 Pastelito"<<endl;
            break;
            
        case 6:
            cout<<"Adios"<<endl;
            break;
            
        default: 
            cout<<"El valor ingresado no está en el menú"<<endl;
    }
    
    cin.ignore();
    
    return 0;
    
}