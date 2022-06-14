#include "lib.h"

int main()
{
    std::vector<TRealNumber> array_real;
    std::vector<TIntNumber> array_int;
    int m, n;

    srand(time(NULL));
    std::cout << "int m = "; std::cin >> m;  //робота з масивом цілих чисел
    create_array(m, array_int);
    output_array(array_int);
    std::cout << "\nsum of first digit in array = " << sum_first(array_int);


    std::cout << "\n\nreal n = "; std::cin >> n;  //робота з масивом раціональних чисел
    create_array(n, array_real);
    output_array(array_real);
    std::cout << "\nsum of last digit in array = " << sum_last(array_real);
}