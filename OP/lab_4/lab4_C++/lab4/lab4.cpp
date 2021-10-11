#include <iostream>
#include<cmath>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "ukr"); //п≥дключенн€ кирилиц≥ в консол≥

    int n = 1, den = 1;     //≥н≥ц≥ал≥зац≥€ зм≥нних  
    float x, a;

    using namespace std;

    cout << "¬ведiть кiлькiсть елементiв послiдовностi n=";
    cin >> n;
    cout << "¬ведiть x=";
    cin >> x;

    for (int i = 1; i < (n+1); i++)     //цикл з параметром (виконуЇтьс€ допоки л≥чильник менший за n+1)
    {
        den *= (2 * i) * ((2*i)-1);                  //знаменник фактор≥ал
        a = pow(x,i)/den;                            //елемент посл≥довност≥
        cout << "n=" << i << "; an=" << a << endl;   //виведенн€ елементу
    }
}
