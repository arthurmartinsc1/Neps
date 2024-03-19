#include <iostream>
using namespace std;

void busca(int n, int vetor[]) {
    int esqui[2000]; // distance to the nearest zero on the left
    int dir[2000];   // distance to the nearest zero on the right

    
    esqui[0] = 9999;
    dir[n+1] = 9999;

    for (int i = 1; i < n+1; i++) {
        if (vetor[i] == 0)
            esqui[i] = 0;
        else
            esqui[i] = esqui[i - 1] + 1;
    }

    for (int i = n; i > 0; i--) {
        if (vetor[i] == 0)
            dir[i] = 0;
        else
            dir[i] = dir[i + 1] + 1;
    }

    
    
    for (int i = 1; i<n+1;i++){ 
      cout << min(9,min(esqui[i], dir[i])) << " ";
   
}
}
int main() {
    int n;
    cin >> n;
    int vector1[n];

    for (int i = 1; i < n+1; i++) {
        cin >> vector1[i];
    }

    busca(n, vector1);

    return 0;
}
