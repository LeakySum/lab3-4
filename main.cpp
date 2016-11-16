#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int *M;
    int n, k, i, j;
    cout << "n=";
    cin >> n;
    M=(int*) malloc(n*sizeof(int));

    for (i=0; i<n; i++){
        M[i] = rand() % 15 +10;
    }

    for (i=0; i<n; i++){
        cout <<  M[i] <<" ";
    }
cout << endl;
    for ( i=0; i<n; i++) {
        for ( j = 0; j < (n-1); j++) {
            if (M[j] > M[j + 1]) {
                k = M[j];
                M[j] = M[j+1];
                M[j+1] = k;
            }
        }

    }
    for (i=0; i<n; i++){
      cout <<  M[i] <<" ";
    }

    return 0;
}