#include <algorithm>
#include <iostream>
#include <string>
using namespace std;




    struct pais
    {
        int ouro;
        int prata;
        int bronze;
        int ide;
    };
    


int func(pais a,pais b){

    if (a.ouro != b.ouro)
    {
        return a.ouro>b.ouro;
    }

    if (a.prata != b.prata)
    {
        return a.prata >b.prata;
    
    }

    if (a.bronze != b.bronze)
    {
        return a.bronze>b.bronze;
    }

    return a.ide<b.ide;
}


int main(){

    int paises;
    int modalidades;
    int o ,p, b;
    
    cin>>paises>>modalidades;

    int n1 = paises;
    int n2 = modalidades;

    pais v[102];

    
    for (int i = 0; i < n1; i++)
    {
        v[i].ouro = 0;
        v[i].prata = 0;
        v[i].bronze = 0;
        v[i].ide = i+1;
    }


    for (int i = 0; i < n2; i++)
    {
        cin>> o>>p>>b;

        v[o-1].ouro++;
        v[p-1].prata++;
        v[b-1].bronze++;

    }
    

    sort(v,v+n1,func);

    for (int i = 0; i < n1; i++)
    {
        cout<< v[i].ide<<" ";
    }



}