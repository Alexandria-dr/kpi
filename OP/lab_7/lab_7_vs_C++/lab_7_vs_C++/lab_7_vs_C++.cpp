#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//прототипи функцій
float* inputArray(int); //генерація масиву
void outputArray(float*, int); //виведення масиву
int findMin(float*, int); //знаходження мінімального значення в масиві
float sum(float*, int, float); //обчислення значення s
void replacement(float*,int,float, int);//заміна значень більших за k на s

int main()
{
    int n, //розмірність масиву А
        k; 
    float * pA,  //покажчик на масив А
           aMin,//мінімальне значення масиву А
           s; //шукане значення s
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

//==========генерація масиву==========
float* inputArray(int size) { 
    srand(time(NULL));
    float* arr = new float[size]; //виділення пам'яті в heap-області і збереження її адреси в локальному покажчику
    for (int i = 0; i < size; i++)
        arr[i] = ((rand() % 201 - 100)+((rand() % 100 + 1)/(float)100)) ; //ініціалізація елементів
    return arr; //повернення покажчика динамічного масиву
}

//==========виведення масиву==========
void outputArray(float* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << setw(8) << arr[i];
    cout << endl;
}

//=====знаходження мінімального значення в масиві=====
int findMin(float* arr, int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

//==========обчислення значення s==========
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

//==========заміна значень більших за k на s==========
void replacement(float* arr, int k, float s,int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > k) {
            arr[i] = s;
        }
    }
}