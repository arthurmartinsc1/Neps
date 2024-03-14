#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

    int main() {
        
        int n;
        vector<int> vetor(n,0); 
        cin>>n;
        int vector[n];
        

        for (int i = 0; i < n; i++)
        {
            cin>>vector[i];

        }        
            int d1 =1;
            int m=0;
            
                    for (int i = 0; i < n; i++)
                    {
                        if (vector[i] == vector[i+1])
                        {
        
                            d1++;
                        }

                        if (vector[i]!=vector[i+1])
                        {
                            if (d1>m)
                            {
                               m = d1;
                            }
                            
                            d1 = 1;
                        }   
                    }
                                

                                                   
                cout<<m;
}
