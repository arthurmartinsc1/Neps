#include <iostream>
#include <vector>
using namespace std;


int contador(int n,int vector1[]){


 int a = 0;
 
        for (int i = 0; i < n-2; i++)
        {
            
            if (vector1[i] == 1 && vector1[i+1]==0 && vector1[i+2] == 0)
            {
                a++;
                
            }
            
        }

    return a;
        
}

int main(){

    int n;

    cin>>n;
    int vector1[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vector1[i];
    }


    int result = contador(n,vector1);


cout<<result;
}