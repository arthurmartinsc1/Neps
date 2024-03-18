#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;
    int vetor1[n];

        for (int i = 0; i < n; i++)
        {
            cin>>vetor1[i];
        }

vector<int> vector2(n,0);

            for (int i = 0; i < n; i++)
            {
                if (vetor1[i]==1)
                {
                    vector2[i]++;
                }

                if (vetor1[i-1] == 1 &&    i!= 0)
                {
                    vector2[i]++;
                }
                if (vetor1[i+1] == 1 &&    i!=n-1)
                {
                    vector2[i]++;

                }           
            }

             for (int i = 0; i < n; i++)
             {
                cout<< vector2[i]<<"\n";        
             }
}
    