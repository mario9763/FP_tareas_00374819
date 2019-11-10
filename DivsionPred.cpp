/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include  <iostream>


int main(){
    
    int num1; 
    int num2;
    int resultado; 

    std::cout<<"Ingrese el primer numero\n";
    std::cin>>num1;

    std::cout<<"Ingrese el segundo numero\n";
    std::cin>>num2;

    resultado=num1 / num2;

    std::cout<<"El resultado de la división es: ";
    std::cout<<resultado<<"\n";

    return 0;

}