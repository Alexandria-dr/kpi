#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//��������� �������
float* inputArray(int); //��������� ������
void outputArray(float*, int); //��������� ������
int findMin(float*, int); //����������� ���������� �������� � �����
float sum(float*, int, float); //���������� �������� s
void replacement(float*,int,float, int);//����� ������� ������ �� k �� s

int main()
{
    int n, //��������� ������ �
        k; 
    float * pA,  //�������� �� ����� �
           aMin,//�������� �������� ������ �
           s; //������ �������� s
    cout << setprecision(2) << fixed;
    cout << "natural number k: "; cin >> k;
    cout << "Size of array A" << ":"; cin >> n;
    pA = inputArray(n); 
    cout <<endl<< "Array A:"<<endl; outputArray(pA, n);
    aMin = findMin(pA, n);
    cout <<endl<< "Min element of array A:" << aMin << endl;
    s = sum(pA, n, aMin);
    cout <<endl<< "s = " << s<< endl;
    replacement(pA,k,s,n);
    cout <<endl<< "Result:" << endl; outputArray(pA, n);
    delete[] pA;
}

//==========��������� ������==========
float* inputArray(int size) { 
    srand(time(NULL));
    float* arr = new float[size]; //�������� ���'�� � heap-������ � ���������� �� ������ � ���������� ���������
    for (int i = 0; i < size; i++)
        arr[i] = ((rand() % 201 - 100)+((rand() % 100 + 1)/(float)100)) ; //����������� ��������
    return arr; //���������� ��������� ���������� ������
}

//==========��������� ������==========
void outputArray(float* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << setw(8) << arr[i];
    cout << endl;
}

//=====����������� ���������� �������� � �����=====
int findMin(float* arr, int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

//==========���������� �������� s==========
float sum(float* arr, int size, float min) {
    float s=0;
    if (min == 0) {
        for (int i = 0; i < size; i++) {
            s += arr[i] * arr[i];
        }
    }
    else {
        for (int i = 0; i < size; i++) {
            s += arr[i] / min;
        }
    }
    return s;
}

//==========����� ������� ������ �� k �� s==========
void replacement(float* arr, int k, float s,int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > k) {
            arr[i] = s;
        }
    }
}