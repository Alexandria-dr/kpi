#include "lib.h"

//=========введення тексту в файл==========
void createFile(string opFile) {
    ofstream outFile;
    string str;
    outFile.open(opFile,ios::out);    //файл створюється за замовчуванням в папці проекту
    if (!outFile.is_open()) {         //перевірка чи відкрився файл
        cout << "Cannot open file\n";
        return;
    }
    cout << "введіть текст(для закінчення вводу ctrl+z -> enter):\n";
    getline(cin, str, char(26));
    outFile << str;
    outFile.close();
}

//=======виведення тексту з файла========
void readFile(string opFile) { 
    string str;
    ifstream inFile;
    inFile.open(opFile);
    if (!inFile.is_open()) {
        cout << "Cannot open file\n";
        return;
    }
    cout << endl << "читання файлу " << opFile << " : " << endl;
    while (getline(inFile, str)) {
        cout << str << endl;
    }
    inFile.close();
}

//========запис рядків у вектор=========
vector <string> getText(string from) { 
    fstream file;
    vector <string> res;
    string temp;
    file.open(from);
    while (getline(file, temp)) {   //поки є рядки, додаємо їх в кінець вектора
        res.push_back(temp);
    }
    file.close();
    return res;
}

//====визначення кількості символів у рядку====
int numOfSymb(string str) { 
    int res = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            res++;
        }
    }
    return res;
}

//=========алгоритм швидкого сортування===========
vector <string> quicksort(vector <string> array) {  
    if (array.size() < 2)    //базовий випадок
    {
        return array;
    }
    else      //рекурсивний випадок
    {
        string pivot = array[0];  //ініціалізуємо опорний елемент
        vector <string> less;
        vector <string> greater;
        for (int i = 1; i < array.size(); i++) {
            if (numOfSymb(array[i]) <= numOfSymb(pivot))
            {                               //якщо елемент вектору менший або дорівнює
                less.push_back(array[i]);   //то записуємо його до вектору less
            }
            else { greater.push_back(array[i]); }  //інакше до greater
        }
        vector <string> result;
        vector <string> temp;
        temp = quicksort(less);
        result.insert(result.end(), temp.begin(), temp.end()); //об'єднуємо отримані вектори
        result.push_back(pivot);
        temp = quicksort(greater);
        result.insert(result.end(), temp.begin(), temp.end());
        return result;
    }
} 

//=======додавання кількості символів у кінець рядка=======
vector <string> addSymb(vector <string> array) {
    for (int i = 0; i < array.size(); i++) {
        array[i] += " [ " + to_string(numOfSymb(array[i]))+" ]";
    }
    return array;
}
//=======введення тексту в файл з вектора========
void enterFile(string opFile, vector <string> text) { 
    fstream file;
    file.open(opFile,ios::out);
    if (!file.is_open()) {
        cout << "Cannot open file\n";
        return;
    }
    for (string str : text) {
        file << str << "\n";
    }
    file.close();
}
