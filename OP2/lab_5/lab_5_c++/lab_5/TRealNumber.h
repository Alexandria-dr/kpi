#pragma once
#include "TNumber.h"
class TRealNumber :
    public TNumber
{
    int frac;
public:
    TRealNumber(float);
    std::string get_str_number() override;
    int find_last_digit() override;
};

