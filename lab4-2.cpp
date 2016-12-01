#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int **M;
	int n, m;
	int i, j, l;
	int k;
	cout << "Enter the number of lines n=";
	cin >> n;
	cout << "Enter the number of columns m=";  cin >> m;
	
	M = (int**)malloc(n * sizeof(int));

	for (i = 0; i<n; i++) { M[i] = (int*)malloc(m * sizeof(int)); }

	

	for (i = 0; i<n; i++) {
		for (j = 0; j < m; j++) {
			cin >> M[i][j];
		}
		cout << endl;
	}


	for (i = 0; i<n; i++) {
		for (j = 0; j < m; j++) {
			for (l = 0; l < (m -j- 1); l++) {
				if (M[i][l] > M[i][l + 1]) {
					k = M[i][l];
					M[i][l] = M[i][l + 1];
					M[i][l + 1] = k;
				}
			}
		}
	}
	
	cout << endl;
	for (i = 0; i<n; i++) {
		for (j = 0; j<m; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}

