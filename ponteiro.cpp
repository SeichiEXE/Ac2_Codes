//declaração de bibliotecas
#include <iostream>
using namespace std;
//inicio do codigo
int main()
{
    //decalaração de variavel Var
    int Var = 3;
    //declaração de variavel pVar 
    int* pVar;
    //
    pVar = &Var;
    //
    cout<<Var<<endl;
    //
    cout<<*pVar<<endl;
    //
    cout<<pVar<<endl;
}