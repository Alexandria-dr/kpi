#include <iostream>
using namespace std;

void outputArray(char array[]);
void initArray(char array1[], char array2[]);
int initThirdArrayFindRes(char array1[], char array2[], char array3[], bool full);

int main()
{
    char array1[10];
    char array2[10];
    char array3[10];

    int res;
    bool full = 0;

    initArray(array1, array2);
    res = initThirdArrayFindRes(array1, array2, array3, full);
    cout << "first array: "; outputArray(array1); cout << endl;
    cout << "second array: "; outputArray(array2); cout << endl;
    cout << "third array: "; outputArray(array3); cout << endl;
    cout << "result:" << res;
    
}

void outputArray(char array[]) {
    for (int i = 0; i < 10; i++) {
        cout << array[i]<< " ";
    }
}

void initArray(char array1[],char array2[]) {
    for (int i = 0; i < 10; i++) {
        array1[i] = 100 + i;
        array2[i] = 110 - i * i;
    }
};

int initThirdArrayFindRes(char array1[], char array2[], char array3[], bool full) {
    int res = 1;
    for (int i = 0; i < 10; i++) {
        full = 0;
        for (int j = 0; j < 10; j++) {
            if (array1[i] == array2[j]) {
                array3[i] = array2[j];
                full = 1;
                cout << int(array3[i]) << endl;
                res *= array3[i];
            }
        }
        if (!full) {
            array3[i] = 48;
        }
    }
    return res;
};