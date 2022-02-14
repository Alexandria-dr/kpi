#include "lib.h"

//=========�������� ������ � ����==========
void createFile(string opFile) {
    ofstream outFile;
    string str;
    outFile.open(opFile,ios::out);    //���� ����������� �� ������������� � ����� �������
    if (!outFile.is_open()) {         //�������� �� �������� ����
        cout << "Cannot open file\n";
        return;
    }
    cout << "������ �����(��� ��������� ����� ctrl+z -> enter):\n";
    getline(cin, str, char(26));
    outFile << str;
    outFile.close();
}

//=======��������� ������ � �����========
void readFile(string opFile) { 
    string str;
    ifstream inFile;
    inFile.open(opFile);
    if (!inFile.is_open()) {
        cout << "Cannot open file\n";
        return;
    }
    cout << endl << "������� ����� " << opFile << " : " << endl;
    while (getline(inFile, str)) {
        cout << str << endl;
    }
    inFile.close();
}

//========����� ����� � ������=========
vector <string> getText(string from) { 
    fstream file;
    vector <string> res;
    string temp;
    file.open(from);
    while (getline(file, temp)) {   //���� � �����, ������ �� � ����� �������
        res.push_back(temp);
    }
    file.close();
    return res;
}

//====���������� ������� ������� � �����====
int numOfSymb(string str) { 
    int res = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            res++;
        }
    }
    return res;
}

//=========�������� �������� ����������===========
vector <string> quicksort(vector <string> array) {  
    if (array.size() < 2)    //������� �������
    {
        return array;
    }
    else      //����������� �������
    {
        string pivot = array[0];  //���������� ������� �������
        vector <string> less;
        vector <string> greater;
        for (int i = 1; i < array.size(); i++) {
            if (numOfSymb(array[i]) <= numOfSymb(pivot))
            {                               //���� ������� ������� ������ ��� �������
                less.push_back(array[i]);   //�� �������� ���� �� ������� less
            }
            else { greater.push_back(array[i]); }  //������ �� greater
        }
        vector <string> result;
        vector <string> temp;
        temp = quicksort(less);
        result.insert(result.end(), temp.begin(), temp.end()); //��'������ ������� �������
        result.push_back(pivot);
        temp = quicksort(greater);
        result.insert(result.end(), temp.begin(), temp.end());
        return result;
    }
} 

//=======��������� ������� ������� � ����� �����=======
vector <string> addSymb(vector <string> array) {
    for (int i = 0; i < array.size(); i++) {
        array[i] += " [ " + to_string(numOfSymb(array[i]))+" ]";
    }
    return array;
}
//=======�������� ������ � ���� � �������========
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
