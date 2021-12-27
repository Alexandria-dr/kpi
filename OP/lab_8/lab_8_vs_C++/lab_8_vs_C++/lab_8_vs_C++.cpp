#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int** inputMatrix(int, int);    //����������� ������ 
void outputMatrix(int**, int,int);   //��������� ������ � �������
void product(int**, int**,int,int,int,int**);   //������� �������
int** createC(int n, int p);

int main()
{
	int n, m, p,  //��������� ������
		** matrixA, ** matrixB, **matrixC;  //��������� �� ������� 

	cout << "lines A (n): "; cin >> n;           //�������� ���������
	cout << "columns A, lines B (m): "; cin >> m;
	cout << "columns B (p): "; cin >> p;

	srand(time(NULL));
	matrixA = inputMatrix(n, m);   //����������� ���������, ������� ���� ���� ������������
	matrixB = inputMatrix(m, p);   //��������� �� �������� ���'��
	matrixC = createC(n,p);
	product(matrixA, matrixB, n, m, p,matrixC); //������� ������� 

	cout << endl << "Matrix A(n,m):" << endl;  //���� �������
	outputMatrix(matrixA, n, m);
	cout << endl << "Matrix B(m,p):" << endl;
	outputMatrix(matrixB, m, p);

	cout << endl << "Result of A*B: " << endl;  //���� ���������� 
	outputMatrix(matrixC, n, p);
}

//==========����������� ������==========
int** inputMatrix(int a, int b) {
	int ** mx = new int*[a];    //��������� � �������� ���'�� ������ ��������� (�����)
	for (int i = 0; i < a; i++) {
		mx[i] = new int[b];  //��������� � �������� ���'�� ������ (�������)
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			mx[i][j] = rand() % 21 - 5;  //������� ������� ������� (�� -5 �� 15)
		}
	}
	return mx;  //���������� ������ ��������� �� ���������� ����� 
}


//========��������� ������� � �������========
void outputMatrix(int** mx, int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout<<setw(6)<<mx[i][j];
		}
		cout << endl;
	}
}

int** createC(int n, int p) {
	int** mxC = new int* [n];    //��������� � �������� ���'�� �����-���������
	for (int i = 0; i < n; i++) {
		mxC[i] = new int[p];
	}
	return mxC;
}

//=============�������� �������=============
void product(int** mxA, int** mxB, int n, int m, int p,int** mxC) {
	int x = 0;
	int res;
	
	//���������� �������-����������
	for (int i = 0; i < n; i++) {	//����� 1� �������
		for (int k = 0; k < p; k++) {	//������� 2� �������
			res = 0;
			for (int j = 0; j < m; j++) {	  //���������� �������� ������� 
				x = mxA[i][j] * mxB[j][k];   //����� 1� ������� �������� �� �������� 2�
				res += x;                     //������� ��������� 
			}
				mxC[i][k]= res;			//��������� �������� � �����-���������		  
		}
	}
}