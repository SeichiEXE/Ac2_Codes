//declarando bibliotecas
#include <iostream>
using namespace std;
//iniciando codigo
int main()
{
    //declaração de variavel 
    int *ptr = new int;
    //
    *ptr = 7;
    //
    cout<< *ptr<<endl;
    //
    cout<< ptr<<endl;
    //
    delete ptr;
    ptr = nullptr;
    
    cout<< *ptr<<endl;
    cout<< ptr<<endl;
}