/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include  <iostream>


int main(){
    
    int num1; 
    int num2; 
    int num3;
    int num4;
    int resultado; 

    std::cout<<"Ingrese el primer numero\n";
    std::cin>>num1;

    std::cout<<"Ingrese el segundo numero\n";
    std::cin>>num2;
    
    std::cout<<"Ingrese el tercer numero\n";
    std::cin>>num3;
    
    std::cout<<"Ingrese el cuarto numero\n";
    std::cin>>num4;

    resultado=num1 + num2 + num3 + num4;

    std::cout<<"El resultado es: ";
    std::cout<<resultado<<"\n";

    return 0;

}