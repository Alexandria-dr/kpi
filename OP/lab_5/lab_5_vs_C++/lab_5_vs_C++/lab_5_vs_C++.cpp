#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, num = 1, lich, ostat, mersen=0;

    cout << "Enter n = ";
    cin >> n;
    cout << "Mersenne numbers:"<<endl;

    while (mersen<n){
        lich = 0;
        for (int i = 1; i < (num+1); i++)
        {
            ostat = num % i;
            if (ostat==0)
            {
                lich += 1;
            }
        }
        if (lich<=2)
        {
            mersen = pow(2, num) - 1;
            if (mersen<n)
            {
                cout << "\t" << mersen << endl;
            }
            
        }
        num += 1;
    }

}
