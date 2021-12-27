#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//��������� �������
void inputArray(int,float*); //��������� ������
void outputArray(int); //��������� ������
float findMin( int); //����������� ���������� �������� � �����
float sum( int, float); //���������� �������� s
void replacement(int,float, int);//����� ������� ������ �� k �� s
float* pA;

int main()
{
    int n, //��������� ������ �
        k; 
    float   //�������� �� ����� �
           aMin,//�������� �������� ������ �
           s; //������ �������� s
    cout << setprecision(2) << fixed;
    cout << "natural number k: "; cin >> k;
    cout << "Size of array A" << ":"; cin >> n;
    inputArray(n,pA); 
    cout <<endl<< "Array A:"<<endl; outputArray(n);
    aMin = findMin(n);
    cout <<endl<< "Min element of array A:" << aMin << endl;
    s = sum(n, aMin);
    cout <<endl<< "s = " << s<< endl;
    replacement(k,s,n);
    cout <<endl<< "Result:" << endl; outputArray( n);
    delete[] pA;
}

//==========��������� ������==========
void inputArray(int size, float* ) { 
    srand(time(NULL));
    pA = new float[size]; //�������� �������� ���'�� � ���������� �� ������ � ���������� ���������
    for (int i = 0; i < size; i++)
        pA[i] = ((rand() % 201 - 100)+((rand() % 100 + 1)/(float)100)) ; //����������� ��������
     
}

//==========��������� ������==========
void outputArray( int size) {
    for (int i = 0; i < size; i++)
        cout << setw(8) << pA[i];
    cout << endl;
}

//=====����������� ���������� �������� � �����=====
float findMin( int size) {
    float min = pA[0];
    for (int i = 0; i < size; i++) {
        if (pA[i] < min) min = pA[i];
    }
    return min;
}

//==========���������� �������� s==========
float sum(int size, float min) {
    float s=0;
    if (min == 0) {
        for (int i = 0; i < size; i++) {
            s += pA[i] * pA[i];
        }
    }
    else {
        for (int i = 0; i < size; i++) {
            s += pA[i] / min;
        }
    }
    return s;
}

//==========����� ������� ������ �� k �� s==========
void replacement( int k, float s,int size) {
    for (int i = 0; i < size; i++) {
        if (pA[i] > k) {
            pA[i] = s;
        }
    }
}