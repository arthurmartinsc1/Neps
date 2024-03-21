#include <iostream>
#include <vector>
using namespace std;

int main(){
     int n;
        cin>>n;

        int matriz1[n][n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>> matriz1[i][j];
                }
                
            }

        vector<int> somalinhas(n,0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                somalinhas[i]+=matriz1[i][j];
            }
            
        }        
             

        vector<int> somacolunas(n,0);
        for (int j = 0; j < n  ; j++)
        {
            for (int i = 0; i < n; i++)
            {
                somacolunas[j]+=matriz1[i][j];
            }
            
        }

        int matriz2[n][n];
            for (int i = 0; i < n; i++)
            {
               for (int j = 0; j< n; j++)
               {
                    matriz2[i][j] = somalinhas[i] +somacolunas[j] -2*matriz1[i][j];
               }
               
            }
            

            int a = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (matriz2[i][j]>a)
                    {
                        a = matriz2[i][j];
                    }
                 }
            
            }
            cout<<a;
        
}
    


