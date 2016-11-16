#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int **M;
    int n, m;
    int i, j, l;
    int k;
    cout << "n=";  cin >> n;
    cout << "m=";  cin >> m;
    M=(int**) malloc(n*sizeof(int));

    for (i=0; i<n; i++){M[i]=(int*) malloc(m*sizeof(int));}

    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        M[i][j] = rand() % 15 +10;
    }

    for ( i=0; i<n; i++) {
        for (j = 0; j < m; j++) {
            cout << M[i][j] << " ";
        }
        cout <<endl;
    }
    for (i=0; i<n; i++){
        cout <<  M[i] <<" ";
    }
    cout << endl;

    for ( i=0; i<n; i++) {
        for (j = 0; j < m; j++) {
            for (l = 0; l < (m - 1); l++) {
                if (M[i][l] > M[i][l + 1]) {
                    k = M[i][l];
                    M[i][l] = M[i][l + 1];
                    M[i][l + 1] = k;
                }
            }

        }

    }
    for ( j=0; j<m; j++) {
        for (i = 0; i < n; i++) {
            for (l = 0; l < (n - 1); l++) {
                if (M[l][j] > M[l + 1][j]) {
                    k = M[l][j];
                    M[l][j] = M[l + 1][j];
                    M[l + 1][j] = k;
                }
            }

        }

    }
    for ( i=0; i<n; i++){
        for ( j=0; j<m; j++) {
            cout << M[i][j] << " ";
        }
        cout <<endl;
     }
    return 0;
}
