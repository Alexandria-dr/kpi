#include "lib.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    createKatalog("Patient");
    outputKatalog("Patient");
    cleanKatalog("Patient");
    createNewKatalogs("Patient");
    cout << "\n=====���� ���������=====";
    outputKatalog("secondary");
    cout << "\n\n=====���� �����=====";
    outputKatalog("other");
    deleteFile("Patient");
}
