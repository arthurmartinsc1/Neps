#include <iostream>
#include <string>
using namespace std;

int main(){


    string risada;
    
    cin>>risada;
    
    int vogais = 0;
    for (int i = 0; i < risada.size(); i++)
    {
            if ( risada[i] == 'a' || risada[i] =='e'|| risada[i] == 'i'|| risada[i] =='o'|| risada[i] == 'u')
            {
             vogais++;
            }
            
    }
    
    string normal;
         for (int i = 0; i < risada.size(); i++)
    {
            if ( risada[i] == 'a' || risada[i] =='e'|| risada[i] == 'i'|| risada[i] =='o'|| risada[i] == 'u')
            {
             normal +=risada[i];
            }
            
    }
    
    string inversa;
         for (int i = risada.size() - 1; i > -1; i--)
    {
            if ( risada[i] == 'a' || risada[i] =='e'|| risada[i] == 'i'|| risada[i] =='o'|| risada[i] == 'u')
            {
             inversa+= risada[i];
            }
            
    }
    
    if (inversa==normal)
    {
        cout<<"S";
    }
    else
    {
        cout<<"N";
    }
    
    
    



}