#include "lib.h"

//============створення бінарного файлу============
void createKatalog(string name) {
    char c;
    Patient human = {};
    ofstream fOut(name, ios::app | ios::out | ios::binary);
    
    do {
        cout << "введіть прізвище пацієнта: ";
        cin.getline(human.pib, 100);
        cout << "введіть дату попереднього прийому (dd.mm.year): ";
        scanf_s("%d.%d.%d", &human.pVisit.day, &human.pVisit.month, &human.pVisit.year);
        cout << "введіть дату наступного прийому (dd.mm.year): ";
        scanf_s("%d.%d.%d", &human.fVisit.day, &human.fVisit.month, &human.fVisit.year);
        fOut.write((char*)&human, sizeof(Patient));
        cout << "Продовжити? (т/н)"; cin >> c;
        cout << endl;
        cin.ignore();
    } while ((c != 'н') && (c != 'Н'));
    fOut.close();
}
//============виведення файлу в консоль============
void outputKatalog(string name) {
    Patient human;
    ifstream fIn(name, ios::binary);
    cout << "\nСписок пацієнтів:\n";
    while (fIn.read((char*)&human, sizeof(human))) {
        //cout << "\nПІБ пацієнта: " << human.pib;
        printf("\nПІБ пацієнта:  %s", human.pib);
        printf("\nОстанній прийом: %02d.%02d.%04d", human.pVisit.day, human.pVisit.month, human.pVisit.year);
        printf("\nНаступний прийом: %02d.%02d.%04d  \n", human.fVisit.day, human.fVisit.month, human.fVisit.year);
    }
    fIn.close();
    return;
}

//============копіювання бінарного файлу============
void copyFile(string name) {
    Patient human;
    ofstream curr("curr.dat", ios::binary);
    ifstream in(name, ios::binary);
    int i;
    while (in.read((char*)&human, sizeof(human))) {
        curr.write((char*)&human, sizeof(Patient));
    }
    in.close();
    curr.close();
}
//============очищення старих записів============
void cleanKatalog(string name) {
    copyFile(name);
    Patient human;
    SYSTEMTIME tm;
    GetLocalTime(&tm);
    ifstream curr("curr.dat", ios::binary);
    ofstream in(name, ios::binary);
    while (curr.read((char*)&human, sizeof(human))) {
        if (human.fVisit.year >= tm.wYear) {
            if (human.fVisit.year == tm.wYear && human.fVisit.month >= tm.wMonth) {
                if (human.fVisit.month == tm.wMonth && human.fVisit.day >= tm.wDay) {
                    in.write((char*)&human, sizeof(Patient));
                }
                else if (human.fVisit.month > tm.wMonth) {
                    in.write((char*)&human, sizeof(Patient));
                }
            }
            else if (human.fVisit.year > tm.wYear) {
                in.write((char*)&human, sizeof(Patient));
            }
        }
    }
    curr.close();
    in.close();
}

//============сортування пацієнтів по файлах============
void createNewKatalogs(string name) {
    ifstream oldFile(name, ios::binary);
    ofstream FFile("secondary", ios::binary);
    ofstream SFile("other", ios::binary);
    Patient human;
    while (oldFile.read((char*)&human, sizeof(human))) {
        if (human.fVisit.year == human.pVisit.year) {
            if (human.fVisit.month == human.pVisit.month) {
                if ((human.fVisit.day - human.pVisit.day) <= 10) {
                    FFile.write((char*)&human, sizeof(Patient));
                }
            }
            else if (abs(human.fVisit.month - human.pVisit.month) == 1) {
                if (abs(human.fVisit.day - human.pVisit.day) >= 23) {
                    FFile.write((char*)&human, sizeof(Patient));
                }
                else {
                    SFile.write((char*)&human, sizeof(Patient));
                }
            }
            else {
                SFile.write((char*)&human, sizeof(Patient));
            }
        }
        else if (abs(human.fVisit.year - human.pVisit.year) == 1) {
            if (abs(human.fVisit.month - human.pVisit.month) == 11) {
                if (abs(human.fVisit.day - human.pVisit.day) >= 23) {
                    FFile.write((char*)&human, sizeof(Patient));
                }
            }
            else {
                SFile.write((char*)&human, sizeof(Patient));
            }
        }
        else {
            SFile.write((char*)&human, sizeof(Patient));
        }
    }
    oldFile.close();
    FFile.close();
    SFile.close();
}
 
//============очищення файлу============
void deleteFile(string name) {
    char c;
    cout << "\nОчистити файл? (т/н)"; cin >> c;
    if (c == 'т' || c == 'Т') {
        ofstream file(name, ios::trunc);
        file.close();
    }
}

