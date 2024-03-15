#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    float vetor[n];
    float vetor2[n];

    for (int i = 0; i < n; i++)
    {
        cin>>vetor[i];
    }


    for (int i = 0; i < n; i++)
    {
       
        vetor2[i] = sqrt(vetor[i]);

    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%.4f \n",vetor2[i]);
    }
    
    


}