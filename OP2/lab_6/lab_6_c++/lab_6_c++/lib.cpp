#include "lib.h"

int* get_array(int& count) {
    std::cout << "¬вед≥ть масив ц≥лих чисел: " << std::endl;
    std::string str_array;
    std::getline(std::cin, str_array);
    int counter = 0;

    for (const char& c : str_array) {
        if (c == ' ') {
            counter++;
        }
    }
    counter++;
    count = counter;

    int* num_arr = new int[counter];
    int i = 0;
    int num_counter = 0;
    while (i < str_array.length()) {
        std::string curr_num;
        while (i < str_array.length() && str_array[i] != ' ') {
            curr_num.push_back(str_array[i]);
            i++;
        }
        int trueNum = std::stoi(curr_num);
        num_arr[num_counter] = trueNum;
        num_counter++;
        i++;
    }
    return num_arr;
}
