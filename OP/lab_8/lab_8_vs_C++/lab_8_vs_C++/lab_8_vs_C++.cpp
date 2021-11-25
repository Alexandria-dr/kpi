#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int** inputMatrix(int, int);
void outputMatrix(int**, int,int);
void product(int**, int**,int,int,int);

int main()
{
	int n, m, p, ** matrixA, ** matrixB;

	cout << "lines A (n): "; cin >> n; 
	cout << "columns A, lines B (m): "; cin >> m;
	cout << "columns B (p): "; cin >> p;

	srand(time(NULL));
	matrixA = inputMatrix(n, m);
	matrixB = inputMatrix(m, p);

	cout << endl << "Matrix A(n,m):" << endl;
	outputMatrix(matrixA, n, m);
	cout << endl << "Matrix B(m,p):" << endl;
	outputMatrix(matrixB, m, p);

	cout << endl << "Result of A*B: " << endl;
	product(matrixA, matrixB,n,m,p);
}

int** inputMatrix(int a, int b) {
	
	int ** mx = new int*[a];
	for (int i = 0; i < a; i++) {
		mx[i] = new int[b];
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			mx[i][j] = rand() % 11 - 5;
		}
	}
	return mx;
}

void outputMatrix(int** mx, int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout<<setw(6)<<mx[i][j];
		}
		cout << endl;
	}
}

void product(int** mxA, int** mxB, int n, int m, int p) {
	int x = 0;
	int res;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < p; k++) {
			res = 0;
			for (int j = 0; j < m; j++) {
				x = mxA[i][j] * mxB[j][k];
				res += x;
			}
			cout << setw(8) << res;
		}
		cout << endl;
	}
}