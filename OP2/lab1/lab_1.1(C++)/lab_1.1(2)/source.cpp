#include "lib.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector <string> text;

    createFile("test.txt");
    readFile("test.txt");
    text = getText("test.txt");
    text = quicksort(text);
    text = addSymb(text);
    enterFile("result.txt", text);
    readFile("result.txt");

}
