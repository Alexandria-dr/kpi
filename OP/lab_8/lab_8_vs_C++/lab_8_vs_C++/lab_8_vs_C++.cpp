#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int** inputMatrix(int, int);    //ініціалізація масиву 
void outputMatrix(int**, int,int);   //виведення масиву в консоль
void product(int**, int**,int,int,int,int**);   //добуток матриць
int** createC(int n, int p);

int main()
{
	int n, m, p,  //розмірність масивів
		** matrixA, ** matrixB, **matrixC;  //покажчики на матрицю 

	cout << "lines A (n): "; cin >> n;           //введення розмірності
	cout << "columns A, lines B (m): "; cin >> m;
	cout << "columns B (p): "; cin >> p;

	srand(time(NULL));
	matrixA = inputMatrix(n, m);   //ініціалізація покажчиків, завдяки яким буде здійснюватися
	matrixB = inputMatrix(m, p);   //звертання до динамічної пам'яті
	matrixC = createC(n,p);
	product(matrixA, matrixB, n, m, p,matrixC); //добуток матриць 

	cout << endl << "Matrix A(n,m):" << endl;  //вивід матриць
	outputMatrix(matrixA, n, m);
	cout << endl << "Matrix B(m,p):" << endl;
	outputMatrix(matrixB, m, p);

	cout << endl << "Result of A*B: " << endl;  //вивід результату 
	outputMatrix(matrixC, n, p);
}

//==========ініціалізація масиву==========
int** inputMatrix(int a, int b) {
	int ** mx = new int*[a];    //створення в динамічній пам'яті масиву покажчиків (рядки)
	for (int i = 0; i < a; i++) {
		mx[i] = new int[b];  //створення в динамічній пам'яті масивів (стовпці)
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			mx[i][j] = rand() % 21 - 5;  //задання значень матриці (від -5 до 15)
		}
	}
	return mx;  //повернення адреси покажчика на двовимірний масив 
}


//========виведення матриці в консоль========
void outputMatrix(int** mx, int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout<<setw(6)<<mx[i][j];
		}
		cout << endl;
	}
}

int** createC(int n, int p) {
	int** mxC = new int* [n];    //створюємо в динамічній пам'яті масив-результат
	for (int i = 0; i < n; i++) {
		mxC[i] = new int[p];
	}
	return mxC;
}

//=============множення матриць=============
void product(int** mxA, int** mxB, int n, int m, int p,int** mxC) {
	int x = 0;
	int res;
	
	//заповнення матриці-результату
	for (int i = 0; i < n; i++) {	//рядки 1ї матриці
		for (int k = 0; k < p; k++) {	//стовпці 2ї матриці
			res = 0;
			for (int j = 0; j < m; j++) {	  //обчислення елементу матриці 
				x = mxA[i][j] * mxB[j][k];   //рядок 1ї матриці множится на стовпець 2ї
				res += x;                     //добутки сумуються 
			}
				mxC[i][k]= res;			//результат передаємо в масив-результат		  
		}
	}
}