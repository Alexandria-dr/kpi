#include "lib.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector <Line> lineArray;

    lineArray=fillArray();
    outputL(lineArray);
    points—hecks(lineArray);
}
