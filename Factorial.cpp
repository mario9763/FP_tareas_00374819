/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    
    int n;
    int n2;
    int mult;
    int newmult;
    int fact;
    
    cout<<"Ingrese el número n: ";
    cin>>n;
    
    n2 = n;
    
    for (int i=1; i<n; i++){
        mult = n2 * (n-i);
        n2 = mult;
    }
    
    cout<<"El factorial de "<<n<<" es igual a "<<n2<<endl;
    
    return 0;

}
