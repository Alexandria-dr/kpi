#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

//прототипи функцій
void inputArray(int,float*); //генерація масиву
void outputArray(int); //виведення масиву
float findMin( int); //знаходження мінімального значення в масиві
float sum( int, float); //обчислення значення s
void replacement(int,float, int);//заміна значень більших за k на s
float* pA;

int main()
{
    int n, //розмірність масиву А
        k; 
    float   //покажчик на масив А
           aMin,//мінімальне значення масиву А
           s; //шукане значення s
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

//==========генерація масиву==========
void inputArray(int size, float* ) { 
    srand(time(NULL));
    pA = new float[size]; //виділення динамічної пам'яті і збереження її адреси в локальному покажчику
    for (int i = 0; i < size; i++)
        pA[i] = ((rand() % 201 - 100)+((rand() % 100 + 1)/(float)100)) ; //ініціалізація елементів
     
}

//==========виведення масиву==========
void outputArray( int size) {
    for (int i = 0; i < size; i++)
        cout << setw(8) << pA[i];
    cout << endl;
}

//=====знаходження мінімального значення в масиві=====
float findMin( int size) {
    float min = pA[0];
    for (int i = 0; i < size; i++) {
        if (pA[i] < min) min = pA[i];
    }
    return min;
}

//==========обчислення значення s==========
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

//==========заміна значень більших за k на s==========
void replacement( int k, float s,int size) {
    for (int i = 0; i < size; i++) {
        if (pA[i] > k) {
            pA[i] = s;
        }
    }
}